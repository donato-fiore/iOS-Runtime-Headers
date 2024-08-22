// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTVIEWCONTROLLER_H
#define HKINTERACTIVECHARTVIEWCONTROLLER_H

@class NSMutableArray, UILabel, UIView, NSArray, UIFont, UIImpactFeedbackGenerator, NSDate, UIColor, HKSampleType, NSString, NSCalendar, HKHealthStore, NSUserActivity, NSDictionary;
@protocol HKGraphViewDelegate, HKSampleTypeDateRangeControllerObserver, HKCurrentTimeViewDelegate, HKInteractiveChartAnnotationViewDelegate, UIGestureRecognizerDelegate, HKMonthViewControllerDelegate, HKLollipopDelegate, HKInteractiveChartCurrentValueViewHandler, HKInteractiveChartCurrentValueViewCallbacks, HKCurrentValueViewDataSourceDelegate, HKChartOverlayVersionProviding;


#import "HKViewController.h"
#import "HKTimeScopeControl.h"
#import "HKCurrentTimeView.h"
#import "HKUIDateLabel.h"
#import "HKInteractiveChartAnnotationViewDataSource.h"
#import "HKDisplayType.h"
#import "HKChartDataCacheController.h"
#import "HKCurrentValueViewDataSource.h"
#import "HKDateCache.h"
#import "HKDisplayCategoryController.h"
#import "HKDisplayTypeController.h"
#import "HKLollipopController.h"
#import "HKGraphViewController.h"
#import "HKSampleTypeDateRangeController.h"
#import "HKSelectedRangeFormatter.h"
#import "HKSelectedTimeScopeController.h"
#import "HKUnitPreferenceController.h"

@interface HKInteractiveChartViewController : HKViewController <HKGraphViewDelegate, HKSampleTypeDateRangeControllerObserver, HKCurrentTimeViewDelegate, HKInteractiveChartAnnotationViewDelegate, UIGestureRecognizerDelegate, HKMonthViewControllerDelegate, HKLollipopDelegate, HKInteractiveChartCurrentValueViewHandler, HKInteractiveChartCurrentValueViewCallbacks, HKCurrentValueViewDataSourceDelegate, HKChartOverlayVersionProviding>

 {
    NSMutableArray *_observers;
    NSInteger _displayState;
    UILabel *_selectedSeriesLabel;
    UILabel *_selectedSeriesUnitLabel;
    HKTimeScopeControl *_radioButtons;
    HKCurrentTimeView *_currentTimeView;
    UIView *_currentValueView;
    CGFloat _bannerBottom;
    UIView *_graphTopDividerView;
    UIView *_graphBottomDividerView;
    UILabel *_dashboardEmptyHeader;
    UILabel *_dashboardEmptyDescription;
    NSArray *_allGraphSeriesConfigurationManagers;
    UIFont *_majorSelectedPointFont;
    UIFont *_minorSelectedPointFont;
    HKUIDateLabel *_selectedPointDateLabel;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIView *_primaryGraphViewWrapper;
    NSDate *_creationDate;
    NSUInteger _options;
    CGFloat _lastDateValueRangeUpdate;
}


