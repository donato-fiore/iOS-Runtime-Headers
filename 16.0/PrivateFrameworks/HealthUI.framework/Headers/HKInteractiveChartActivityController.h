// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTACTIVITYCONTROLLER_H
#define HKINTERACTIVECHARTACTIVITYCONTROLLER_H

@class NSString, _HKWheelchairUseCharacteristicCache, NSMapTable;
@protocol HKInteractiveChartViewObserver, HKActivityBarSeriesDelegate, HKInteractiveChartCurrentValueViewCallbacks;


#import "HKInteractiveChartViewController.h"
#import "HKActivitySummaryAnnotationViewDataSource.h"
#import "_ActivityCurrentValueView.h"
#import "HKActivitySummaryDataProvider.h"
#import "HKInteractiveChartDisplayType.h"

@interface HKInteractiveChartActivityController : HKInteractiveChartViewController <HKInteractiveChartViewObserver, HKActivityBarSeriesDelegate>



@property (retain, nonatomic) HKActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource; // ivar: _activityAnnotationDataSource
@property (retain, nonatomic) _ActivityCurrentValueView *activityCurrentValueView; // ivar: _activityCurrentValueView
@property (weak, nonatomic) NSObject<HKInteractiveChartCurrentValueViewCallbacks> *activityCurrentValueViewCallbacks; // ivar: _activityCurrentValueViewCallbacks
@property (retain, nonatomic) HKActivitySummaryDataProvider *activityDataProvider; // ivar: _activityDataProvider
@property (readonly, nonatomic) NSUInteger activityOptions; // ivar: _activityOptions
@property (nonatomic) NSInteger currentTimeScope; // ivar: _currentTimeScope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseGoalDisplayType; // ivar: _exerciseGoalDisplayType
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseValueDisplayType; // ivar: _exerciseValueDisplayType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveGoalDisplayType; // ivar: _moveGoalDisplayType
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveValueDisplayType; // ivar: _moveValueDisplayType
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standGoalDisplayType; // ivar: _standGoalDisplayType
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standValueDisplayType; // ivar: _standValueDisplayType
@property (readonly) Class superclass;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // ivar: _wheelchairUseCharacteristicCache
@property (retain, nonatomic) NSMapTable *yAxisAccessoryViewsByGraphSeries; // ivar: _yAxisAccessoryViewsByGraphSeries


+(id)_activitySummariesFromCodableCollection:(id)arg0 ;
+(id)_activitySummaryFromCodableSummaryEntry:(id)arg0 ;
+(id)_codableActivitySummaryDataFromSummaries:(id)arg0 ;
+(id)_codableActivitySummaryFromSummary:(id)arg0 ;
+(void)encodeChartDataWithHealthStore:(id)arg0 dateCache:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 activityMoveMode:(NSInteger)arg4 monthDateInterval:(id)arg5 sixMonthDateInterval:(id)arg6 completion:(id)arg7 ;
-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(NSInteger)_countOfStackedChartsFromActivityOptions:(NSUInteger)arg0 ;
-(NSInteger)_findFirstWeekdayFromModel:(id)arg0 ;
-(NSInteger)_representativeDataTypeForActivityValue:(NSInteger)arg0 ;
-(NSInteger)graphSeriesTimeScope;
-(id)_activitySeriesForActivityValue:(NSInteger)arg0 wheelchairUseCharacteristicCache:(id)arg1 unitPreferenceController:(id)arg2 displayTypeController:(id)arg3 activityOptions:(NSUInteger)arg4 ;
-(id)_activityYAxisForActivityValue:(NSInteger)arg0 zeroOnly:(BOOL)arg1 stackOffset:(NSInteger)arg2 bottomLabelPadding:(CGFloat)arg3 displayTypeController:(id)arg4 unitPreferenceController:(id)arg5 ;
-(id)_buildSummariesTableFromSharableModel:(id)arg0 ;
-(id)_dayActivitySummaryForDateRange:(id)arg0 ;
-(id)_decodeActivitySummariesFromQueryData:(id)arg0 ;
-(id)_displayTypeForActivityValue:(NSInteger)arg0 yAxis:(id)arg1 dataProvider:(id)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4 wheelchairUseCharacteristicCache:(id)arg5 timescopeToSummariesTable:(id)arg6 activityOptions:(NSUInteger)arg7 ;
-(id)_displayTypeForUnits:(NSInteger)arg0 displayTypeController:(id)arg1 ;
-(id)_generateActivityBarSeriesWithColor:(id)arg0 legendTitle:(id)arg1 metGoalFillStyle:(id)arg2 missedGoalFillStyle:(id)arg3 activityValue:(NSInteger)arg4 unitPreferenceController:(id)arg5 displayTypeController:(id)arg6 drawLegendsInsideSeries:(BOOL)arg7 ;
-(id)_generateActivityGoalLineSeriesWithColor:(id)arg0 ;
-(id)_lineColorForActivityValue:(NSInteger)arg0 ;
-(id)_metGoalFillStyleForActivityValue:(NSInteger)arg0 useGradient:(BOOL)arg1 ;
-(id)_missedGoalFillStyleForActivityValue:(NSInteger)arg0 useGradient:(BOOL)arg1 ;
-(id)_rangeValueAsNumber:(id)arg0 ;
-(id)_spanForValueDisplayType:(id)arg0 timeScope:(NSInteger)arg1 title:(id)arg2 ;
-(id)_timeScopeRangesFromSharableModel:(id)arg0 ;
-(id)_titleForActivityValue:(NSInteger)arg0 wheelchairUseCharacteristicCache:(id)arg1 ;
-(id)_unitForActivityValue:(NSInteger)arg0 displayTypeController:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)_zeroStringForActivityValue:(NSInteger)arg0 displayTypeController:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)activitySummaryForCurrentRange;
-(id)calendarQueryDisplayType;
-(id)calendarQuerySampleType;
-(id)descriptionForChartData:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)descriptionSeriesForGraphView:(id)arg0 ;
-(id)descriptionSpansForGraphView:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithHealthStore:(id)arg0 unitPreferenceController:(id)arg1 dateCache:(id)arg2 chartDataCacheController:(id)arg3 selectedTimeScopeController:(id)arg4 sampleTypeDateRangeController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6 initialXValue:(id)arg7 activityMoveMode:(NSInteger)arg8 activityOptions:(NSUInteger)arg9 chartSharableModel:(id)arg10 ;
-(id)lollipopAnnotationColor;
-(id)lollipopExtensionColor;
-(id)makeAnnotationDataSource;
-(id)makeCurrentValueView;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(void)configureDisplayTypes:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(void)didUpdateFromDateZoom:(NSInteger)arg0 toDateZoom:(NSInteger)arg1 newVisibleRange:(id)arg2 ;
-(void)setCurrentValueViewCallbacks:(id)arg0 ;
-(void)tappedOnCurrentValueView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCurrentValueView:(id)arg0 graphView:(id)arg1 timeScope:(NSInteger)arg2 showInfoButton:(BOOL)arg3 ;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif