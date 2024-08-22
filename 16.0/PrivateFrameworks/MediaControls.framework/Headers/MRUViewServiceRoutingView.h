// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVIEWSERVICEROUTINGVIEW_H
#define MRUVIEWSERVICEROUTINGVIEW_H

@class UIView, UITableView;


#import "MRUViewServiceRoutingFooterView.h"
#import "MRUViewServiceRoutingHeaderView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUViewServiceRoutingView : UIView

@property (retain, nonatomic) UIView *alertView; // ivar: _alertView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) MRUViewServiceRoutingFooterView *footerView; // ivar: _footerView
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible; // ivar: _footerVisible
@property (readonly, nonatomic) MRUViewServiceRoutingHeaderView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (nonatomic) BOOL showAlertView; // ivar: _showAlertView
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateVisibility;


@end


#endif