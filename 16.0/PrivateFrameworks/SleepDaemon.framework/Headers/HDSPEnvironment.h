// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPENVIRONMENT_H
#define HDSPENVIRONMENT_H

@class _HKBehavior, NSString, NAFuture, HKSPHealthStoreProvider, HKSPSensitiveUIMonitor;
@protocol HDSPDiagnosticsProvider, HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPSystemReadyDelegate, NAScheduler, HKSPQueueBackedScheduler, HKSPUserDefaults;

#import <Foundation/Foundation.h>

#import "HDSPSleepActionManager.h"
#import "HDSPAnalyticsManager.h"
#import "HDSPAssertionManager.h"
#import "HDSPBiomeManager.h"
#import "HDSPChargingReminderManager.h"
#import "HDSPContextStoreManager.h"
#import "HDSPDiagnostics.h"
#import "HDSPGoodMorningAlertManager.h"
#import "HDSPIDSServiceManager.h"
#import "HDSPSleepScheduleModelMigrationManager.h"
#import "HDSPNotificationListener.h"
#import "HDSPSleepNotificationManager.h"
#import "HDSPSleepAlarmManager.h"
#import "HDSPSleepScheduleStateCoordinator.h"
#import "HDSPSleepLockScreenManager.h"
#import "HDSPSleepModeManager.h"
#import "HDSPSleepScheduleModelManager.h"
#import "HDSPSleepEventScheduler.h"
#import "HDSPSleepStoreServer.h"
#import "HDSPSleepStorage.h"
#import "HDSPSleepTrackingManager.h"
#import "HDSPSleepWidgetManager.h"
#import "HDSPEnvironmentStateMachine.h"
#import "HDSPSystemMonitor.h"
#import "HDSPTimeChangeListener.h"
#import "HDSPWakeDetectionManager.h"
#import "HDSPWakeUpResultsNotificationManager.h"

@interface HDSPEnvironment : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPSystemReadyDelegate>



@property (readonly, nonatomic) HDSPSleepActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) HDSPAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (readonly, nonatomic) HDSPAssertionManager *assertionManager; // ivar: _assertionManager
@property (readonly, nonatomic) _HKBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) HDSPBiomeManager *biomeManager; // ivar: _biomeManager
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) HDSPChargingReminderManager *chargingReminderManager; // ivar: _chargingReminderManager
@property (readonly, nonatomic) HDSPContextStoreManager *contextStoreManager; // ivar: _contextStoreManager
@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HKSPQueueBackedScheduler> *defaultCallbackScheduler; // ivar: _defaultCallbackScheduler
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPDiagnostics *diagnostics; // ivar: _diagnostics
@property (readonly, nonatomic) NAFuture *environmentIsReady; // ivar: _environmentIsReady
@property (readonly, nonatomic) HDSPGoodMorningAlertManager *goodMorningAlertManager; // ivar: _goodMorningAlertManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPHealthStoreProvider *healthStoreProvider; // ivar: _healthStoreProvider
@property (readonly, nonatomic) HDSPIDSServiceManager *idsServiceManager; // ivar: _idsServiceManager
@property (readonly, nonatomic) BOOL isDemoEnvironment;
@property (readonly, nonatomic) BOOL isDisabled;
@property (readonly, nonatomic) BOOL isEnvironmentReady;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly, nonatomic) HDSPSleepScheduleModelMigrationManager *migrationManager; // ivar: _migrationManager
@property (readonly, nonatomic) HDSPNotificationListener *notificationListener; // ivar: _notificationListener
@property (readonly, nonatomic) HDSPSleepNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) HKSPSensitiveUIMonitor *sensitiveUIMonitor; // ivar: _sensitiveUIMonitor
@property (readonly, nonatomic) HDSPSleepAlarmManager *sleepAlarmManager; // ivar: _sleepAlarmManager
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinator *sleepCoordinator; // ivar: _sleepCoordinator
@property (readonly, nonatomic) HDSPSleepLockScreenManager *sleepLockScreenManager; // ivar: _sleepLockScreenManager
@property (readonly, nonatomic) HDSPSleepModeManager *sleepModeManager; // ivar: _sleepModeManager
@property (readonly, nonatomic) HDSPSleepScheduleModelManager *sleepScheduleModelManager; // ivar: _sleepScheduleModelManager
@property (readonly, nonatomic) HDSPSleepEventScheduler *sleepScheduler; // ivar: _sleepScheduler
@property (readonly, nonatomic) HDSPSleepStoreServer *sleepServer; // ivar: _sleepServer
@property (readonly, nonatomic) HDSPSleepStorage *sleepStorage; // ivar: _sleepStorage
@property (readonly, nonatomic) HDSPSleepTrackingManager *sleepTrackingManager; // ivar: _sleepTrackingManager
@property (readonly, nonatomic) HDSPSleepWidgetManager *sleepWidgetManager; // ivar: _sleepWidgetManager
@property (readonly, nonatomic) HDSPEnvironmentStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly, nonatomic) os_unfair_lock_s stateMachineLock; // ivar: _stateMachineLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSystemMonitor *systemMonitor; // ivar: _systemMonitor
@property (readonly, nonatomic) HDSPTimeChangeListener *timeChangeListener; // ivar: _timeChangeListener
@property (readonly, nonatomic) NSObject<HKSPUserDefaults> *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) HDSPWakeDetectionManager *wakeDetectionManager; // ivar: _wakeDetectionManager
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationManager *wakeUpResultsNotificationManager; // ivar: _wakeUpResultsNotificationManager


+(id)demoModeEnvironment;
+(id)disabledEnvironment;
+(id)standardEnvironment;
-(BOOL)needsDataMigration;
-(id)_environmentAwareComponents;
-(id)currentContext;
-(id)currentSource;
-(id)currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
// -(id)initWithBehavior:(id)arg0 sleepStorageProvider:(id)arg1 sleepScheduleModelManagerProvider:(unk)arg2 sleepSchedulerProvider:(id)arg3 sleepServerProvider:(unk)arg4 sleepCoordinatorProvider:(id)arg5 sleepModeManagerProvider:(unk)arg6 sleepTrackingManagerProvider:(id)arg7 goodMorningAlertManagerProvider:(unk)arg8 chargingReminderManagerProvider:(id)arg9 wakeDetectionManagerProvider:(unk)arg10 wakeUpResultsNotificationManagerProvider:(id)arg11 actionManagerProvider:(unk)arg12 sleepAlarmManagerProvider:(id)arg13 healthStoreProvider:(unk)arg14 contextStoreManagerProvider:(id)arg15 biomeManagerProvider:(unk)arg16 migrationManagerProvider:(id)arg17 notificationManagerProvider:(unk)arg18 notificationListenerProvider:(id)arg19 sleepLockScreenManagerProvider:(unk)arg20 sleepWidgetManagerProvider:(id)arg21 idsServiceManagerProvider:(unk)arg22 diagnosticsProvider:(id)arg23 systemMonitorProvider:(unk)arg24 assertionManager:(id)arg25 timeChangeListenerProvider:(unk)arg26 sensitiveUIMonitorProvider:(id)arg27 analyticsManagerProvider:(id)arg28 userDefaults:(unk)arg29 currentDateProvider:(id)arg30 defaultCallbackScheduler:(unk)arg31  ;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)environmentDidBecomeReady;
-(void)environmentShouldMigrateData;
// -(void)perform:(id)arg0 withContext:(unk)arg1  ;
// -(void)perform:(id)arg0 withSource:(unk)arg1  ;
// -(void)performBlock:(id)arg0 assertLock:(unk)arg1  ;
// -(void)performBlock:(id)arg0 withLock:(unk)arg1  ;
-(void)performWhenEnvironmentIsReady:(id)arg0 ;
// -(void)performWhenEnvironmentIsReady:(id)arg0 withContext:(unk)arg1  ;
-(void)prepare;
-(void)shutdown;
-(void)systemDidBecomeReady;
-(void)updateState;


@end


#endif