// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSECTIONBASEDTABLEVIEW_H
#define MCSECTIONBASEDTABLEVIEW_H

@class UIView, UITableView;



@interface MCSectionBasedTableView : UIView

@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)_createTableView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif