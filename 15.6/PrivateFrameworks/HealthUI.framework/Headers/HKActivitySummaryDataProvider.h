// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYSUMMARYDATAPROVIDER_H
#define HKACTIVITYSUMMARYDATAPROVIDER_H

@class HKSynchronousObserverSet, NSCache, NSCalendar, HKQuery, NSString, HKHealthStore, HKActivitySummary;
@protocol HKDateCacheObserver;

#import <Foundation/Foundation.h>

#import "HKFetchOperation.h"
#import "HKThrottleCallback.h"
#import "HKDateCache.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKActivitySummaryDataProvider : NSObject <HKDateCacheObserver>

 {
    HKSynchronousObserverSet *_observers;
    NSCache *_activitySummaryForTimeScopeCache;
    NSCalendar *_cachedCalendar;
    HKFetchOperation *_outstandingFetchOperation;
    HKQuery *_observerQuery;
    NSCache *_hourlyActivitySummaryCache;
    HKThrottleCallback *_databaseChangesThrottle;
}


@property (readonly, nonatomic) NSInteger activityMoveMode; // ivar: _activityMoveMode
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKActivitySummary *latestActivitySummary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(BOOL)_sampleDate:(id)arg0 withinHourBeforeDate:(id)arg1 ;
-(BOOL)activitySummariesAreLoading;
-(NSInteger)_weekOfYearForDateComponents:(id)arg0 calendar:(id)arg1 ;
-(id)_averageActivitySummariesForDateRange:(id)arg0 averagePeriod:(NSInteger)arg1 ;
-(id)_buildActivitySummaryFromAverages:(struct _WDActivitySummaryAverages )arg0 averagePeriod:(NSInteger)arg1 startDate:(id)arg2 calendar:(id)arg3 energyUnit:(id)arg4 standHourUnit:(id)arg5 ;
-(id)_buildHourlyActivitySummaryFromDate:(id)arg0 calendar:(id)arg1 moveQuantity:(id)arg2 exerciseQuantity:(id)arg3 standQuantity:(id)arg4 moveGoal:(id)arg5 exerciseGoal:(id)arg6 standGoal:(id)arg7 ;
-(id)_dayActivitySummariesForDateRange:(id)arg0 ;
-(id)_fetchOperationForTimeScope:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(id)_hourActivitySummariesForDateRange:(id)arg0 ;
-(id)_hourlySummariesFromStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 activeEnergyData:(id)arg3 appleMoveTimeData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6 dayGoalData:(id)arg7 ;
-(id)_predicateForStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)_predicateForStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 activityMoveMode:(NSInteger)arg3 ;
-(id)_queriesForTimeScope:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(id)activitySummariesForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)activitySummariesForTimeScope:(NSInteger)arg0 ;
-(id)cachedCalendar;
-(id)initWithHealthStore:(id)arg0 dateCache:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)initWithHealthStore:(id)arg0 dateCache:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 activityMoveMode:(NSInteger)arg4 ;
-(void)_alertObserversDidUpdateValues;
-(void)_averageActivitySummariesForCachedData:(id)arg0 averagePeriod:(NSInteger)arg1 handler:(id)arg2 ;
-(void)_clearCaches;
-(void)_fetchValueWithRetryCount:(NSInteger)arg0 ;
-(void)_hourActivitySummariesForDateRange:(id)arg0 pageHandler:(id)arg1 ;
-(void)_hourlyActivityDataForStartDate:(id)arg0 endDate:(id)arg1 healthStore:(id)arg2 calendar:(id)arg3 handler:(id)arg4 ;
-(void)_hourlyActivityPageDataArrived:(id)arg0 pageNumber:(id)arg1 error:(id)arg2 ;
-(void)_hourlyPageInProgress:(id)arg0 ;
-(void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)arg0 ;
-(void)_setupActivitySummaryChangeObserver;
-(void)_stopActivitySummaryChangeObserver;
-(void)_submitHourlyQueryForPageNumber:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)_transitionToFetchFailureForTimeScope:(NSInteger)arg0 ;
-(void)_unitPreferencesDidUpdate:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dateCacheDidUpdate:(id)arg0 onNotification:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif