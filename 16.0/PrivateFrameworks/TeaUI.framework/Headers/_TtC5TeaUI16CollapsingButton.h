// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI16COLLAPSINGBUTTON_H
#define _TTC5TEAUI16COLLAPSINGBUTTON_H

@class UIView;



@interface _TtC5TeaUI16CollapsingButton : UIView {
    ? isCollapsed;
    ? configuration;
    ? button;
    ? animatedTitleLabel;
    ? collapsedSize;
    ? isAnimating;
}


@property (nonatomic) CGRect frame;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;


@end


#endif