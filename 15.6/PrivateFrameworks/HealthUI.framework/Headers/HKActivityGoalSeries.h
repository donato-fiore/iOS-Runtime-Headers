// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYGOALSERIES_H
#define HKACTIVITYGOALSERIES_H



#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"
#import "HKFillStyle.h"

@interface HKActivityGoalSeries : HKGraphSeries {
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
}




-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)initWithStrokeStyle:(id)arg0 fillStyle:(id)arg1 ;
-(void)_enumerateCoordinateList:(id)arg0 withTransform:(struct CGAffineTransform )arg1 zoomLevelConfiguration:(id)arg2 axisRect:(struct CGRect )arg3 block:(id)arg4 ;
-(void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg0 withTransform:(struct CGAffineTransform )arg1 zoomLevelConfiguration:(id)arg2 axisRect:(struct CGRect )arg3 block:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif