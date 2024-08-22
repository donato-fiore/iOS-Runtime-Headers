// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCATEGORYVIEW_H
#define STSCATEGORYVIEW_H

@class UIView, UITableView;



@interface STSCategoryView : UIView

@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) CGPoint footerOffset; // ivar: _footerOffset
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)init;


@end


#endif