// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRAPHSERIES_H
#define HKGRAPHSERIES_H

@class NSUUID, NSMutableDictionary, NSString, NSArray, UIColor, NSLock;
@protocol HKGraphSeriesDataSourceDelegate, HKChartCachePriorityDelegate, HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKGraphSeriesDataSource.h"
#import "HKAxis.h"

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate, HKChartCachePriorityDelegate>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) BOOL adjustYAxisForLabels;
@property (readonly, nonatomic) BOOL adjustYAxisForLabelsStorage; // ivar: _adjustYAxisForLabelsStorage
@property (nonatomic) BOOL allowsSelection;
@property (readonly, nonatomic) BOOL allowsSelectionStorage; // ivar: _allowsSelectionStorage
@property (nonatomic) CGFloat alpha;
@property (readonly, nonatomic) CGFloat alphaStorage; // ivar: _alphaStorage
@property (retain, nonatomic) NSObject<HKGraphSeriesAxisScalingRule> *axisScalingRule;
@property (readonly, nonatomic) NSObject<HKGraphSeriesAxisScalingRule> *axisScalingRuleStorage; // ivar: _axisScalingRuleStorage
@property (retain, nonatomic) NSMutableDictionary *cachedCoordinateListsByBlockPath; // ivar: _cachedCoordinateListsByBlockPath
@property (retain, nonatomic) NSMutableDictionary *cachedDataBlocksByBlockPath; // ivar: _cachedDataBlocksByBlockPath
@property (readonly, nonatomic) HKValueRange *closestXCoordinateRangeStorage; // ivar: _closestXCoordinateRangeStorage
@property (retain, nonatomic) HKGraphSeriesDataSource *dataSource;
@property (readonly, nonatomic) HKGraphSeriesDataSource *dataSourceStorage; // ivar: _dataSourceStorage
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSeriesDelegate> *delegate;
@property (readonly, weak, nonatomic) NSObject<HKSeriesDelegate> *delegateStorage; // ivar: _delegateStorage
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *detailLegendEntries;
@property (readonly, nonatomic) NSArray *detailLegendEntriesStorage; // ivar: _detailLegendEntriesStorage
@property (nonatomic) BOOL drawLegendInsideSeries;
@property (readonly, nonatomic) BOOL drawLegendInsideSeriesStorage; // ivar: _drawLegendInsideSeriesStorage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL internalDirtyFlag; // ivar: _internalDirtyFlag
@property (nonatomic) BOOL invertYAxis;
@property (readonly, nonatomic) BOOL invertYAxisStorage; // ivar: _invertYAxisStorage
@property (nonatomic) BOOL isCriticalForAutoscale;
@property (readonly, nonatomic) BOOL isCriticalForAutoscaleStorage; // ivar: _isCriticalForAutoscaleStorage
@property (retain, nonatomic) UIColor *offScreenIndicatorColor;
@property (readonly, nonatomic) UIColor *offScreenIndicatorColorStorage; // ivar: _offScreenIndicatorColorStorage
@property (nonatomic) CGFloat offscreenIndicatorAlpha;
@property (readonly, nonatomic) CGFloat offscreenIndicatorAlphaStorage; // ivar: _offscreenIndicatorAlphaStorage
@property (readonly, nonatomic) ? selectedPathRangeStorage; // ivar: _selectedPathRangeStorage
@property (retain, nonatomic) id *seriesDataSourceContext;
@property (readonly, nonatomic) id *seriesDataSourceContextStorage; // ivar: _seriesDataSourceContextStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *titleLegendEntries;
@property (readonly, nonatomic) NSArray *titleLegendEntriesStorage; // ivar: _titleLegendEntriesStorage
@property (readonly, nonatomic) HKValueRange *visibleValueRange;
@property (readonly, nonatomic) HKValueRange *visibleValueRangeStorage; // ivar: _visibleValueRangeStorage
@property (nonatomic) BOOL wantsRoundingDuringYRangeExpansion;
@property (readonly, nonatomic) BOOL wantsRoundingDuringYRangeExpansionStorage; // ivar: _wantsRoundingDuringYRangeExpansionStorage
@property (retain, nonatomic) HKAxis *yAxis;
@property (readonly, nonatomic) HKAxis *yAxisStorage; // ivar: _yAxisStorage


