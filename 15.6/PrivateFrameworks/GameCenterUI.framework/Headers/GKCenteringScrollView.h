// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCENTERINGSCROLLVIEW_H
#define GKCENTERINGSCROLLVIEW_H

@class UIScrollView, UIView;



@interface GKCenteringScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView


-(void)centerContentViewIfDesirable;
-(void)layoutSubviews;


@end


#endif