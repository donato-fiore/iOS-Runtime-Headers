// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHRDAILYHEARTRATEMANAGER_H
#define HDHRDAILYHEARTRATEMANAGER_H

@class HDProfile, HDActivityCacheManager, NSMutableDictionary, NSString;
@protocol HDHealthDaemonReadyObserver, HDActivityCacheManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRDailyHeartRateManager : NSObject <HDHealthDaemonReadyObserver, HDActivityCacheManagerObserver>

 {
    HDProfile *_profile;
    HDActivityCacheManager *_activityCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_restingHeartRateByActivityCacheIndex;
    NSMutableDictionary *_walkingAverageHeartRateByActivityCacheIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_queue_cleanupValuesForTodayCacheIndex:(NSInteger)arg0 yesterdayCacheIndex:(NSInteger)arg1 ;
-(void)_queue_deleteHeartRateOfType:(id)arg0 forCacheIndex:(NSInteger)arg1 replacementUUID:(id)arg2 ;
-(void)_queue_replaceHeartRate:(id)arg0 ofType:(id)arg1 forCacheIndex:(NSInteger)arg2 dateInterval:(id)arg3 heartRateByCacheIndex:(id)arg4 ;
-(void)activityCacheManager:(id)arg0 changedHeartRateSummary:(id)arg1 isToday:(BOOL)arg2 ;
-(void)activityCacheManager:(id)arg0 changedTodayActivityCache:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;


@end


#endif