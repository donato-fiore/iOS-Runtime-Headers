// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMINMAXSERIES_H
#define HKMINMAXSERIES_H

@class UIImage, NSLock;


#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"

@interface HKMinMaxSeries : HKGraphSeries

@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImageStorage; // ivar: _selectedPointMarkerImageStorage
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyleStorage; // ivar: _selectedStrokeStyleStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (retain, nonatomic) UIImage *unselectedPointMarkerImage;
@property (retain, nonatomic) UIImage *unselectedPointMarkerImageStorage; // ivar: _unselectedPointMarkerImageStorage
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyleStorage; // ivar: _unselectedStrokeStyleStorage


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 context:(struct CGContext *)arg2 ;
-(void)_drawStrokeWithBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 context:(struct CGContext *)arg2 axisRect:(struct CGRect )arg3 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif