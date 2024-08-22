// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREFLECTINGVIEW_H
#define _UIREFLECTINGVIEW_H



#import "UIView.h"

@interface _UIReflectingView : UIView {
    UIView *_gradientView;
    CGFloat _reflectionAlpha;
}


@property (readonly, retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) CGFloat reflectionAlpha;
@property (nonatomic) CGFloat reflectionFraction;


-(id)_gradientLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateGradientColors;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif