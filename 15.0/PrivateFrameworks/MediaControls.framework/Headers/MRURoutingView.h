// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUROUTINGVIEW_H
#define MRUROUTINGVIEW_H

@class UIView, UITableView;



@interface MRURoutingView : UIView

@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif