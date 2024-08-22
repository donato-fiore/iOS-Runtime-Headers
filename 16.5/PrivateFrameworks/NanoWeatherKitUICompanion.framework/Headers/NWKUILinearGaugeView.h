// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWKUILINEARGAUGEVIEW_H
#define NWKUILINEARGAUGEVIEW_H

@class UIView, NSArray, CAGradientLayer, CALayer, UIColor;



@interface NWKUILinearGaugeView : UIView

@property (retain, nonatomic) NSArray *backgroundColorIndices; // ivar: _backgroundColorIndices
@property (retain, nonatomic) CAGradientLayer *backgroundGaugeLayer; // ivar: _backgroundGaugeLayer
@property (retain, nonatomic) NSArray *colorIndices; // ivar: _colorIndices
@property (retain, nonatomic) CAGradientLayer *gaugeLayer; // ivar: _gaugeLayer
@property (retain, nonatomic) CALayer *gaugeWrapperLayer; // ivar: _gaugeWrapperLayer
@property (nonatomic) CGFloat highValue; // ivar: _highValue
@property (nonatomic, getter=shouldIncludeBackground) BOOL includeBackground; // ivar: _includeBackground
@property (copy, nonatomic) UIColor *indicatorFillColor; // ivar: _indicatorFillColor
@property (nonatomic) CGFloat lastLayoutSubviewsHeight; // ivar: _lastLayoutSubviewsHeight
@property (nonatomic) ? layoutConstants; // ivar: _layoutConstants
@property (nonatomic, getter=shouldRenderValueAsPercentage) BOOL renderValueAsPercentage; // ivar: _renderValueAsPercentage
@property (nonatomic) CGFloat value; // ivar: _value
@property (retain, nonatomic) UIView *valueIndicator; // ivar: _valueIndicator
@property (nonatomic) CGRect valueIndicatorCutoutFrame; // ivar: _valueIndicatorCutoutFrame


-(id)_cgColorsFromColorIndices:(id)arg0 ;
-(id)_createGradientLayer;
-(id)initWithLayoutConstants:(struct ? )arg0 ;
-(struct CGPoint )_centerOfValueIndicator:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_applyCGColors:(id)arg0 toGradientLayer:(id)arg1 ;
-(void)_gradientLocationInformationForGaugeWithHeight:(CGFloat)arg0 colorIndices:(id)arg1 handler:(id)arg2 ;
-(void)_setNeedsUpdateGauge;
-(void)applyBackgroundGaugeFilters:(id)arg0 fraction:(CGFloat)arg1 ;
-(void)applyForegroundGaugeFilters:(id)arg0 ;
-(void)applyIndicatorFillColor:(id)arg0 ;
-(void)interpolateIndicatorWithColor:(id)arg0 fraction:(CGFloat)arg1 ;
-(void)layoutSubviews;


@end


#endif