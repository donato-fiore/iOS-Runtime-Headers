// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATACOLLECTIONMANAGER_H
#define HDDATACOLLECTIONMANAGER_H

@class NSDate, NSMutableDictionary, NSMutableArray, NSSet, NSString;
@protocol HDDiagnosticObject, HDProfileReadyObserver, HDAssertionObserver, HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPeriodicActivity.h"
#import "HDDatabaseCoalescedWritePool.h"
#import "HDSeriesQuantityEventObserver.h"
#import "HDBTLEHeartRateDataCollector.h"
#import "HDDemoManager.h"
#import "HDProfile.h"

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDProfileReadyObserver, HDAssertionObserver, HDPeriodicActivityDelegate>

 {
    NSDate *_lastLaunchUpdate;
    NSMutableDictionary *_dataAggregatorsByType;
    HDPeriodicActivity *_periodicUpdateActivity;
    HDDatabaseCoalescedWritePool *_pendingSavePool;
    CGFloat unitTest_pendingSaveCoalescingInterval;
    BOOL unitTest_hasSetPendingSaveCoalescingInterval;
    int _privacyPreferencesNotificationToken;
    os_unfair_lock_s _collectorLock;
    NSMutableArray *_collectorLock_builtinCollectors;
    NSMutableDictionary *_collectorLock_dataCollectorsByType;
    NSMutableDictionary *_lastFlushDateByType;
    os_unfair_lock_s _fakingLock;
    id *_unitTest_aggregatorConfigurationChangedHandler;
    NSSet *_collectibleTypes;
    HDSeriesQuantityEventObserver *_seriesQuantityEventObserver;
    NSMutableDictionary *_observersByType;
    HDBTLEHeartRateDataCollector *_blteHeartRateDataCollector;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    HDDemoManager *_demoManager;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataCollectionQueue; // ivar: _dataCollectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessToFitnessData;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(BOOL)sensorDataArrayReceived:(id)arg0 deviceEntity:(id)arg1 error:(*id)arg2 ;
-(CGFloat)defaultAggregationIntervalForType:(id)arg0 ;
-(id)aggregatorForType:(id)arg0 ;
-(id)btleHeartRateDataCollector;
-(id)collectibleTypes;
-(id)diagnosticDescription;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg0 collectionIntervalsByType:(id)arg1 observerState:(id)arg2 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg0 sampleTypes:(id)arg1 observer:(id)arg2 observerState:(id)arg3 collectionInterval:(CGFloat)arg4 ;
-(id)takeCollectionAssertionWithOwnerIdentifier:(id)arg0 sampleTypes:(id)arg1 observerState:(id)arg2 collectionInterval:(CGFloat)arg3 ;
-(id)unitTest_dataAggregatorConfigurationForType:(id)arg0 ;
-(void)addDataCollectionObserver:(id)arg0 type:(id)arg1 collectionInterval:(CGFloat)arg2 state:(id)arg3 ;
-(void)addDataCollector:(id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)dealloc;
-(void)generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 completion:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
// -(void)performSaveWithMaximumLatency:(CGFloat)arg0 block:(id)arg1 completion:(unk)arg2  ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)periodicUpdate;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeDataCollectionObserver:(id)arg0 ;
-(void)removeDataCollectionObserver:(id)arg0 type:(id)arg1 ;
-(void)requestAggregationThroughDate:(id)arg0 types:(id)arg1 mode:(NSInteger)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)startDataCollectionForType:(id)arg0 observer:(id)arg1 collectionInterval:(CGFloat)arg2 ;
-(void)startFakingDataWithActivityType:(NSInteger)arg0 locationType:(NSInteger)arg1 speed:(id)arg2 ;
-(void)startFakingWithHKWorkoutConfiguration:(id)arg0 ;
-(void)stopDataCollectionForType:(id)arg0 observer:(id)arg1 ;
-(void)stopFakingData;
-(void)unitTest_addCollectibleType:(id)arg0 ;
-(void)unitTest_setAggregator:(id)arg0 forType:(id)arg1 ;
-(void)unitTest_setAggregatorConfigurationChangeHandler:(id)arg0 ;
-(void)unitTest_setPendingSaveCoalescingInterval:(CGFloat)arg0 ;


@end


#endif