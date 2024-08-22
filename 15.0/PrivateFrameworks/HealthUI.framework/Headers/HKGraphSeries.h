// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRAPHSERIES_H
#define HKGRAPHSERIES_H

@class NSMutableDictionary, NSUUID, UIView, NSString, NSArray, UIColor;
@protocol HKGraphSeriesDataSourceDelegate, HKChartCachePriorityDelegate, HKGraphSeriesAxisAnnotation, HKGraphSeriesAxisScalingRule, HKSeriesDelegate, HKAxisAccessoryViewDelegate;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKGraphSeriesDataSource.h"
#import "HKAxis.h"

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate, HKChartCachePriorityDelegate>

 {
    BOOL _dirty;
    ? _selectedPathRange;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    HKValueRange *_closestXCoordinateRange;
    HKValueRange *_visibleValueRange;
}


@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) BOOL adjustYAxisForLabels; // ivar: _adjustYAxisForLabels
@property (nonatomic) BOOL allowsSelection; // ivar: _allowsSelection
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (weak, nonatomic) NSObject<HKGraphSeriesAxisAnnotation> *axisAnnotationDelegate; // ivar: _axisAnnotationDelegate
@property (retain, nonatomic) NSObject<HKGraphSeriesAxisScalingRule> *axisScalingRule; // ivar: _axisScalingRule
@property (retain, nonatomic) UIView *cachedYAxisAccessoryView; // ivar: _cachedYAxisAccessoryView
@property (retain, nonatomic) HKGraphSeriesDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSeriesDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *detailLegendEntries; // ivar: _detailLegendEntries
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCriticalForAutoscale; // ivar: _isCriticalForAutoscale
@property (retain, nonatomic) UIColor *offScreenIndicatorColor; // ivar: _offScreenIndicatorColor
@property (nonatomic) CGFloat offscreenIndicatorAlpha; // ivar: _offscreenIndicatorAlpha
@property (retain, nonatomic) id *seriesDataSourceContext; // ivar: _seriesDataSourceContext
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *titleLegendEntries; // ivar: _titleLegendEntries
@property (nonatomic) BOOL wantsRoundingDuringYRangeExpansion; // ivar: _wantsRoundingDuringYRangeExpansion
@property (retain, nonatomic) HKAxis *yAxis; // ivar: _yAxis
@property (weak, nonatomic) NSObject<HKAxisAccessoryViewDelegate> *yAxisAccessoryViewDelegate; // ivar: _yAxisAccessoryViewDelegate


+(void)drawFilledMarkerInContext:(struct CGContext *)arg0 color:(struct CGColor *)arg1 x:(CGFloat)arg2 y:(CGFloat)arg3 radius:(CGFloat)arg4 ;
+(void)drawInnerDotMarkerInContext:(struct CGContext *)arg0 outColor:(struct CGColor *)arg1 inColor:(struct CGColor *)arg2 x:(CGFloat)arg3 y:(CGFloat)arg4 radius:(CGFloat)arg5 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)configureYAxisAccessoryViewForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(BOOL)containsCoordinatesInChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 ;
-(BOOL)hasAnyDataLoadedInXAxisRange:(id)arg0 dateZoom:(NSInteger)arg1 chartRect:(struct CGRect )arg2 ;
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
-(id)_cachedCoordinatesForBlockPath:(struct ? )arg0 ;
-(id)_clipYAxisValueRangeIfNecessary:(id)arg0 ;
-(id)_coordinateListsForGeneratorWithXAxis:(id)arg0 zoomScale:(CGFloat)arg1 chartRect:(struct CGRect )arg2 contentOffset:(struct CGPoint )arg3 ;
-(id)_coordinateListsWithXValueRange:(id)arg0 xAxis:(id)arg1 zoomLevel:(NSInteger)arg2 ;
-(id)_coordinatesForBlockPath:(struct ? )arg0 xAxis:(id)arg1 ;
-(id)_dataBlockForBlockPath:(struct ? )arg0 ;
-(id)_expandYRange:(id)arg0 withXRange:(id)arg1 dateZoom:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(id)_visibleXValueRangeWithAxis:(id)arg0 chartRect:(struct CGRect )arg1 contentOffset:(struct CGPoint )arg2 zoomScale:(CGFloat)arg3 ;
-(id)closestXCoordinateRange;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findVisibleBlockCoordinatesForChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 chartRect:(struct CGRect )arg1 ;
-(id)overlayIdentifier;
-(id)overlayInteractiveViewsWithDelegate:(id)arg0 ;
-(id)seriesCoordinatesWithXAxis:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 ;
-(id)valueRangeForYAxisWithXAxisRange:(id)arg0 dateZoom:(NSInteger)arg1 chartRect:(struct CGRect )arg2 ;
-(id)visibleValueRange;
-(struct ? )selectedPathRange;
-(struct CGAffineTransform )coordinateTransformForChartRect:(struct CGRect )arg0 xAxisTransform:(struct CGAffineTransform )arg1 ;
-(struct CGAffineTransform )coordinateTransformFromXAxisTransform:(struct CGAffineTransform )arg0 chartRect:(struct CGRect )arg1 ;
-(struct CGRect )adjustRect:(struct CGRect )arg0 forFont:(id)arg1 ;
-(struct CGRect )backgroundRectFromStringRect:(struct CGRect )arg0 forFont:(id)arg1 ;
-(struct UIEdgeInsets )virtualMarginInsets;
-(void)_cacheCoordinates:(id)arg0 forBlockPath:(struct ? )arg1 ;
-(void)_enumeratePathIndexesInValueRange:(id)arg0 zoomLevel:(NSInteger)arg1 block:(id)arg2 ;
-(void)_setDirtyWithNewData:(BOOL)arg0 ;
-(void)clearCaches;
-(void)dataSourceDidUpdateCache:(id)arg0 ;
-(void)dealloc;
-(void)deselectPath;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)drawWithChartRect:(struct CGRect )arg0 seriesCoordinates:(id)arg1 zoomLevelConfiguration:(id)arg2 coordinateTransform:(struct CGAffineTransform )arg3 inContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)enumerateCoordinatesInChartRect:(struct CGRect )arg0 xAxis:(id)arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 xAxisTransform:(struct CGAffineTransform )arg4 roundToViewScale:(BOOL)arg5 exclusionOptions:(NSInteger)arg6 block:(id)arg7 ;
-(void)layoutOverlayInteractiveViews:(id)arg0 seriesOverlayData:(id)arg1 overlayRect:(struct CGRect )arg2 ;
-(void)selectPathsinPathRange:(struct ? )arg0 coordinateRange:(id)arg1 ;
-(void)updateForAutoscale:(id)arg0 ;
-(void)updateLegendsForTimeScope:(NSInteger)arg0 range:(id)arg1 ;


@end


#endif