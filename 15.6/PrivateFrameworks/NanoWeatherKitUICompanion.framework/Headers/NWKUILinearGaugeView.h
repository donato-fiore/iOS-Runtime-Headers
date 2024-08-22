// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWKUILINEARGAUGEVIEW_H
#define NWKUILINEARGAUGEVIEW_H

@class UIView, NSArray, CAGradientLayer, UIColor, CAShapeLayer;



@interface NWKUILinearGaugeView : UIView

@property (retain, nonatomic) NSArray *colorIndices; // ivar: _colorIndices
@property (retain, nonatomic) CAGradientLayer *gaugeLayer; // ivar: _gaugeLayer
@property (copy, nonatomic) UIColor *indicatorFillColor; // ivar: _indicatorFillColor
@property (nonatomic) CGFloat lastLayoutSubviewsHeight; // ivar: _lastLayoutSubviewsHeight
@property (nonatomic) ? layoutConstants; // ivar: _layoutConstants
@property (nonatomic, getter=shouldRenderValueAsPercentage) BOOL renderValueAsPercentage; // ivar: _renderValueAsPercentage
@property (nonatomic) CGFloat value; // ivar: _value
@property (retain, nonatomic) CAShapeLayer *valueIndicatorLayer; // ivar: _valueIndicatorLayer


-(id)initWithLayoutConstants:(struct ? )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setNeedsUpdateGauge;
-(void)applyCGColorsToGradientLayer:(id)arg0 ;
-(void)applyFilter:(id)arg0 ;
-(void)applyIndicatorFillColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateMonochromeColor:(id)arg0 fraction:(CGFloat)arg1 ;


@end


#endif