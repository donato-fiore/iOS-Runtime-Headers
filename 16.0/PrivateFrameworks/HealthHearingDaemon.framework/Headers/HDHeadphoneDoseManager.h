// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEADPHONEDOSEMANAGER_H
#define HDHEADPHONEDOSEMANAGER_H

@class HDProfile, HDDataCollectionAssertion, NSDate, NSString;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDQuantitySeriesObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHeadphoneDoseMetadataStore.h"
#import "HDHeadphoneExposureNotificationCenter.h"
#import "HDHeadphoneAudioExposureStatisticsCalculator.h"

@interface HDHeadphoneDoseManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDQuantitySeriesObserver>

 {
    HDProfile *_profile;
    CGFloat _dose;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _enabled;
    HDHeadphoneDoseMetadataStore *_keyValueStore;
    HDHeadphoneExposureNotificationCenter *_notificationCenter;
    HDHeadphoneAudioExposureStatisticsCalculator *_statisticsCalculator;
    HDDataCollectionAssertion *_collectionAssertion;
    BOOL _lastUpdateSuppressedUserNotification;
    NSDate *_lastLockDateForAnalytics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDHeadphoneAudioExposureStatisticsCalculator *unitTesting_calculator;
@property (copy, nonatomic) id *unitTesting_daemonDidBecomeReadyHandler; // ivar: _unitTesting_daemonDidBecomeReadyHandler
@property (copy, nonatomic) id *unitTesting_didNotifyUser; // ivar: _unitTesting_didNotifyUser
@property (copy, nonatomic) id *unitTesting_didObserveProtectedDataHandler; // ivar: _unitTesting_didObserveProtectedDataHandler
@property (copy, nonatomic) id *unitTesting_didUpdateHandler; // ivar: _unitTesting_didUpdateHandler
@property (readonly, nonatomic) HDHeadphoneDoseMetadataStore *unitTesting_keyValueStore;
@property (copy, nonatomic) id *unitTesting_protectedDataDidBecomeAvailable; // ivar: _unitTesting_protectedDataDidBecomeAvailable


-(BOOL)_lock_rebuildWithAssertion:(id)arg0 error:(*id)arg1 ;
-(BOOL)_lock_updateCurrentDoseUsingStatisticsResult:(id)arg0 assertion:(id)arg1 error:(*id)arg2 ;
-(BOOL)_overrideDoseLimit:(id)arg0 error:(*id)arg1 ;
-(BOOL)_rebuildWithError:(*id)arg0 ;
-(id)_fetchDoseLimitInfoWithError:(*id)arg0 ;
-(id)_infoWithError:(*id)arg0 ;
-(id)_initWithProfile:(id)arg0 keyValueStore:(id)arg1 calculator:(id)arg2 ;
// -(id)_initWithProfile:(id)arg0 keyValueStore:(id)arg1 calculator:(id)arg2 unitTesting_daemonDidBecomeReadyHandler:(id)arg3 unitTesting_didObserveProtectedDataHandler:(unk)arg4 unitTesting_didUpdateHandler:(id)arg5  ;
-(id)_initWithProfile:(id)arg0 keyValueStore:(id)arg1 calculator:(id)arg2 unitTesting_didUpdateHandler:(id)arg3 ;
-(id)_lock_pruneWithNowDate:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_pruneWithNowDate:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_takeAccessibilityAssertion;
-(id)initWithProfile:(id)arg0 ;
-(id)transactionalQuantityInsertHandlerForProfile:(SEL)arg0 journaled:(id)arg1 count:(BOOL)arg2 ;
-(void)_handleSignificantTimeChangeNotification:(id)arg0 ;
-(void)_headphoneExposureNotificationsEnabledDidChange:(id)arg0 ;
-(void)_lock_setCollectionAssertion:(id)arg0 ;
-(void)_lock_updateCollectionAssertionForDoseAccumulated:(CGFloat)arg0 ;
-(void)_lock_updateIsEnabledForInitialSetup:(BOOL)arg0 assertion:(id)arg1 ;
-(void)_lock_updateWithNotifications:(id)arg0 journaled:(BOOL)arg1 assertion:(id)arg2 ;
-(void)_registerForSignificantTimeChangeNotification;
-(void)_reportSyncedHeadphoneNotificationSamples:(id)arg0 journaled:(BOOL)arg1 nowDate:(id)arg2 ;
-(void)_unregisterForSignificantTimeChangeNotification;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)profile:(id)arg0 didDiscardSeriesOfType:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesJournaled:(id)arg0 type:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif