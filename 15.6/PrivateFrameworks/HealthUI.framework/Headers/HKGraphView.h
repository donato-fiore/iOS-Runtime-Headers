// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGRAPHVIEW_H
#define HKGRAPHVIEW_H

@class UIView, NSMutableArray, UIImage, UIView<HKGraphRenderer>, UIScrollView, NSArray, NSMutableDictionary, NSCalendar, NSString, UIColor, NSMapTable, NSTimer, NSSet;
@protocol UIScrollViewDelegate, HKSeriesDelegate, HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKGraphTileDrawingDelegate, HKGraphSeriesOverlayDelegate, HKScrollPerformanceTestable, HKInteractiveChartRangeProvider, HKGraphViewDelegate;


#import "HKValueRange.h"
#import "HKBorderLineView.h"
#import "HKPropertyAnimationApplier.h"
#import "HKMultiTouchPressGestureRecognizer.h"
#import "_HKGraphViewOverlayView.h"
#import "HKGraphViewSelectionStyle.h"
#import "HKAxis.h"

@interface HKGraphView : UIView <UIScrollViewDelegate, HKSeriesDelegate, HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKGraphTileDrawingDelegate, HKGraphSeriesOverlayDelegate, HKScrollPerformanceTestable, HKInteractiveChartRangeProvider>

 {
    NSMutableArray *_seriesGroupRows;
    BOOL _needsUpdateGraphViewConfiguration;
    BOOL _shouldInformDelegateOfUpdates;
    BOOL _shouldListenToScrollViewDelegate;
    HKValueRange *_chartableValueRange;
    UIImage *_topFeatheringImage;
    UIImage *_rightFeatheringImage;
    UIImage *_bottomFeatheringImage;
    UIImage *_leftFeatheringImage;
    UIView<HKGraphRenderer> *_renderView;
    UIScrollView *_scrollView;
    HKBorderLineView *_leftMarginView;
    UIView<HKGraphRenderer> *_yAxisLabelContent;
    CGFloat _yAxisLabelMinimumWidth;
    BOOL _subviewsHaveBeenLaidOut;
}


