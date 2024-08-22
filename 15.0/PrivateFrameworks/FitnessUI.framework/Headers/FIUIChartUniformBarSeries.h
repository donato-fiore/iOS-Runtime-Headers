// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTUNIFORMBARSERIES_H
#define FIUICHARTUNIFORMBARSERIES_H

@class NSDate, NSArray;


#import "FIUIChartNumericSeries.h"

@interface FIUIChartUniformBarSeries : FIUIChartNumericSeries

@property (nonatomic) *CGGradient barGradient; // ivar: _barGradient
@property (nonatomic) CGFloat barSpacing; // ivar: _barSpacing
@property (nonatomic) CGFloat barWidth; // ivar: _barWidth
@property (nonatomic) NSDate *minDate; // ivar: _minDate
@property (retain, nonatomic) NSArray *plotPoints; // ivar: _plotPoints
@property (nonatomic) CGFloat roundedCornerRadius; // ivar: _roundedCornerRadius


-(CGFloat)xValueForPointFromChartPoint:(id)arg0 ;
-(CGFloat)yValueForPointFromChartPointValue:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSubviews;


@end


#endif