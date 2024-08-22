// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKJULIANINDEXEDSEVENDAYQUANTITYSERIES_H
#define HKJULIANINDEXEDSEVENDAYQUANTITYSERIES_H

@class UIColor;


#import "HKGraphSeries.h"

@interface HKJulianIndexedSevenDayQuantitySeries : HKGraphSeries

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) CGFloat hollowLineRatio; // ivar: _hollowLineRatio
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)initWithColor:(id)arg0 lineWidth:(CGFloat)arg1 ;
-(id)initWithColor:(id)arg0 lineWidth:(CGFloat)arg1 hollowLineRatio:(CGFloat)arg2 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif