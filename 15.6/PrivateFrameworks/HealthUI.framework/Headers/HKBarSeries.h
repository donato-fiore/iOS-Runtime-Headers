// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBARSERIES_H
#define HKBARSERIES_H

@class NSMutableArray;


#import "HKGraphSeries.h"
#import "HKBarSeriesConfiguration.h"
#import "HKFillStyle.h"
#import "HKStrokeStyle.h"

@interface HKBarSeries : HKGraphSeries

@property (nonatomic) CGSize cornerRadii; // ivar: _cornerRadii
@property (retain, nonatomic) HKBarSeriesConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property (retain, nonatomic) HKFillStyle *inactiveFillStyle;
@property (retain, nonatomic) NSMutableArray *overrideConfigurations; // ivar: _overrideConfigurations
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle; // ivar: _selectedStrokeStyle
@property (retain, nonatomic) HKStrokeStyle *tiledStrokeStyle; // ivar: _tiledStrokeStyle
@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle; // ivar: _unselectedStrokeStyle


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
-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)_configurationForCoordinate:(id)arg0 inConfigurations:(id)arg1 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawConfiguration:(id)arg0 strokeStyle:(id)arg1 axisRect:(struct CGRect )arg2 context:(struct CGContext *)arg3 ;
-(void)_drawPath:(id)arg0 withFillStyle:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)clearCaches;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 ;


@end


#endif