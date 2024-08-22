// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDACTIVITYCACHEMANAGER_H
#define HDACTIVITYCACHEMANAGER_H

@class NSTimeZone, NSDateInterval, HKActivityCache, HKHeartRateSummary, HKQuantityType, NSSet, NSMutableDictionary, HKCategoryType, HKCategorySample, _HKDelayedOperation, NSHashTable, NSCalendar, NSDate, NSString;
@protocol HDProfileReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSourceEntity.h"
#import "HDActivityCacheDataSource.h"

@interface HDActivityCacheManager : NSObject <HDProfileReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSInteger _todayActivityCacheIndex;
    NSInteger _yesterdayActivityCacheIndex;
    NSInteger _tomorrowActivityCacheIndex;
    BOOL _cacheIndicesAreSet;
    NSTimeZone *_currentTimeZone;
    NSDateInterval *_todayDateInterval;
    NSDateInterval *_yesterdayDateInterval;
    BOOL _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HKHeartRateSummary *_todayHeartRateSummary;
    HKHeartRateSummary *_yesterdayHeartRateSummary;
    HDSourceEntity *_localDeviceSourceEntity;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    HKQuantityType *_moveMinuteGoalType;
    HKQuantityType *_exerciseGoalType;
    HKQuantityType *_standGoalType;
    NSSet *_allQuantityTypes;
    NSMutableDictionary *_goalsByIndex;
    HKCategoryType *_activityMoveModeChangeType;
    HKCategorySample *_todayActivityMoveModeChangeSample;
    HKCategorySample *_yesterdayActivityMoveModeChangeSample;
    BOOL _activityMoveModeIsSet;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    BOOL _hasSubscribedToSignificantTimeChangeNotifications;
    NSInteger _wheelchairUse;
    int _rebuildCacheNotificationToken;
}


@property (readonly) NSCalendar *calendar;
@property (readonly, nonatomic) HKActivityCache *currentActivityCache;
@property (retain, nonatomic) NSDate *dateOverride; // ivar: _dateOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimeZone *timeZoneOverride; // ivar: _timeZoneOverride
@property (readonly, nonatomic) HKActivityCache *yesterdayActivityCache;


-(id)initWithProfile:(id)arg0 ;
-(void)_didReceiveSignificantTimeChangeNotification;
-(void)_userCharacteristicsDidChangeNotification:(id)arg0 ;
-(void)accessStatisticsBuilderWithCacheIndex:(NSInteger)arg0 handler:(id)arg1 ;
-(void)addActivityCacheObserver:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeActivityCacheObserver:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif