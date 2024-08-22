// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNATURALLIGHTCOLORSWATCHVIEW_H
#define HUNATURALLIGHTCOLORSWATCHVIEW_H

@class UIView, CAGradientLayer, CAShapeLayer, UIImage;



@interface HUNaturalLightColorSwatchView : UIView

@property (retain, nonatomic) CAGradientLayer *circleGradientLayer; // ivar: _circleGradientLayer
@property (retain, nonatomic) CAShapeLayer *circleMaskLayer; // ivar: _circleMaskLayer
@property (retain, nonatomic) CAShapeLayer *circleOuterLayer; // ivar: _circleOuterLayer
@property (retain, nonatomic) CAGradientLayer *selectedCircleGradientLayer; // ivar: _selectedCircleGradientLayer
@property (retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer; // ivar: _selectedCircleInnerLayer
@property (retain, nonatomic) CAShapeLayer *selectedCircleMaskLayer; // ivar: _selectedCircleMaskLayer
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState
@property (retain, nonatomic) UIImage *truetoneIcon; // ivar: _truetoneIcon


+(id)_createGradientLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_buildMaskFromImage:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLayout;
-(void)layoutSubviews;


@end


#endif