+(void)drawFilledMarkerInContext:(struct CGContext *)arg0 color:(struct CGColor *)arg1 x:(CGFloat)arg2 y:(CGFloat)arg3 radius:(CGFloat)arg4 ;
+(void)drawInnerDotMarkerInContext:(struct CGContext *)arg0 outColor:(struct CGColor *)arg1 inColor:(struct CGColor *)arg2 x:(CGFloat)arg3 y:(CGFloat)arg4 radius:(CGFloat)arg5 ;
-(BOOL)_checkInternalDirtyFlag;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)containsCoordinatesInChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 ;
-(BOOL)hasAnyDataLoadedInXAxisRange:(id)arg0 dateZoom:(NSInteger)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isRangeHighPriority:(id)arg0 ;
-(BOOL)shouldInvertAxis;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)untransformedChartPointsForTimeScope:(NSInteger)arg0 range:(id)arg1 completion:(id)arg2 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)distanceFromTouchPoint:(struct CGPoint )arg0 inChartRect:(struct CGRect )arg1 xAxis:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 xAxisTransform:(struct CGAffineTransform )arg5 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(NSInteger)overlayType;
-(NSUInteger)_mainThreadJoinTimeout;
-(id)_cachedCoordinatesForBlockPath:(struct ? )arg0 ;
-(id)_clipYAxisValueRangeIfNecessary:(id)arg0 ;
-(id)_coordinateListsForGeneratorWithXAxis:(id)arg0 zoomScale:(CGFloat)arg1 chartRect:(struct CGRect )arg2 contentOffset:(struct CGPoint )arg3 ;
-(id)_coordinateListsWithXValueRange:(id)arg0 xAxis:(id)arg1 zoomLevel:(NSInteger)arg2 ;
-(id)_coordinatesForBlockPath:(struct ? )arg0 xAxis:(id)arg1 ;
-(id)_dataBlockForBlockPath:(struct ? )arg0 ;
-(id)_expandYRange:(id)arg0 withXRange:(id)arg1 dateZoom:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(id)_getBlockFromDataSource:(struct ? )arg0 ;
-(id)_visibleXValueRangeWithAxis:(id)arg0 chartRect:(struct CGRect )arg1 contentOffset:(struct CGPoint )arg2 zoomScale:(CGFloat)arg3 ;
-(id)closestXCoordinateRange;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findVisibleBlockCoordinatesForChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 xAxisRange:(id)arg1 zoomLevel:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(id)overlayIdentifier;
-(id)overlayInteractiveViewsWithDelegate:(id)arg0 ;
-(id)seriesCoordinatesWithXAxis:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 ;
-(id)valueRangeForYAxisWithXAxisRange:(id)arg0 dateZoom:(NSInteger)arg1 chartRect:(struct CGRect )arg2 ;
-(struct ? )selectedPathRange;
-(struct CGAffineTransform )coordinateTransformForChartRect:(struct CGRect )arg0 xAxisTransform:(struct CGAffineTransform )arg1 ;
-(struct CGAffineTransform )coordinateTransformFromXAxisTransform:(struct CGAffineTransform )arg0 chartRect:(struct CGRect )arg1 ;
-(struct CGRect )adjustRect:(struct CGRect )arg0 forFont:(id)arg1 ;
-(struct CGRect )backgroundRectFromStringRect:(struct CGRect )arg0 forFont:(id)arg1 ;
-(void)_cacheCoordinates:(id)arg0 forBlockPath:(struct ? )arg1 ;
-(void)_clearInternalDirtyFlag;
-(void)_enumeratePathIndexesInValueRange:(id)arg0 zoomLevel:(NSInteger)arg1 block:(id)arg2 ;
-(void)_requestDataSourceBlocksFromPath:(struct ? )arg0 toPath:(struct ? )arg1 ;
-(void)_setDirtyWithNewData:(BOOL)arg0 ;
-(void)clearCaches;
-(void)dataSourceDidUpdateCache:(id)arg0 ;
-(void)dealloc;
-(void)deselectPath;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)drawWithChartRect:(struct CGRect )arg0 seriesCoordinates:(id)arg1 zoomLevelConfiguration:(id)arg2 coordinateTransform:(struct CGAffineTransform )arg3 inContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)enumerateChartPointsInRange:(id)arg0 zoomLevel:(NSInteger)arg1 block:(id)arg2 ;
-(void)enumerateCoordinatesInChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 roundToViewScale:(BOOL)arg5 exclusionOptions:(NSInteger)arg6 block:(id)arg7 ;
-(void)layoutOverlayInteractiveViews:(id)arg0 seriesOverlayData:(id)arg1 overlayRect:(struct CGRect )arg2 ;
-(void)selectPathsinPathRange:(struct ? )arg0 coordinateRange:(id)arg1 ;
-(void)setClosestXCoordinateRange:(id)arg0 ;
-(void)setSelectedPathRange:(struct ? )arg0 ;
-(void)updateForAutoscale:(id)arg0 ;
-(void)updateLegendsForTimeScope:(NSInteger)arg0 range:(id)arg1 drawingDuringScrolling:(BOOL)arg2 ;


@end


#endif