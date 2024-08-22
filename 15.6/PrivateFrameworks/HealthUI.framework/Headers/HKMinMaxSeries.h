// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMINMAXSERIES_H
#define HKMINMAXSERIES_H

@class UIImage;


#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"

@interface HKMinMaxSeries : HKGraphSeries

@property (retain, nonatomic) UIImage *selectedPointMarkerImage; // ivar: _selectedPointMarkerImage
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle; // ivar: _selectedStrokeStyle
@property (retain, nonatomic) UIImage *unselectedPointMarkerImage; // ivar: _unselectedPointMarkerImage
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle; // ivar: _unselectedStrokeStyle


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 context:(struct CGContext *)arg2 ;
-(void)_drawStrokeWithBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 context:(struct CGContext *)arg2 axisRect:(struct CGRect )arg3 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif