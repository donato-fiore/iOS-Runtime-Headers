// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPSTORE_H
#define HKSPSLEEPSTORE_H

@class NSString, HKHealthStore, HKSleepHealthStore;
@protocol HKSPSleepFocusModeBridgeDelegate, HKSPXPCConnectionProviderDelegate, NAScheduler, HKSPSleepFocusModeBridge;

#import <Foundation/Foundation.h>

#import "HKSPAnalyticsManager.h"
#import "HKSPXPCClientIdentifier.h"
#import "HKSPXPCConnectionProvider.h"
#import "HKSPObserverSet.h"
#import "HKSPThrottler.h"
#import "HKSPSleepFocusConfiguration.h"
#import "HKSPSleepStoreCache.h"
#import "HKSPSleepStoreExportedObject.h"
#import "HKSPSyncAnchorContainer.h"
#import "HKSPSleepWidgetManager.h"

@interface HKSPSleepStore : NSObject <HKSPSleepFocusModeBridgeDelegate, HKSPXPCConnectionProviderDelegate>



@property (readonly, nonatomic) HKSPAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, copy, nonatomic) HKSPXPCClientIdentifier *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) HKSPXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) HKSPThrottler *reconnectThrottler; // ivar: _reconnectThrottler
@property (readonly, nonatomic) HKSPSleepFocusConfiguration *sleepFocusConfiguration;
@property (readonly, nonatomic) NSObject<HKSPSleepFocusModeBridge> *sleepFocusModeBridge; // ivar: _sleepFocusModeBridge
@property (readonly, nonatomic) HKSleepHealthStore *sleepHealthStore; // ivar: _sleepHealthStore
@property (readonly, nonatomic) HKSPSleepStoreCache *sleepStoreCache; // ivar: _sleepStoreCache
@property (readonly, nonatomic) HKSPSleepStoreExportedObject *sleepStoreExportedObject; // ivar: _sleepStoreExportedObject
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSPSyncAnchorContainer *syncAnchorContainer; // ivar: _syncAnchorContainer
@property (readonly, nonatomic) HKSPSleepWidgetManager *widgetManager; // ivar: _widgetManager


+(id)_sleepDisabledError;
+(id)_updatedHistoricalSleepGoalForSleepSchedule:(id)arg0 options:(NSUInteger)arg1 date:(id)arg2 ;
+(id)_updatedHistoricalSleepSchedulesFromSleepSchedule:(id)arg0 options:(NSUInteger)arg1 date:(id)arg2 ;
-(BOOL)_cachingEnabled;
-(BOOL)_connectAutomatically;
-(BOOL)_observeSleepFocusMode;
-(BOOL)_reloadsWidgets;
-(BOOL)_resultHasSchedule:(id)arg0 ;
-(BOOL)_resultScheduleIsValid:(id)arg0 ;
-(BOOL)_resultScheduleMeetsDefaultGoal:(id)arg0 ;
-(BOOL)sleepModeOnWithError:(*id)arg0 ;
-(NSInteger)sleepModeWithError:(*id)arg0 ;
-(NSInteger)sleepWidgetStateWithError:(*id)arg0 ;
-(NSUInteger)currentSleepScheduleStateWithError:(*id)arg0 ;
-(id)_clearWidgetOverrideOnServer;
-(id)_confirmAwakeOnServer;
-(id)_dismissGoodMorningOnServer;
-(id)_dismissSleepLockOnServer;
-(id)_getSleepEventRecordDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepEventRecordFromServerDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepModeDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepModeFromServerDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepScheduleDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepScheduleFromServerDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepScheduleStateFromServerDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepScheduleStateOnDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepSettingsDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepSettingsFromServerDoSync:(BOOL)arg0 notify:(BOOL)arg1 ;
-(id)_getSleepWidgetStateDoSync:(BOOL)arg0 ;
-(id)_getSleepWidgetStateFromServerDoSync:(BOOL)arg0 ;
-(id)_prepareObjectForSave:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_publishNotificationOnServerWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(id)_publishWakeUpResultsNotificationOnServer;
-(id)_saveCurrentSleepEventRecordOnServer:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_saveCurrentSleepScheduleOnServer:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_saveCurrentSleepSettingsOnServer:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_sendScheduleChangedAnalyticsWithContext:(id)arg0 ;
-(id)_setLockScreenOverrideStateOnServerWithState:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)_setSleepModeOnServer:(NSInteger)arg0 reason:(NSUInteger)arg1 ;
-(id)_setWidgetOverrideStateOnServerWithState:(NSInteger)arg0 ;
-(id)_sleepAlarmWasDismissedOnDateOnServer:(id)arg0 source:(NSUInteger)arg1 ;
-(id)_sleepAlarmWasModifiedOnServer:(NSUInteger)arg0 ;
-(id)_sleepAlarmWasSnoozedUntilDateOnServer:(id)arg0 source:(NSUInteger)arg1 ;
-(id)_writeHistoricalSchedule:(id)arg0 options:(NSUInteger)arg1 ;
-(id)currentSleepEventRecordFuture;
-(id)currentSleepEventRecordWithError:(*id)arg0 ;
-(id)currentSleepScheduleFuture;
-(id)currentSleepScheduleStateFuture;
-(id)currentSleepScheduleWithError:(*id)arg0 ;
-(id)currentSleepSettingsFuture;
-(id)currentSleepSettingsWithError:(*id)arg0 ;
-(id)init;
// -(id)initWithConnectionProviderProvider:(id)arg0 identifier:(unk)arg1 healthStore:(id)arg2 options:(id)arg3  ;
// -(id)initWithConnectionProviderProvider:(id)arg0 identifier:(unk)arg1 healthStore:(id)arg2 options:(id)arg3 analyticsManager:(NSUInteger)arg4 throttlerProvider:(id)arg5 callbackScheduler:(id)arg6 sleepFocusModeBridgeProvider:(unk)arg7 widgetTimelineControllersProvider:(id)arg8 currentDateProvider:(id)arg9  ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 healthStore:(id)arg1 options:(NSUInteger)arg2 ;
-(id)nextEventDueAfterDate:(id)arg0 error:(*id)arg1 ;
-(id)nextEventDueAfterDateFuture:(id)arg0 ;
-(id)nextEventWithIdentifier:(id)arg0 dueAfterDate:(id)arg1 error:(*id)arg2 ;
-(id)nextEventWithIdentifierFuture:(id)arg0 dueAfterDate:(id)arg1 ;
-(id)saveCurrentSleepEventRecord:(id)arg0 ;
-(id)saveCurrentSleepEventRecord:(id)arg0 options:(NSUInteger)arg1 ;
-(id)saveCurrentSleepSchedule:(id)arg0 ;
-(id)saveCurrentSleepSchedule:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(id)saveCurrentSleepSettings:(id)arg0 ;
-(id)saveCurrentSleepSettings:(id)arg0 options:(NSUInteger)arg1 ;
-(id)sleepModeFuture;
-(id)sleepModeOnFuture;
-(id)sleepScheduleModelFuture;
-(id)sleepScheduleModelWithError:(*id)arg0 ;
-(id)sleepWidgetStateFuture;
-(id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg0 alarmStatus:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)upcomingResolvedScheduleOccurrenceAfterDate:(id)arg0 error:(*id)arg1 ;
-(id)upcomingScheduleOccurrenceAfterDate:(id)arg0 alarmStatus:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)upcomingScheduleOccurrenceAfterDate:(id)arg0 error:(*id)arg1 ;
-(id)upcomingScheduleOccurrenceAfterDateFuture:(id)arg0 ;
-(void)_checkInWithCurrentSyncAnchor;
-(void)_notifyObserversForChangedSleepEventRecord:(id)arg0 ;
-(void)_notifyObserversForChangedSleepMode:(NSInteger)arg0 ;
-(void)_notifyObserversForChangedSleepSchedule:(id)arg0 ;
-(void)_notifyObserversForChangedSleepScheduleState:(NSUInteger)arg0 ;
-(void)_notifyObserversForChangedSleepSettings:(id)arg0 ;
-(void)_notifyObserversForSleepEvent:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearWidgetOverrideWithCompletion:(id)arg0 ;
-(void)confirmAwakeWithCompletion:(id)arg0 ;
-(void)connect;
-(void)connectSynchronously:(BOOL)arg0 ;
-(void)createSleepFocusModeWithCompletion:(id)arg0 ;
-(void)currentSleepEventRecordWithCompletion:(id)arg0 ;
-(void)currentSleepScheduleStateWithCompletion:(id)arg0 ;
-(void)currentSleepScheduleWithCompletion:(id)arg0 ;
-(void)currentSleepSettingsWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteSleepFocusModeWithCompletion:(id)arg0 ;
-(void)dismissGoodMorningWithCompletion:(id)arg0 ;
-(void)dismissSleepLockWithCompletion:(id)arg0 ;
-(void)nextEventDueAfterDate:(id)arg0 completion:(id)arg1 ;
-(void)nextEventWithIdentifier:(id)arg0 dueAfterDate:(id)arg1 completion:(id)arg2 ;
-(void)publishNotificationWithIdentifier:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)publishWakeUpResultsNotificationWithCompletion:(id)arg0 ;
-(void)reconnect;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;
-(void)saveCurrentSleepEventRecord:(id)arg0 completion:(id)arg1 ;
-(void)saveCurrentSleepEventRecord:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)saveCurrentSleepSchedule:(id)arg0 completion:(id)arg1 ;
-(void)saveCurrentSleepSchedule:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)saveCurrentSleepSchedule:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)saveCurrentSleepSettings:(id)arg0 completion:(id)arg1 ;
-(void)saveCurrentSleepSettings:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setLockScreenOverrideState:(NSInteger)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)setSleepCoachingOnboardingCompletedVersion:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setSleepModeOn:(BOOL)arg0 completion:(id)arg1 ;
-(void)setSleepModeOn:(BOOL)arg0 reason:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setSleepTrackingOnboardingCompletedVersion:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setSleepWindDownShortcutsOnboardingCompletedVersion:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setUpcomingWakeUpAlarmEnabled:(BOOL)arg0 date:(id)arg1 completion:(id)arg2 ;
-(void)setWakeUpAlarmEnabled:(BOOL)arg0 resolvedOccurrence:(id)arg1 date:(id)arg2 completion:(id)arg3 ;
-(void)setWidgetOverrideState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)skipUpcomingWakeUpAlarmForDate:(id)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sleepAlarmWasModifiedFromSource:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasModifiedWithCompletion:(id)arg0 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg0 completion:(id)arg1 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sleepFocusModeBridge:(id)arg0 didUpdateSleepFocusConfiguration:(id)arg1 ;
-(void)sleepModeOnWithCompletion:(id)arg0 ;
-(void)sleepModeWithCompletion:(id)arg0 ;
-(void)sleepScheduleModelWithCompletion:(id)arg0 ;
-(void)sleepWidgetStateWithCompletion:(id)arg0 ;
-(void)suggestedSleepScheduleWithProviders:(id)arg0 completion:(id)arg1 ;
-(void)upcomingScheduleOccurrenceAfterDate:(id)arg0 completion:(id)arg1 ;


@end


#endif