// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHTRENDLINEDATA_H
#define TSCHTRENDLINEDATA_H

@class TSURegressionModel, TSUBezierPath, NSString;

#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"

@interface TSCHTrendLineData : NSObject {
    TSCHChartSeries *_series;
    NSInteger _lineType;
    TSURegressionModel *_regression;
    CGFloat _maxYValue;
    CGFloat _minYValue;
    CGFloat _maxXValue;
    CGFloat _minXValue;
    int _inputAxisType;
    int _outputAxisType;
    BOOL _trendLineInvalid;
    TSUBezierPath *_cachedTrendLinePath;
    CGRect _cachedChartFrame;
    CGFloat _offsetInBody;
    BOOL _cachedChartVertical;
}


@property (readonly, nonatomic) float equationTextOpacity;
@property (readonly, nonatomic) NSString *rSquaredText;
@property (readonly, nonatomic) float rSquaredTextOpacity;
@property (readonly, nonatomic) BOOL showEquation;
@property (readonly, nonatomic) BOOL showRSquared;
@property (readonly, nonatomic) BOOL showTrendLine; // ivar: _showTrendLine
@property (readonly, nonatomic) BOOL showTrendLineLegendText;
@property (readonly, nonatomic) NSString *trendLineLegendText;


+(NSInteger)getTrendLineTypeForSeries:(id)arg0 ;
-(?)trendLineUnitSpacePoints:(?)arg0 count:(?)arg1 drawCurvemaxPoints;
-(BOOL)showTrendLineForAxisID:(id)arg0 ;
-(CGFloat)maxValueForAxisID:(id)arg0 ;
-(CGFloat)minValueForAxisID:(id)arg0 ;
-(NSInteger)p_getTrendLineType;
-(NSUInteger)p_fillArrayX:(*CGFloat)arg0 andY:(*CGFloat)arg1 fromPoints:(id)arg2 hasNegativeX:(*BOOL)arg3 ;
-(NSUInteger)p_fillArrayX:(id)arg0 andY:(id)arg1 fromPoints:(id)arg2 ;
-(id)initWithSeries:(id)arg0 ;
-(id)p_dataPointValues;
-(id)p_linePathFromPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)trendLinePathForChartRect:(struct CGRect )arg0 offsetInBody:(CGFloat)arg1 vertical:(BOOL)arg2 ;
-(struct ? )p_unitPoint:(struct ? )arg0 toScreenFrame:(struct CGRect )arg1 offset:(CGFloat)arg2 vertical:(BOOL)arg3 ;
-(struct __CFAttributedString *)newEquationAttributedString;
-(void)dealloc;
-(void)invalidateData;
-(void)p_addPathToTrendLinePathWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 curved:(BOOL)arg2 curveFitter:(id)arg3 ;
-(void)p_calcBounds;
-(void)p_calcBoundsForMovingAverage;
-(void)p_calcMARegression:(NSUInteger)arg0 xData:(id)arg1 yData:(id)arg2 ;
-(void)p_calcRegression:(NSUInteger)arg0 xData:(*CGFloat)arg1 yData:(*CGFloat)arg2 ;
-(void)p_generateRegression;
-(void)p_releaseCache;
-(void)p_updateTrendLineData;
-(void)updateIfNeeded;


@end


#endif