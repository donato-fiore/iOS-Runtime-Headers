// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKRINGGRADIENTVIEW_H
#define PKRINGGRADIENTVIEW_H

@class UIView, CAGradientLayer, CAShapeLayer, UIColor;



@interface PKRingGradientView : UIView {
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_backgroundCap;
    CAShapeLayer *_gradientCap;
    *CGColor _effectiveFillColor;
    *CGColor _effectiveStrokeColor;
    BOOL _gradientCapIsFillColor;
}


@property (nonatomic) CGFloat currentAngle; // ivar: _currentAngle
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (copy, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (copy, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (nonatomic) CGFloat minimumAngle; // ivar: _minimumAngle
@property (readonly, nonatomic) CGFloat radius;
@property (copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly, nonatomic) CGFloat totalWidth;


-(CGFloat)_maskRadius;
-(CGFloat)_offsetEndAngle;
-(CGFloat)_offsetStartAngle;
-(CGFloat)ringWidth;
-(CGFloat)strokeWidth;
-(id)init;
-(struct CGPoint )_center;
-(struct CGPoint )_centerPointForMaskViewWithAngle:(CGFloat)arg0 adjustToCover:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateEffectiveColors;
-(void)_updateGradient;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif