// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBARSERIES_H
#define HKBARSERIES_H

@class NSMutableArray, NSLock;


#import "HKGraphSeries.h"
#import "HKBarSeriesConfiguration.h"
#import "HKFillStyle.h"
#import "HKStrokeStyle.h"

@interface HKBarSeries : HKGraphSeries

@property (nonatomic) CGSize cornerRadii;
@property (nonatomic) CGSize cornerRadiiStorage; // ivar: _cornerRadiiStorage
@property (retain, nonatomic) HKBarSeriesConfiguration *defaultConfiguration;
@property (retain, nonatomic) HKBarSeriesConfiguration *defaultConfigurationStorage; // ivar: _defaultConfigurationStorage
@property (retain, nonatomic) HKFillStyle *inactiveFillStyle;
@property (retain, nonatomic) NSMutableArray *overrideConfigurations;
@property (retain, nonatomic) NSMutableArray *overrideConfigurationsStorage; // ivar: _overrideConfigurationsStorage
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyleStorage; // ivar: _selectedStrokeStyleStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (retain, nonatomic) HKStrokeStyle *tiledStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *tiledStrokeStyleStorage; // ivar: _tiledStrokeStyleStorage
@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyleStorage; // ivar: _unselectedStrokeStyleStorage


+(id)_approximateRoundedRect:(struct CGRect )arg0 byRoundingCorners:(NSUInteger)arg1 cornerRadii:(struct CGSize )arg2 ;
+(id)barSeriesRoundedRect:(struct CGRect )arg0 byRoundingCorners:(NSUInteger)arg1 cornerRadii:(struct CGSize )arg2 ;
+(id)barSeriesRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(NSInteger)_configurationIndexForCoordinate:(id)arg0 inConfigurations:(id)arg1 ;
-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawConfiguration:(id)arg0 fillStyleBezierPaths:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_drawPath:(id)arg0 withFillStyle:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)clearCaches;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 seriesRenderingDelegate:(id)arg5 ;


@end


#endif