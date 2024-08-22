// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUICHARTBARSERIES_H
#define FIUICHARTBARSERIES_H

@class UIColor, NSArray;


#import "FIUIChartNumericSeries.h"

@interface FIUIChartBarSeries : FIUIChartNumericSeries

@property (retain, nonatomic) UIColor *backgroundStrokeColor; // ivar: _backgroundStrokeColor
@property (nonatomic) CGFloat backgroundStrokeWidth; // ivar: _backgroundStrokeWidth
@property (retain, nonatomic) UIColor *barColor; // ivar: _barColor
@property (retain, nonatomic) NSArray *barColors; // ivar: _barColors
@property (nonatomic) *CGGradient barGradient; // ivar: _barGradient
@property (retain, nonatomic) NSArray *barLabels; // ivar: _barLabels
@property (nonatomic) CGFloat barSpacing; // ivar: _barSpacing
@property (nonatomic) CGFloat barWidth; // ivar: _barWidth
@property (nonatomic) BOOL fadeZeroBars; // ivar: _fadeZeroBars
@property (retain, nonatomic) UIColor *fadedBarColor; // ivar: _fadedBarColor
@property (retain, nonatomic) NSArray *labelAttributes; // ivar: _labelAttributes
@property (retain, nonatomic) NSArray *plotPoints; // ivar: _plotPoints
@property (nonatomic) CGFloat roundedCornerRadius; // ivar: _roundedCornerRadius
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


-(id)_chartColorForChartYValue:(CGFloat)arg0 ;
-(id)init;
-(void)_strokeRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 color:(struct CGColor *)arg2 width:(CGFloat)arg3 ;
-(void)_translateColorThresholds;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSubviews;


@end


#endif