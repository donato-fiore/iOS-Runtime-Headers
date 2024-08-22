// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKANNOTATEDHORIZONTALLINESERIES_H
#define HKANNOTATEDHORIZONTALLINESERIES_H

@class NSArray;


#import "HKGraphSeries.h"

@interface HKAnnotatedHorizontalLineSeries : HKGraphSeries

@property (retain, nonatomic) NSArray *horizontalLineStyles; // ivar: _horizontalLineStyles
@property (nonatomic) CGFloat valueOutlineWidth; // ivar: _valueOutlineWidth


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)_defaultLabelStyle;
-(id)_defaultLineStyle;
-(id)_horizontalLineSeriesStyleForBlockCoordinate:(id)arg0 ;
-(id)_stringValueForCoordinate:(id)arg0 valueStyle:(id)arg1 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(struct CGRect )_boundsForString:(id)arg0 coordinate:(id)arg1 valueAttributes:(id)arg2 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif