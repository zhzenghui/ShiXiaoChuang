//
//  ZHBaseMaterialsViewController.h
//  ShiXiaoChuang
//
//  Created by bejoy on 14-4-24.
//  Copyright (c) 2014年 zeng hui. All rights reserved.
//

#import "BaseViewController.h"

@interface ZHChangeViewController : BaseViewController<UITableViewDataSource, UITableViewDelegate>
{
    UITableView *tb;

    int currentTable;
}
@end