@property (readonly, nonatomic) HKValueRange *actualAxisRange; // ivar: _actualAxisRange
@property (readonly, nonatomic) HKValueRange *actualVisibleRange; // ivar: _actualVisibleRange
@property (readonly, nonatomic) NSArray *allSeries;
@property (retain, nonatomic) HKPropertyAnimationApplier *animationApplier; // ivar: _animationApplier
@property (nonatomic) BOOL animationAutoscaleInProgress; // ivar: _animationAutoscaleInProgress
@property (nonatomic) UIEdgeInsets axisInset; // ivar: _axisInset
@property (retain, nonatomic) HKValueRange *chartableValueRange;
@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (nonatomic) BOOL contentOffsetIsSet; // ivar: _contentOffsetIsSet
@property (nonatomic) BOOL contentWidthFromTimeScope; // ivar: _contentWidthFromTimeScope
@property (retain, nonatomic) NSMutableDictionary *currentAnimationProperties; // ivar: _currentAnimationProperties
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKGraphViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKValueRange *destinationEffectiveVisibleRangeActive; // ivar: _destinationEffectiveVisibleRangeActive
@property (retain, nonatomic) UIView *detailView; // ivar: _detailView
@property (nonatomic) BOOL disableScrolling; // ivar: _disableScrolling
@property (nonatomic) BOOL disableSelection; // ivar: _disableSelection
@property (nonatomic) BOOL disableXAxis; // ivar: _disableXAxis
@property (nonatomic) BOOL drawsGridlinesPerSeriesGroup; // ivar: _drawsGridlinesPerSeriesGroup
@property (readonly, nonatomic) HKValueRange *effectiveAxisRange; // ivar: _effectiveAxisRange
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeActive; // ivar: _effectiveVisibleRangeActive
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeCadence; // ivar: _effectiveVisibleRangeCadence
@property (nonatomic) BOOL enableInteractiveSelectionLine; // ivar: _enableInteractiveSelectionLine
@property (nonatomic) BOOL enableStickySelection; // ivar: _enableStickySelection
@property (nonatomic) BOOL enableZoomInGesture; // ivar: _enableZoomInGesture
@property (nonatomic) CGFloat externalSelectionLastLocation; // ivar: _externalSelectionLastLocation
@property (retain, nonatomic) id *externalSelectionModelCoordinate; // ivar: _externalSelectionModelCoordinate
@property (nonatomic) BOOL externalSelectionScheduled; // ivar: _externalSelectionScheduled
@property (nonatomic) NSUInteger featheringOptions; // ivar: _featheringOptions
@property (nonatomic) CGFloat firstNonemptyDrawTime; // ivar: _firstNonemptyDrawTime
@property (nonatomic) CGFloat hardLeftMarginWidth; // ivar: _hardLeftMarginWidth
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScrollViewDecelerating;
@property (nonatomic) CGFloat lastEndTime; // ivar: _lastEndTime
@property (nonatomic) CGFloat lastSingleSelectionXValue; // ivar: _lastSingleSelectionXValue
@property (readonly, nonatomic) CGRect leftMarginViewRect;
@property (nonatomic) NSInteger maximumDateZoom; // ivar: _maximumDateZoom
@property (nonatomic) BOOL measurementStartupAutoscale; // ivar: _measurementStartupAutoscale
@property (nonatomic) BOOL measuringStartupTime; // ivar: _measuringStartupTime
@property (nonatomic) NSInteger minimumDateZoom; // ivar: _minimumDateZoom
@property (nonatomic) BOOL moveSelectedSeriesToFront; // ivar: _moveSelectedSeriesToFront
@property (nonatomic) BOOL multiSeriesSelection; // ivar: _multiSeriesSelection
@property (readonly, nonatomic) HKMultiTouchPressGestureRecognizer *multiTouchGestureRecognizer; // ivar: _multiTouchGestureRecognizer
@property (copy, nonatomic) UIColor *outlineColor; // ivar: _outlineColor
@property (nonatomic) NSUInteger outlineOptions; // ivar: _outlineOptions
@property (retain, nonatomic) NSMapTable *overlayInteractiveViews; // ivar: _overlayInteractiveViews
@property (retain, nonatomic) _HKGraphViewOverlayView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL prefersOpaqueLegends; // ivar: _prefersOpaqueLegends
@property (nonatomic) NSInteger previousOverlayType; // ivar: _previousOverlayType
@property (nonatomic) NSInteger scrollingOptions; // ivar: _scrollingOptions
@property (retain, nonatomic) HKGraphViewSelectionStyle *selectionStyle; // ivar: _selectionStyle
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSTimer *startupTimer; // ivar: _startupTimer
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tileColumnHysteresis; // ivar: _tileColumnHysteresis
@property (nonatomic) NSInteger tileColumns; // ivar: _tileColumns
@property (nonatomic) CGPoint tileContentOffsetOverride; // ivar: _tileContentOffsetOverride
@property (nonatomic) NSInteger tileFirstColumn; // ivar: _tileFirstColumn
@property (nonatomic) NSInteger tileInitialRedrawCount; // ivar: _tileInitialRedrawCount
@property (nonatomic) NSInteger tileLastColumn; // ivar: _tileLastColumn
@property (copy, nonatomic) id *tileMarkDirtyCompletion; // ivar: _tileMarkDirtyCompletion
@property (retain, nonatomic) NSMutableArray *tileQueue; // ivar: _tileQueue
@property (nonatomic) BOOL tileScrollingOverride; // ivar: _tileScrollingOverride
@property (nonatomic) CGFloat tileWidthInPoints; // ivar: _tileWidthInPoints
@property (nonatomic) CGFloat tileZoomScaleOverride; // ivar: _tileZoomScaleOverride
@property (retain, nonatomic) NSMutableDictionary *tilesByColumnNumber; // ivar: _tilesByColumnNumber
@property (nonatomic) BOOL tilesHidden; // ivar: _tilesHidden
@property (nonatomic) BOOL tilesTransientDisabled; // ivar: _tilesTransientDisabled
@property (nonatomic) BOOL tilesWaitingForInitialRender; // ivar: _tilesWaitingForInitialRender
@property (nonatomic) BOOL tilingDisabled; // ivar: _tilingDisabled
@property (copy, nonatomic) UIColor *topMarginColor; // ivar: _topMarginColor
@property (nonatomic) NSInteger virtualLeftMarginStyle; // ivar: _virtualLeftMarginStyle
@property (nonatomic) CGFloat virtualLeftMarginWidth; // ivar: _virtualLeftMarginWidth
@property (nonatomic) NSInteger virtualRightMarginStyle; // ivar: _virtualRightMarginStyle
@property (nonatomic) CGFloat virtualRightMarginWidth; // ivar: _virtualRightMarginWidth
@property (retain, nonatomic) HKAxis *xAxis; // ivar: _xAxis
@property (readonly, nonatomic) NSInteger xAxisDateZoom; // ivar: _xAxisDateZoom
@property (nonatomic) CGFloat xAxisSpace; // ivar: _xAxisSpace
@property (retain, nonatomic) NSSet *yAxisAccessoryViews; // ivar: _yAxisAccessoryViews
@property (readonly, nonatomic) CGFloat yAxisWidth;
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


