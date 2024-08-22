// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIMODEL_H
#define FIUIMODEL_H

@class NSHashTable, NSMutableDictionary, _HKCurrentActivitySummaryQuery, HKCurrentActivityCacheQuery, HKActivitySummary, HKActivityCache, NSPredicate, NSDictionary, HKHealthStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FIUIWeeklyGoalModel.h"

@interface FIUIModel : NSObject {
    FIUIWeeklyGoalModel *_weeklyGoalModel;
    NSHashTable *_observers;
    NSMutableDictionary *_currentActivitySummaryQueryClients;
    NSMutableDictionary *_currentActivityCacheQueryClients;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    NSInteger _queue_activitySummaryQueryRetries;
    NSInteger _queue_activityCacheQueryRetries;
    HKActivitySummary *_queue_currentActivitySummaryForClients;
    HKActivityCache *_queue_currentActivityCacheForClients;
    NSObject<OS_dispatch_queue> *_activityQueryClientQueue;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
}


@property (retain, nonatomic) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides; // ivar: _currentActivitySummaryQueryCollectionIntervalOverrides
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSPredicate *sourcesPredicate;
@property (readonly, nonatomic) FIUIWeeklyGoalModel *weeklyGoalModel;


+(BOOL)isWheelchairUser;
+(id)_dailyTotalsQueryFromDate:(id)arg0 toDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(id)arg5 ;
+(id)dailyTotalQueryForDate:(id)arg0 dataType:(id)arg1 predicate:(id)arg2 sendUpdates:(BOOL)arg3 handler:(id)arg4 ;
-(id)_createCurrentActivitySummaryQuery;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)startCurrentActivitySummaryQueryWithHandler:(id)arg0 ;
-(void)_printStatisticsCollection:(id)arg0 ;
-(void)_printUpdatedStatistics:(id)arg0 ;
-(void)_queue_restartCurrentActivitySummaryQueryAfterError;
-(void)_setKnownSources:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stopCurrentActivitySummaryQueryForClientToken:(id)arg0 ;
-(void)stopQuery:(id)arg0 ;


@end


#endif