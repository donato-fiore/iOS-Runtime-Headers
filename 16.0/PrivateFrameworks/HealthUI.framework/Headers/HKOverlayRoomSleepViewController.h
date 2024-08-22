// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMSLEEPVIEWCONTROLLER_H
#define HKOVERLAYROOMSLEEPVIEWCONTROLLER_H

@class NSString, NSDictionary;
@protocol HKCurrentValueViewDataSourceDelegate, HKOverlaySleepRoomContextChangeDelegate, HKOverlayRoomTrendModelProviding, HKSleepDataSourceProvider;


#import "HKOverlayRoomViewController.h"
#import "HKOverlayContextLocation.h"
#import "HKInteractiveChartDataFormatter.h"
#import "HKDisplayType.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomSleepViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, HKOverlaySleepRoomContextChangeDelegate, HKOverlayRoomTrendModelProviding>



@property (nonatomic) BOOL baseDisplayIsSchedule; // ivar: baseDisplayIsSchedule
@property (retain, nonatomic) HKOverlayContextLocation *comparisonContextLocation; // ivar: _comparisonContextLocation
@property (nonatomic) BOOL comparisonContextSelected; // ivar: comparisonContextSelected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL durationContextSelected; // ivar: durationContextSelected
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL scheduleContextSelected; // ivar: scheduleContextSelected
@property (nonatomic) BOOL shouldHighlightBaseDisplayContext; // ivar: shouldHighlightBaseDisplayContext
@property (retain, nonatomic) NSDictionary *sleepChartCaches; // ivar: _sleepChartCaches
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter; // ivar: _sleepChartFormatter
@property (weak, nonatomic) NSObject<HKSleepDataSourceProvider> *sleepDataSourceProvider; // ivar: _sleepDataSourceProvider
@property (retain, nonatomic) HKDisplayType *sleepDisplayType; // ivar: _sleepDisplayType
@property (nonatomic) BOOL stageDurationContextSelected; // ivar: stageDurationContextSelected
@property (nonatomic) BOOL stagePercentageContextSelected; // ivar: stagePercentageContextSelected
@property (nonatomic) BOOL stagePercentageContextWillBeSelected; // ivar: stagePercentageContextWillBeSelected
@property (readonly) Class superclass;
@property (retain, nonatomic) HKOverlayContextLocation *trendContextLocation; // ivar: _trendContextLocation
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(BOOL)_initialTrendSelectedForMode:(NSInteger)arg0 trendModel:(id)arg1 ;
-(BOOL)infographicSupportedForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(BOOL)supportsShowAllFilters;
-(NSInteger)initialSelectedContainerIndexForMode:(NSInteger)arg0 ;
-(NSInteger)initialSleepSeriesType;
-(id)_buildConsistencyDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)arg0 customSleepSeriesMapping:(id)arg1 customSleepChartFormatter:(id)arg2 ;
-(id)_buildDurationAverageFormatter;
-(id)_buildDurationAverageSeries;
-(id)_buildDurationDisplayTypeForStackedWithApplicationItems:(id)arg0 ;
-(id)_buildDurationDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_buildScheduleDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_buildSleepDisplayTypeWithApplicationItems:(id)arg0 sleepSeriesType:(NSInteger)arg1 customSleepSeriesMapping:(id)arg2 customSleepChartFormatter:(id)arg3 isStackedChart:(BOOL)arg4 ;
-(id)_buildSleepTrendContext:(id)arg0 overlayChartController:(id)arg1 ;
-(id)_buildStagesDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_buildStagesDurationDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)_consistencyContextForApplicationItems:(id)arg0 overlayMode:(NSInteger)arg1 isPrimaryContext:(BOOL)arg2 ;
-(id)_durationAmountContextForApplicationItems:(id)arg0 durationDisplayType:(id)arg1 ;
-(id)_durationAverageContextForApplicationItems:(id)arg0 durationDisplayType:(id)arg1 useInBedAverage:(BOOL)arg2 ;
-(id)_durationGoalContextForApplicationItems:(id)arg0 durationDisplayType:(id)arg1 overlayMode:(NSInteger)arg2 isPrimaryContext:(BOOL)arg3 ;
-(id)_fullContextsForApplicationItems:(id)arg0 overlayChartController:(id)arg1 ;
-(id)_itemForSleepStageInfographicWithStage:(NSInteger)arg0 ;
-(id)_itemForTitle:(id)arg0 titleAccessoryColor:(id)arg1 description:(id)arg2 ;
-(id)_primaryContextForApplicationItems:(id)arg0 overlayChartController:(id)arg1 ;
-(id)_sleepColorForSelectedRangeData:(id)arg0 ;
-(id)_sleepStagePercentageContextForStage:(NSInteger)arg0 applicationItems:(id)arg1 baseDisplayType:(id)arg2 ;
-(id)_stageDurationContextForApplicationItems:(id)arg0 baseDisplayType:(id)arg1 sleepCategoryValue:(NSInteger)arg2 ;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)dateRangeFromSelectionContext:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)getChartSummaryTrendModelToModify;
-(id)infographicViewControllerForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 sleepDataSourceProvider:(id)arg2 sleepChartFormatter:(id)arg3 mode:(NSInteger)arg4 trendModel:(id)arg5 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 containerIndex:(NSInteger)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)restorationStateDictionary;
-(id)stringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)titleForSelectedRangeData:(id)arg0 displayType:(id)arg1 ;
-(void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)arg0 ;
-(void)_setDefaultChartFormatterFonts;
-(void)_updateHighlightedSleepStage:(NSInteger)arg0 onDisplayType:(id)arg1 ;
-(void)saveRestorationState;
-(void)setBaseDisplayIsDuration;
-(void)viewDidLoad;


@end


#endif