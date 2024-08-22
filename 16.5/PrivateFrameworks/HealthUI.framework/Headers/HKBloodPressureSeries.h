// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBLOODPRESSURESERIES_H
#define HKBLOODPRESSURESERIES_H

@class NSLock;


#import "HKGraphSeries.h"
#import "HKBloodPressureSeriesPresentationStyle.h"

@interface HKBloodPressureSeries : HKGraphSeries

@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyleStorage; // ivar: _selectedPresentationStyleStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle;
@property (retain, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyleStorage; // ivar: _unselectedPresentationStyleStorage


+(id)defaultSeriesWithSystolicColor:(id)arg0 ;
+(id)diastolicImageCompatibleWithFont:(id)arg0 withColor:(id)arg1 ;
+(id)systolicImageCompatibleWithFont:(id)arg0 withColor:(id)arg1 ;
+(struct CGRect )_rectCenteredAt:(struct CGPoint )arg0 width:(CGFloat)arg1 ;
+(void)_drawDiastolicSymbolWithColor:(id)arg0 atLocation:(struct CGPoint )arg1 width:(CGFloat)arg2 context:(struct CGContext *)arg3 ;
+(void)_drawSystolicSymbolWithColor:(id)arg0 atLocation:(struct CGPoint )arg1 width:(CGFloat)arg2 context:(struct CGContext *)arg3 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawBloodPressureSymbol:(NSInteger)arg0 withColor:(id)arg1 atLocation:(struct CGPoint )arg2 width:(CGFloat)arg3 context:(struct CGContext *)arg4 ;
-(void)_drawRangeBackgroundInContext:(struct CGContext *)arg0 coordinate:(id)arg1 width:(CGFloat)arg2 symbolType:(NSInteger)arg3 symbolColor:(id)arg4 fillColor:(id)arg5 ;
-(void)_drawRangeDotsInContext:(struct CGContext *)arg0 coordinate:(id)arg1 width:(CGFloat)arg2 symbolType:(NSInteger)arg3 symbolColor:(id)arg4 fillColor:(id)arg5 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif