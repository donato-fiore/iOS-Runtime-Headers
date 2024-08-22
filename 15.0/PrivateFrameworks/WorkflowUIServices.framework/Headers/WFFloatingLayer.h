// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFLOATINGLAYER_H
#define WFFLOATINGLAYER_H

@class CALayer, WFGradient, CAGradientLayer, UITraitCollection;



@interface WFFloatingLayer : CALayer

@property (nonatomic) BOOL colorizesShadow; // ivar: _colorizesShadow
@property (copy, nonatomic) WFGradient *gradient; // ivar: _gradient
@property (weak, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic) BOOL usePillCornerRadius; // ivar: _usePillCornerRadius


-(id)init;
-(void)applyConfiguration:(id)arg0 ;
-(void)layoutSublayers;
-(void)updateBackgroundColor;
-(void)updateShadowColor;


@end


#endif