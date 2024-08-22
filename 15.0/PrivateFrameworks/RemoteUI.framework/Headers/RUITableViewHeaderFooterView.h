// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUITABLEVIEWHEADERFOOTERVIEW_H
#define RUITABLEVIEWHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UITableView;



@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView

@property (weak) UITableView *tableView; // ivar: _tableView


-(struct UIEdgeInsets )insetsForHeaderFooter;
-(void)layoutSubviews;


@end


#endif