@property (retain, nonatomic) HKInteractiveChartAnnotationViewDataSource *annotationDataSource; // ivar: _annotationDataSource
@property (nonatomic) NSInteger annotationDataSourceFirstWeekday; // ivar: _annotationDataSourceFirstWeekday
@property (readonly) UIColor *calendarDaySamplePresentColor;
@property (readonly) HKDisplayType *calendarQueryDisplayType;
@property (readonly) HKSampleType *calendarQuerySampleType;
@property (readonly, nonatomic) HKChartDataCacheController *chartDataCacheController; // ivar: _chartDataCacheController
@property (readonly, nonatomic) NSString *chartOverlayVersion;
@property (readonly, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) HKCurrentValueViewDataSource *currentValueViewDataSource; // ivar: _currentValueViewDataSource
@property (weak, nonatomic) NSObject<HKCurrentValueViewDataSourceDelegate> *currentValueViewDataSourceDelegate; // ivar: _currentValueViewDataSourceDelegate
@property (weak, nonatomic) NSObject<HKInteractiveChartCurrentValueViewHandler> *currentValueViewHandler; // ivar: _currentValueViewHandler
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, nonatomic) CGFloat dateSelectorHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger delayedAutoscaleActualCount; // ivar: _delayedAutoscaleActualCount
@property (nonatomic) NSInteger delayedAutoscaleRequestCount; // ivar: _delayedAutoscaleRequestCount
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableCurrentValueViewForInitialLollipop; // ivar: _disableCurrentValueViewForInitialLollipop
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // ivar: _displayCategoryController
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) NSArray *displayTypeStack; // ivar: _displayTypeStack
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) id *initialXValue; // ivar: _initialXValue
@property (nonatomic) CGFloat legendBottomLocation; // ivar: _legendBottomLocation
@property (retain, nonatomic) HKLollipopController *lollipopController; // ivar: _lollipopController
@property (readonly, nonatomic) HKGraphViewController *primaryGraphViewController; // ivar: _primaryGraphViewController
@property (readonly, nonatomic) NSUserActivity *restorationUserActivity; // ivar: _restorationUserActivity
@property (nonatomic) NSInteger sampleDateRangeUpdateCount; // ivar: _sampleDateRangeUpdateCount
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // ivar: _sampleTypeDateRangeController
@property (retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // ivar: _selectedRangeFormatter
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController; // ivar: _selectedTimeScopeController
@property (weak, nonatomic) NSObject<HKInteractiveChartCurrentValueViewCallbacks> *standardCurrentValueViewCallbacks; // ivar: _standardCurrentValueViewCallbacks
@property (copy, nonatomic) id *startupReportingBlock; // ivar: _startupReportingBlock
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *timeScopeRanges; // ivar: _timeScopeRanges
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


+(BOOL)_timeScope:(NSInteger)arg0 inTimeScopeRanges:(id)arg1 ;
+(NSInteger)_timeScopeForTimeScope:(NSInteger)arg0 availableTimeScopes:(id)arg1 ;
+(id)_encodeCurrentProfileIdentifierForHealthStore:(id)arg0 ;
+(id)_timeScopesWithOptions:(NSUInteger)arg0 timeScopeRanges:(id)arg1 ;
+(id)baseRestorationUserActivity:(id)arg0 activityType:(id)arg1 title:(id)arg2 ;
+(id)mergeRestorationDictionary:(id)arg0 otherDictionary:(id)arg1 ;
+(id)standardChartRestorationActivity:(id)arg0 primaryDisplayType:(id)arg1 ;
+(id)standardChartRestorationDictionary:(id)arg0 healthStore:(id)arg1 ;
+(void)saveRestorationUserActivity:(id)arg0 viewController:(id)arg1 ;
-(BOOL)_acceptSubclassRange:(id)arg0 proposedRange:(id)arg1 axisRange:(id)arg2 ;
-(BOOL)_chartHasDateAxis;
-(BOOL)_currentValueEnabled;
-(BOOL)_dashboardEmptyLabelsExist;
-(BOOL)_date:(id)arg0 closeToDate:(id)arg1 epsilonDateComponents:(id)arg2 calendar:(id)arg3 ;
-(BOOL)_displayTypeIsHorizontalForTimeScope:(NSInteger)arg0 displayType:(id)arg1 ;
-(BOOL)_drawsGridlinesPerSeriesGroup;
-(BOOL)_headerLineEnabled;
-(BOOL)_inPointSelectionMode;
-(BOOL)_prefersOpaqueLegends;
-(BOOL)_primaryDisplayTypeHasNoData;
-(BOOL)_selectedDateRangeLabelEnabled;
-(BOOL)_selectedSeriesWantsLastRecordedDate;
-(BOOL)_shouldHandleVisibleRangeChangeWithChangeContext:(NSInteger)arg0 ;
-(BOOL)_shouldShowDateRangeForSelectedPointDateLabel;
-(BOOL)_tilingDisabled;
-(BOOL)_timeScopeEnabled;
-(BOOL)_valueRange:(id)arg0 fitsInsideValueRange:(id)arg1 ;
-(BOOL)_viewHierarchyIsHidden:(id)arg0 ;
-(BOOL)_visibleRangeIsNowForTimeScope:(NSInteger)arg0 ;
-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(BOOL)infographicSupportedForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)removeDisplayTypeStackAtIndex:(NSInteger)arg0 ;
-(CGFloat)_annotationViewCenterY;
-(CGFloat)_effectiveHorizontalMargin;
-(CGFloat)lollipopExtensionLength;
-(CGFloat)minimumHeightForChart;
-(NSInteger)_countOfHorizontalSectionsForConfigurationManager:(id)arg0 timeScope:(NSInteger)arg1 ;
-(NSInteger)_dateZoom;
-(NSInteger)_defaultAlignmentForTimeScope:(NSInteger)arg0 ;
-(NSInteger)_defaultTimeScopeWithAvailableTimeScopes:(id)arg0 ;
-(NSInteger)_numHorizontalDisplayTypesForTimeScope:(NSInteger)arg0 displayTypes:(id)arg1 ;
-(NSInteger)_userInfoSelectionCount:(id)arg0 ;
-(NSInteger)addNewDisplayTypeStackWithDisplayTypes:(id)arg0 ;
-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(NSInteger)stackOffsetCount;
-(id)_addNoDataEntries:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_allDisplayTypes;
-(id)_chartDataForPoint:(id)arg0 ;
-(id)_colorForDisplayType:(id)arg0 ;
-(id)_configurationForDisplayType:(id)arg0 ;
-(id)_configurationForSeries:(id)arg0 ;
-(id)_createGraphSeriesConfigurationFromDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_customGraphSeriesForDisplayType:(id)arg0 ;
-(id)_dateForBlockPoint:(id)arg0 ;
-(id)_dateForMostRecentData;
-(id)_dateForXCoordinate:(CGFloat)arg0 graphView:(id)arg1 ;
-(id)_debugDateStringForPoint:(id)arg0 ;
-(id)_defaultAxisRangeIncludeToday:(BOOL)arg0 ;
-(id)_displayNameForDisplayType:(id)arg0 ;
-(id)_displayTypeForSeries:(id)arg0 ;
-(id)_displayUnitForDisplayType:(id)arg0 ;
-(id)_formatterForSeries:(id)arg0 ;
-(id)_graphViewAxisAndVisibleDateRangeForTimeScope:(NSInteger)arg0 fixedRange:(id)arg1 ;
-(id)_midPointDateFromVisibleRange;
-(id)_numberForXCoordinate:(CGFloat)arg0 graphView:(id)arg1 ;
-(id)_pointSelectionInfo:(id)arg0 ;
-(id)_primaryDisplayType;
-(id)_rangeValueAsNumber:(id)arg0 ;
-(id)_singleFixedRange;
-(id)accessibilityDataForChart;
-(id)currentDisplayTypesForStackOffset:(NSInteger)arg0 ;
-(id)descriptionForChartData:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)descriptionForXCoordinate:(CGFloat)arg0 graphView:(id)arg1 ;
-(id)descriptionSeriesForGraphView:(id)arg0 ;
-(id)descriptionSpansForGraphView:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)fixedRangeForTimeScope:(NSInteger)arg0 ;
-(id)graphSeriesForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)infographicViewControllerForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithDisplayTypes:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 initialXValue:(id)arg7 currentCalendarOverride:(id)arg8 options:(NSUInteger)arg9 ;
-(id)initWithStackedDisplayTypes:(id)arg0 healthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 initialXValue:(id)arg7 currentCalendarOverride:(id)arg8 options:(NSUInteger)arg9 timeScopeRanges:(id)arg10 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(id)lollipopFieldColor;
-(id)makeAnchorDateFromPreviousAnchorDate:(id)arg0 previousEffectiveVisibleRange:(id)arg1 previousTimeScope:(NSInteger)arg2 currentTimeScope:(NSInteger)arg3 ;
-(id)makeAnnotationDataSource;
-(id)makeCurrentValueView;
-(id)makeStandardCurrentValueViewDataSource;
-(id)replaceRangeClause:(id)arg0 ;
-(id)restorationStateDictionary;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(id)stringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)visibleRangeForTimeScope:(NSInteger)arg0 proposedRange:(id)arg1 ;
-(void)_addDisplayTypeToConfiguration:(id)arg0 allDisplayTypes:(id)arg1 configurationManager:(id)arg2 ;
-(void)_addSeriesForDisplayType:(id)arg0 updatingTimeScopeProperties:(id)arg1 configurationManager:(id)arg2 ;
-(void)_automaticAutoScale;
-(void)_configureCustomDisplayType:(id)arg0 graphSeries:(id)arg1 configurationManager:(id)arg2 timeScope:(NSInteger)arg3 ;
-(void)_configureSelectedRangeFormatterWithChartRangeProvider;
-(void)_createAndPrepareFeedbackGenerator;
-(void)_createDashboardEmptyLabelsIfNecessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_handleInitialLollipopSelection;
-(void)_handleVisibleRangeChange;
-(void)_hideTimeDateControls;
-(void)_layoutDashboardEmptyLabelsIfNecessary;
-(void)_layoutDividerViews;
-(void)_layoutHeader;
-(void)_moveSelectedDateInDirection:(NSInteger)arg0 ;
-(void)_notifyObserversDidUpdateVisibleValueRange:(id)arg0 changeContext:(NSInteger)arg1 ;
-(void)_omitLayoutHeader;
-(void)_radioButtonsDidUpdate:(id)arg0 ;
-(void)_replacePrimaryGraphViewControllerWithScalarController;
-(void)_replacePrimaryGraphViewControllerWithTimeScope:(NSInteger)arg0 anchorDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_scheduleDelayedAutoscale;
-(void)_scrollToAnchorDate:(id)arg0 graphView:(id)arg1 alignment:(NSInteger)arg2 ;
-(void)_scrollToMostRecentDataWithAlignment:(NSInteger)arg0 ;
-(void)_setDateSelectorToVisibleRange;
-(void)_setGraphViewAxisAndVisibleDateRangeForTimeScope:(NSInteger)arg0 anchorDate:(id)arg1 preserveScrollPosition:(BOOL)arg2 ;
-(void)_setSelectedGraphSeries:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setVisibleDisplayTypes:(id)arg0 ;
-(void)_setVisibleRangeUsingDateFromDateSelector:(id)arg0 ;
-(void)_showHideNoGraphSeriesLabels;
-(void)_showTimeDateControls;
-(void)_unitPreferencesDidUpdate:(id)arg0 ;
-(void)_updateAfterConfigurationChangeIncludeDateAxis:(BOOL)arg0 ;
-(void)_updateAxisScalingRulesForUnitPreferenceChangesOfTypes:(id)arg0 ;
-(void)_updateGraphViewAxisDateRange;
-(void)_updateSelectedSeriesLabel:(id)arg0 ;
-(void)addChartViewObserver:(id)arg0 ;
-(void)addOverlayDisplayType:(id)arg0 stackOffset:(NSInteger)arg1 ;
-(void)currentTimeViewDidTapOnDateSelector:(id)arg0 ;
-(void)currentTimeViewDidTapOnNextTimeButton:(id)arg0 ;
-(void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg0 ;
-(void)dealloc;
-(void)didTapBackButtonForMonthViewController:(id)arg0 ;
-(void)didTapOnDateFromCurrentValueView:(id)arg0 ;
-(void)didTapOnInfoButtonFromCurrentValueView:(id)arg0 ;
-(void)graphView:(id)arg0 didFinishUserScrollingToValueRange:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateFromDateZoom:(NSInteger)arg1 toDateZoom:(NSInteger)arg2 newVisibleRange:(id)arg3 ;
-(void)graphView:(id)arg0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect )arg1 ;
-(void)graphView:(id)arg0 didUpdateSelectedPoint:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)graphView:(id)arg0 didUpdateVisibleValueRange:(id)arg1 changeContext:(NSInteger)arg2 ;
-(void)graphView:(id)arg0 didUpdateYAxisWidth:(CGFloat)arg1 toWidth:(CGFloat)arg2 ;
-(void)graphView:(id)arg0 startupTime:(NSInteger)arg1 ;
-(void)graphViewDidBeginSelection:(id)arg0 ;
-(void)graphViewDidEndSelection:(id)arg0 ;
-(void)graphViewDidTapYAxis:(id)arg0 ;
-(void)graphViewExternalSelectionEnd:(id)arg0 ;
-(void)graphViewSizeChanged:(id)arg0 ;
-(void)loadView;
-(void)monthViewController:(id)arg0 didSelectDate:(id)arg1 ;
-(void)primaryGraphViewControllerDidInitialize:(id)arg0 ;
-(void)removeAllStackedDisplayTypes;
-(void)removeChartViewObserver:(id)arg0 ;
-(void)removeOverlayDisplayType:(id)arg0 stackOffset:(NSInteger)arg1 ;
-(void)removeOverlayDisplayType:(id)arg0 stackOffset:(NSInteger)arg1 automaticAutoscale:(BOOL)arg2 ;
-(void)replaceCurrentDisplayTypesWithTypes:(id)arg0 stackOffset:(NSInteger)arg1 resetDateRange:(BOOL)arg2 ;
-(void)reportStartupTime:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)sampleTypeDateRangeController:(id)arg0 didUpdateDateRanges:(id)arg1 ;
-(void)saveRestorationState;
-(void)scrollToDate:(id)arg0 withVisibleAlignment:(NSInteger)arg1 ;
-(void)scrollToMostRecentData;
-(void)scrollToRange:(id)arg0 withVisibleAlignment:(NSInteger)arg1 ;
-(void)selectTimeScope:(NSInteger)arg0 ;
-(void)setCurrentValueViewCallbacks:(id)arg0 ;
-(void)setDetailView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unitPreferencesWillUpdate:(id)arg0 ;
-(void)updateAnnotationDataSource:(id)arg0 pointContexts:(id)arg1 ;
-(void)updateCurrentValueView:(id)arg0 graphView:(id)arg1 timeScope:(NSInteger)arg2 ;
-(void)updateCurrentValueViewWithVisibleRange;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif