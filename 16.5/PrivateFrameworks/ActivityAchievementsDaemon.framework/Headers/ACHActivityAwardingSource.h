// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACTIVITYAWARDINGSOURCE_H
#define ACHACTIVITYAWARDINGSOURCE_H

@class ACHCurrentActivitySummaryQuery, NSMutableArray, NSDictionary, NSArray, NSString, NSCalendar, HKHealthStore, NSNumber, HDProfile, HKActivitySummary;
@protocol HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHActivitySummaryIterator.h"
#import "ACHActivitySummaryUtility.h"
#import "ACHActivityAwardingDataProvider.h"
#import "ACHDataStore.h"
#import "ACHEarnedInstanceAwardingEngine.h"
#import "ACHActivityAwardingEnvironment.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateStore.h"
#import "ACHActivityTriggerGenerator.h"

@interface ACHActivityAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>



@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator; // ivar: _activitySummaryIterator
@property (retain, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // ivar: _activitySummaryUtility
@property (retain, nonatomic) ACHCurrentActivitySummaryQuery *currentActivitySummaryQuery; // ivar: _currentActivitySummaryQuery
@property (retain, nonatomic) NSMutableArray *currentTemplates; // ivar: _currentTemplates
@property (retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider; // ivar: _dataProvider
@property (weak, nonatomic) ACHDataStore *dataStore; // ivar: _dataStore
@property (retain, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine; // ivar: _engine
@property (retain, nonatomic) ACHActivityAwardingEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSCalendar *gregorianUTCCalendar; // ivar: _gregorianUTCCalendar
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (copy, nonatomic) id *incrementalUpdateCompletionHandler; // ivar: _incrementalUpdateCompletionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isObservingSummaryUpdates; // ivar: _isObservingSummaryUpdates
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch; // ivar: _overrideIsAppleWatch
@property (retain, nonatomic) NSString *overrideWatchCountryCode; // ivar: _overrideWatchCountryCode
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) ACHActivityAwardingDataProvider *progressDataProvider; // ivar: _progressDataProvider
@property (retain, nonatomic) ACHActivityAwardingEnvironment *progressEnvironment; // ivar: _progressEnvironment
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary; // ivar: _todayActivitySummary
@property (retain, nonatomic) ACHActivityTriggerGenerator *triggerGenerator; // ivar: _triggerGenerator
@property (readonly, nonatomic) NSString *uniqueName;
@property (retain, nonatomic) NSString *watchCountryCode; // ivar: _watchCountryCode
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // ivar: _yesterdayActivitySummary


-(BOOL)_hasMetGoalForTemplate:(id)arg0 andActivitySummary:(id)arg1 ;
-(BOOL)_isAchievementStillEarnableForTemplate:(id)arg0 andProgressEnvironment:(id)arg1 ;
-(BOOL)providesProgressForTemplate:(id)arg0 ;
-(NSUInteger)_queue_triggersWithChangedSummaryFields:(NSUInteger)arg0 dataProvider:(id)arg1 ;
-(id)_queue_companionProgressEnvironment;
-(id)_queue_evaluateTriggers:(NSUInteger)arg0 activitySummary:(id)arg1 templates:(id)arg2 shouldLog:(BOOL)arg3 ;
-(id)currentGoalQuantityForTemplate:(id)arg0 ;
-(id)currentProgressQuantityForTemplate:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 databaseContext:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 dataStore:(id)arg1 templateStore:(id)arg2 awardingEngine:(id)arg3 progressProvider:(id)arg4 ;
-(id)initWithProfile:(id)arg0 dataStore:(id)arg1 templateStore:(id)arg2 awardingEngine:(id)arg3 progressProvider:(id)arg4 ;
-(unsigned char)_creatorDevice;
-(void)_queue_observeSummaries;
-(void)_queue_startCurrentSummaryQuery;
-(void)_queue_updateDataProvider:(id)arg0 forDateInterval:(id)arg1 awardingBlock:(id)arg2 ;
// -(void)_queue_updateDataProvider:(id)arg0 forDateInterval:(id)arg1 awardingBlock:(id)arg2 error:(unk)arg3  ;
-(void)_runIncrementallyForChangedSummaryFields:(NSUInteger)arg0 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateTodayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateYesterdayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)daemonReady:(id)arg0 ;
-(void)dataStoreDidClearAllProperties:(id)arg0 completion:(id)arg1 ;
-(void)startUp;


@end


#endif