// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKHEARTRATEQUERYMANAGER_H
#define NTKHEARTRATEQUERYMANAGER_H

@class HKHealthStore, HKAnchoredObjectQuery, HKHeartRateSummaryQuery, NSHashTable, HKQuantitySample, HKHeartRateSummary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKHeartRateQueryManager : NSObject {
    BOOL _deviceIsLocked;
    NSObject<OS_dispatch_queue> *_healthQueue;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_heartRateQuery;
    HKHeartRateSummaryQuery *_heartRateSummaryQuery;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
}


@property (readonly, nonatomic) BOOL canUseFutureSamples; // ivar: _canUseFutureSamples
@property (nonatomic, getter=hasCheckedDefaults) BOOL checkedDefaults; // ivar: _checkedDefaults
@property (retain, nonatomic) HKQuantitySample *latestHeartRateSample; // ivar: _latestHeartRateSample
@property (readonly, nonatomic) HKHeartRateSummary *latestHeartRateSummary; // ivar: _latestHeartRateSummary


+(id)sharedInstance;
-(BOOL)_alreadyObserving;
-(BOOL)_haveObservers;
-(id)_init;
-(void)_enumerateObserversUsingBlock:(id)arg0 ;
-(void)_findLatestHeartRateSample:(id)arg0 ;
-(void)_handleDeviceLockChange;
-(void)_notifyObserversOfLatestSample;
-(void)_notifyObserversOfLatestSummary;
-(void)_queue_clearHeartRateSampleQueryWithError:(id)arg0 ;
-(void)_queue_clearHeartRateSummaryQueryWithError:(id)arg0 ;
-(void)_queue_retrieveLatestHeartRateOnce;
-(void)_queue_startObservingHeartRate;
-(void)_queue_startObservingHeartRateSummary;
-(void)_queue_stopObservingHeartRate;
-(void)_queue_stopObservingHeartRateSummary;
-(void)_startObserving;
-(void)_stopObserving;
-(void)_stopObservingIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setHeartRateSamples:(id)arg0 ;
-(void)startObservingIfNeeded;


@end


#endif