+(BOOL)visibleIntersectionForRange:(id)arg0 visibleRange:(id)arg1 ;
+(CGFloat)_modelCoordinateSpanForRange:(id)arg0 axis:(id)arg1 ;
+(id)_rangeFromModelCoordinateMin:(CGFloat)arg0 max:(CGFloat)arg1 axis:(id)arg2 ;
-(BOOL)_allSeriesAreInverted:(id)arg0 ;
-(BOOL)_autoscaleTransformIsSignificant:(id)arg0 ;
-(BOOL)_axisRangeIsDateRange;
-(BOOL)_compareChartDate:(id)arg0 toDate:(id)arg1 ;
-(BOOL)_compareRange:(id)arg0 toRange:(id)arg1 ;
-(BOOL)_configureYAxisViewIfNeeded;
-(BOOL)_graphViewIsConfigured;
-(BOOL)_measureStartupFlagFromEnvironment;
-(BOOL)_needsYAxisUpdateDuringRender;
-(BOOL)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(struct CGContext *)arg0 ;
-(BOOL)_selectionContextsNotPreviouslySelected:(id)arg0 ;
-(BOOL)_seriesGroupHasLegendEntries:(id)arg0 ;
-(BOOL)_seriesRequiresYAutoscale:(id)arg0 ;
-(BOOL)_setRangesForActiveVisibleRange:(id)arg0 ;
-(BOOL)_stickySelectionActive;
-(BOOL)_tilesAreEnabled;
-(BOOL)_tilesConfigurableAfterInitialRender;
-(BOOL)_tilesReconfigurableAfterInitialRender;
-(BOOL)_touchesActuallyMoved:(id)arg0 ;
-(BOOL)rangeIsVisible:(id)arg0 ;
-(BOOL)seriesDrawingDuringAutoscale;
-(BOOL)seriesDrawingDuringScrolling;
-(BOOL)seriesDrawingDuringTiling;
-(BOOL)stillAnimating:(id)arg0 ;
-(CGFloat)_bottomBaselineYValueForChartRect:(struct CGRect )arg0 ;
-(CGFloat)_contentWidth;
-(CGFloat)_inactiveRightAreaForRect:(struct CGRect )arg0 ;
-(CGFloat)_maxTimeThreshold;
-(CGFloat)_maximumZoomScale;
-(CGFloat)_renderXAxisLabelsInContext:(struct CGContext *)arg0 ;
-(CGFloat)_topBaselineYValueForChartRect:(struct CGRect )arg0 ;
-(CGFloat)snapScreenCoordinateToXAxisResolution:(CGFloat)arg0 ;
-(NSInteger)_countOfAllSeries;
-(NSInteger)_currentSelectionStateForSeriesGroup:(id)arg0 ;
-(NSInteger)_groupRowForSeries:(id)arg0 ;
-(NSInteger)_ordinalForOverlayType:(NSInteger)arg0 ;
-(NSInteger)_overlayEnvironmentType;
-(NSInteger)_overlayTypeForOverlaySeriesData:(id)arg0 ;
-(id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg0 dataAreaRect:(struct CGRect )arg1 ;
-(id)_autoscaleSeriesOnlyIfNeeded:(BOOL)arg0 ;
-(id)_autoscaleTransformsFromAutoscaleSeriesList:(id)arg0 specificRange:(id)arg1 ;
-(id)_closestGraphSeriesForTouchPoint:(struct CGPoint )arg0 seriesGroup:(id)arg1 ;
-(id)_closestSeriesToPoint:(struct CGPoint )arg0 allSeries:(id)arg1 ;
-(id)_combinedYAxisRangeForAutoscaleSeries:(id)arg0 yAxisRect:(struct CGRect )arg1 ;
-(id)_defaultXAxisValueRange;
-(id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg0 ;
-(id)_findActualAxisRangeFromVisibleRanges;
-(id)_findAutoscaleSeriesForYAxis:(id)arg0 allAutoscaleSeries:(id)arg1 ;
-(id)_firstSelectionContext;
-(id)_graphSeriesForZoom:(NSInteger)arg0 seriesGroupRow:(NSInteger)arg1 ;
-(id)_gridlineRangesForChartRect:(struct CGRect )arg0 ;
-(id)_insertAutoscaleAnimation:(id)arg0 ;
-(id)_multiSeriesSelectionContextsWithTouchPoints:(id)arg0 updateViewStates:(BOOL)arg1 ;
-(id)_newPointSelectionContextsWithTouchPoints:(id)arg0 updateViewStates:(BOOL)arg1 ;
-(id)_nonOverlappingOverlaySeriesData:(id)arg0 ;
-(id)_oneSeriesSelectionContextsWithTouchPoints:(id)arg0 updateViewStates:(BOOL)arg1 ;
-(id)_overlappingOverlaySeriesData:(id)arg0 ;
-(id)_pointSelectionContextWithPathRange:(struct ? )arg0 touchPoints:(id)arg1 seriesGroupRow:(NSInteger)arg2 seriesInGroup:(id)arg3 ;
-(id)_propertyAnimationForTransform:(id)arg0 ;
-(id)_rangeFromRange:(id)arg0 withStartOfRange:(id)arg1 ;
-(id)_valueForXAxisLocation:(CGFloat)arg0 ;
-(id)_visibleSeriesForSeriesGroup:(id)arg0 ;
-(id)findVisibleBlockCoordinatesForPrimarySeries;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primarySeries;
-(struct ? )_closestDataPointPathToPoint:(struct CGPoint )arg0 seriesGroupRow:(NSInteger)arg1 minimumXDistance:(CGFloat)arg2 xDistanceOut:(*CGFloat)arg3 ;
-(struct ? )_closestDataPointPathToPoint:(struct CGPoint )arg0 seriesGroupRow:(NSInteger)arg1 seriesInGroup:(id)arg2 minimumXDistance:(CGFloat)arg3 xDistanceOut:(*CGFloat)arg4 ;
-(struct CGPoint )_touchPointForSeriesGroupIndex:(NSInteger)arg0 originalTouchPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )seriesContentOffset;
-(struct CGRect )_adjustLeftMarginRectForBaselines:(struct CGRect )arg0 ;
-(struct CGRect )_dataAreaRect;
-(struct CGRect )_overlayAreaRect;
-(struct CGRect )_scrollingAreaRect;
-(struct CGRect )_tileScreenRectForColumn:(NSInteger)arg0 ;
-(struct CGRect )_verticalAxisRect;
-(struct CGRect )_yAxisRectForSeriesGroupRow:(NSInteger)arg0 chartRect:(struct CGRect )arg1 ;
-(struct CGRect )_yAxisRectForSeriesGroupRow:(NSInteger)arg0 insetForLegends:(BOOL)arg1 chartRect:(struct CGRect )arg2 ;
-(struct CGRect )screenRectForSeries:(id)arg0 ;
-(struct UIEdgeInsets )_currentLegendInsets;
-(struct UIEdgeInsets )_dataAreaInsets;
-(struct UIEdgeInsets )virtualMarginInsets;
-(struct _HKLocationSpan )_locationSpanForSeriesGroupRow:(NSInteger)arg0 chartRect:(struct CGRect )arg1 ;
-(void)_actionsAfterAnimationTransform:(id)arg0 finalVisibleRange:(id)arg1 ;
-(void)_actionsBeforeAnimationTransform:(id)arg0 ;
-(void)_activateStickySelection;
-(void)_addSelectionRecognizerToView:(id)arg0 ;
-(void)_addTapGestureRecognizerForTapOnView:(id)arg0 ;
-(void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg0 ;
-(void)_autoScaleXAxis;
-(void)_autoscaleAnimationCancelled;
-(void)_autoscaleAnimationEnd;
-(void)_autoscaleAnimationStart;
-(void)_cancelAutoscaleAnimations;
-(void)_cancelExternalSelection;
-(void)_clearRenderViewIfNecessary;
-(void)_createLegendForSeriesGroup:(id)arg0 ;
-(void)_createLegendsIfNecessary;
-(void)_deactivateStickySelection;
-(void)_deselectAllSeriesWithAlpha:(CGFloat)arg0 offScreenIndicatorAlpha:(CGFloat)arg1 seriesGroup:(id)arg2 ;
-(void)_drawOverlaysIfNeeded:(id)arg0 ;
-(void)_endExternalSelectionViaTimer;
-(void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg0 withBlock:(id)arg1 ;
-(void)_finishSelection;
-(void)_handleMarkDirtyCompletion;
-(void)_handleStartTouchPoint:(struct CGPoint )arg0 seriesGroupRow:(NSInteger)arg1 ;
-(void)_handleTilesInitialRender;
-(void)_hideTiles;
-(void)_hideTilesWithForce;
-(void)_installAccessoryViews;
-(void)_installExternalSelectionEndTimer;
-(void)_layoutDetailView;
-(void)_layoutLegendsForChartRect:(struct CGRect )arg0 ;
-(void)_layoutOverlayView;
-(void)_layoutYAxisAccessoryViewsForChartRect:(struct CGRect )arg0 ;
-(void)_loadScrollView;
-(void)_loadSeriesForZoom:(NSInteger)arg0 ;
-(void)_markTilesDirtyWithCompletion:(id)arg0 ;
-(void)_moveSeriesToFront:(id)arg0 ;
-(void)_notifyDateZoomDidChangeFromValue:(NSInteger)arg0 toValue:(NSInteger)arg1 ;
-(void)_notifyDelegateOfFinishUserScrolling;
-(void)_notifyDelegateOfSizeChange;
-(void)_notifyDelegateOfTapOnYAxis;
-(void)_notifyDelegateOfVisibleValueRange:(id)arg0 changeContext:(NSInteger)arg1 ;
-(void)_notifyDelegateOfYAxisWidth:(CGFloat)arg0 toWidth:(CGFloat)arg1 ;
-(void)_notifyDelegateSeriesUpdate:(id)arg0 newDataArrived:(BOOL)arg1 ;
-(void)_notifyDidBeginSelection;
-(void)_notifyDidEndExternalSelection;
-(void)_notifyDidEndSelection;
-(void)_notifyDidUpdateSelectionWithPointContext:(id)arg0 ;
-(void)_overlayViewsForOverlayData:(id)arg0 overlayView:(id)arg1 ;
-(void)_pauseChartInteraction;
-(void)_preserveDestinationActiveRange:(id)arg0 ;
-(void)_processExternalSelection;
-(void)_reconfigureScrollingTiles;
-(void)_recordLastRenderTime;
-(void)_reloadViewScope;
-(void)_removeAutoscaleAnimationWithName:(id)arg0 cancelled:(BOOL)arg1 completion:(id)arg2 ;
-(void)_removeSelectionRecognizerFromView:(id)arg0 ;
-(void)_renderBaselineWithContext:(struct CGContext *)arg0 chartRect:(struct CGRect )arg1 ;
-(void)_renderDataAreaDividersWithContext:(struct CGContext *)arg0 ;
-(void)_renderSelectionLineWithContext:(struct CGContext *)arg0 ;
-(void)_renderSeriesWithContext:(struct CGContext *)arg0 secondaryRenderContext:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(void)_renderVirtualMarginGridLines:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_renderVirtualMarginInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 marginStyle:(NSInteger)arg2 ;
-(void)_renderVirtualMarginsWithContext:(struct CGContext *)arg0 ;
-(void)_renderXAxisGridlinesInContext:(struct CGContext *)arg0 withBlendMode:(int)arg1 ;
-(void)_renderYAxisGridlinesInContext:(struct CGContext *)arg0 chartRect:(struct CGRect )arg1 withBlendMode:(int)arg2 ;
-(void)_renderYAxisLabelsInContext:(struct CGContext *)arg0 chartRect:(struct CGRect )arg1 ;
-(void)_resetSingleSelectionXValue;
-(void)_restoreDestinationActiveRange;
-(void)_resumeChartInteraction;
-(void)_scheduleExternalSelectionIfNeeded;
-(void)_scheduleExternalSelectionIfNeededClearingLastLocation;
-(void)_scheduleRequiredExternalSelection;
-(void)_scrollToCurrentVisibleRangeAnimated:(BOOL)arg0 ;
-(void)_selectionRecognizerDidBegin:(id)arg0 ;
-(void)_selectionRecognizerDidBeginWithTouchPoint:(struct CGPoint )arg0 ;
-(void)_selectionRecognizerDidFinish:(id)arg0 ;
-(void)_selectionRecognizerDidMove:(id)arg0 ;
-(void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg0 ;
-(void)_selectionRecognizerDidUpdate:(id)arg0 ;
-(void)_setNeedsUpdateGraphViewConfiguration;
-(void)_setVisibleRangesForEffectiveRangeCadence:(id)arg0 ;
-(void)_shareYAxesForSeriesGroup:(id)arg0 ;
-(void)_showTiles;
-(void)_snapXAxisRangeToPreservedRange;
-(void)_startupTimerCallback:(id)arg0 ;
-(void)_tapOnViewAction:(id)arg0 ;
-(void)_tileHiddenFlag:(BOOL)arg0 ;
-(void)_toggleStickySelectionAction:(id)arg0 ;
-(void)_touchAtPoint:(struct CGPoint )arg0 ;
-(void)_touchTilesForContentOffset:(struct CGPoint )arg0 applyHysteresis:(BOOL)arg1 ;
-(void)_updateAllLegendsWithSelectedValues:(id)arg0 ;
-(void)_updateAxisZoomScaleValueRange;
-(void)_updateDateZoomIfNecessary;
-(void)_updateEffectiveAxisRange:(id)arg0 effectiveVisibleRangeCadence:(id)arg1 effectiveVisibleRangeActive:(id)arg2 virtualLeftMarginWidth:(CGFloat)arg3 virtualRightMarginWidth:(CGFloat)arg4 ;
-(void)_updateGraphViewConfiguration;
-(void)_updateGraphViewConfigurationIfNecessary;
-(void)_updateLegendForSeriesGroup:(id)arg0 ;
-(void)_updateLegendsForAllSeriesGroups;
-(void)_updateRangesForEffectiveAxisRange:(id)arg0 effectiveVisibleRangeCadence:(id)arg1 effectiveVisibleRangeActive:(id)arg2 ;
-(void)_updateScene;
-(void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(id)arg0 ;
-(void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint )arg0 seriesGroup:(id)arg1 ;
-(void)_updateZoomForParameters;
-(void)_walkAllSeries:(id)arg0 ;
-(void)autoscaleYAxesAnimated:(BOOL)arg0 specificRange:(id)arg1 onlyIfNeeded:(BOOL)arg2 completion:(id)arg3 ;
-(void)didMoveToWindow;
-(void)drawToContext:(struct CGContext *)arg0 tileRect:(struct CGRect )arg1 column:(NSInteger)arg2 ;
-(void)enumerateVisibleCoordinatesForSeries:(id)arg0 block:(id)arg1 ;
-(void)gestureWillBeginWithRecognizer:(id)arg0 ;
-(void)graphRenderer:(id)arg0 shouldRenderSceneWithContext:(struct CGContext *)arg1 chartRect:(struct CGRect )arg2 ;
-(void)invalidateDataSourceCaches;
-(void)layoutSubviews;
-(void)nonemptyDrawComplete;
-(void)overlayNeedsRedisplay;
-(void)removeSeries;
-(void)resetAndRedraw;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)seriesDidInvalidatePaths:(id)arg0 newDataArrived:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setIndependentAxes:(id)arg0 stackOffset:(NSInteger)arg1 ;
-(void)setNeedsReloadSeries;
-(void)setPreviousDateZoom:(NSInteger)arg0 ;
-(void)setRenderView:(id)arg0 ;
-(void)setVirtualLeftMargin:(CGFloat)arg0 ;
-(void)setVirtualRightMargin:(CGFloat)arg0 ;
-(void)testScrollPerformanceWithTestName:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(void)testScrollPerformanceWithTestName:(id)arg0 iterations:(int)arg1 delta:(int)arg2 options:(id)arg3 ;
-(void)touchSelectionAtModelX:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif