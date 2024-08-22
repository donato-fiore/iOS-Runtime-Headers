// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTPLATTERSASHVIEW_H
#define WFCOMPACTPLATTERSASHVIEW_H

@class UIView, WFIcon, WFIconHostingView, UILabel, NSString, UIVisualEffectView;



@interface WFCompactPlatterSashView : UIView

@property (readonly, nonatomic) CGFloat contentBaseline;
@property (retain, nonatomic) WFIcon *icon; // ivar: _icon
@property (retain, nonatomic) WFIconHostingView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(id)font;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif