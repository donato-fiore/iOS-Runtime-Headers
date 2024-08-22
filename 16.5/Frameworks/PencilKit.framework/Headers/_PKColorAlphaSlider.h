// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKCOLORALPHASLIDER_H
#define _PKCOLORALPHASLIDER_H

@class UIControl, CAGradientLayer, UIColor, UIView;
@protocol _PKColorAlphaSliderDelegate;


#import "_PKCheckerGridView.h"
#import "_PKSliderKnobView.h"

@interface _PKColorAlphaSlider : UIControl

@property (retain, nonatomic) _PKCheckerGridView *alphaGridView; // ivar: _alphaGridView
@property (retain, nonatomic) CAGradientLayer *alphaGridViewMaskLayer; // ivar: _alphaGridViewMaskLayer
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (retain, nonatomic) UIView *colorView; // ivar: _colorView
@property (retain, nonatomic) CAGradientLayer *colorViewMaskLayer; // ivar: _colorViewMaskLayer
@property (weak, nonatomic) NSObject<_PKColorAlphaSliderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maxAlpha; // ivar: _maxAlpha
@property (nonatomic) CGFloat minAlpha; // ivar: _minAlpha
@property (retain, nonatomic) _PKSliderKnobView *sliderKnobView; // ivar: _sliderKnobView


+(id)rgbaColorFromColorIfPossible:(id)arg0 ;
+(void)_layoutGradientMaskLayer:(id)arg0 frame:(struct CGRect )arg1 isReversed:(BOOL)arg2 ;
-(CGFloat)colorAlphaForSliderKnobXPosition:(CGFloat)arg0 ;
-(CGFloat)sliderKnobXPositionForColorAlpha:(CGFloat)arg0 ;
-(NSInteger)_uiColorUserInterfaceStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_knobViewFrameForColorAlpha:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_colorViewTapGestureHandler:(id)arg0 ;
-(void)didPanSliderKnob:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif