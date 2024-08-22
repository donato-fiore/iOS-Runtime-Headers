// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSSERVER_H
#define DNDSSERVER_H

@class NSArray, IDSService, FBSDisplayLayoutMonitor, STFocusStatusDomainPublisher, NSString;
@protocol DNDSAppForegroundTriggerManagerDataSource, DNDSDrivingTriggerManagerDataSource, DNDSGamingTriggerManagerDataSource, DNDSMindfulnessTriggerManagerDataSource, DNDSSleepingTriggerManagerDataSource, DNDSSmartTriggerManagerDataSource, DNDSWorkoutTriggerManagerDataSource, DNDSGlobalConfigurationManagerDelegate, DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSLocationLifetimeMonitorDataSource, DNDSScheduleLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSRemoteServiceProviderDelegate, DNDSRemoteAvailabilityServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate, DNDSModeConfigurationManagerDelegate, DNDSReachabilityDelegate, DNDSMeDeviceServiceListener, OS_dispatch_queue, DNDSAssertionSyncManager, DNDSSettingsSyncManager, DNDSKeybagStateProviding;

#import <Foundation/Foundation.h>

#import "DNDSCalendarEventLifetimeMonitor.h"
#import "DNDSScheduleLifetimeMonitor.h"
#import "DNDSLocationLifetimeMonitor.h"
#import "DNDSScheduleManager.h"
#import "DNDSAppForegroundTriggerManager.h"
#import "DNDSBiomeDonationManager.h"
#import "DNDSDrivingTriggerManager.h"
#import "DNDSGamingTriggerManager.h"
#import "DNDSMindfulnessTriggerManager.h"
#import "DNDSSleepingTriggerManager.h"
#import "DNDSSmartTriggerManager.h"
#import "DNDSWorkoutTriggerManager.h"
#import "DNDSMeDeviceService.h"
#import "DNDSStateProvider.h"
#import "DNDSEventBehaviorResolver.h"
#import "DNDSRemoteServiceProvider.h"
#import "DNDSRemoteAvailabilityServiceProvider.h"
#import "DNDSSettingsManager.h"
#import "DNDSPairedDeviceStateMonitor.h"
#import "DNDSSyncEngine.h"
#import "DNDSIDSSyncEngine.h"
#import "DNDSReachability.h"
#import "DNDSXPCEventStream.h"
#import "DNDSGlobalConfigurationStore.h"
#import "DNDSGlobalConfigurationManager.h"
#import "DNDSModeConfigurationsStore.h"
#import "DNDSPlaceholderModeManager.h"
#import "DNDSContactMonitor.h"
#import "DNDSAppInfoCache.h"
#import "DNDSUserAvailabilityCoordinator.h"
#import "DNDSClientDetailsProvider.h"
#import "DNDSModeAssertionManager.h"
#import "DNDSModeConfigurationManager.h"
#import "DNDSMetricsManager.h"

@interface DNDSServer : NSObject <DNDSAppForegroundTriggerManagerDataSource, DNDSDrivingTriggerManagerDataSource, DNDSGamingTriggerManagerDataSource, DNDSMindfulnessTriggerManagerDataSource, DNDSSleepingTriggerManagerDataSource, DNDSSmartTriggerManagerDataSource, DNDSWorkoutTriggerManagerDataSource, DNDSGlobalConfigurationManagerDelegate, DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSLocationLifetimeMonitorDataSource, DNDSScheduleLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSRemoteServiceProviderDelegate, DNDSRemoteAvailabilityServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate, DNDSModeConfigurationManagerDelegate, DNDSReachabilityDelegate, DNDSMeDeviceServiceListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    DNDSCalendarEventLifetimeMonitor *_calendarEventLifetimeMonitor;
    DNDSScheduleLifetimeMonitor *_scheduleLifetimeMonitor;
    DNDSLocationLifetimeMonitor *_locationLifetimeMonitor;
    NSArray *_lifetimeMonitors;
    DNDSScheduleManager *_scheduleManager;
    DNDSAppForegroundTriggerManager *_appForegroundTriggerManager;
    DNDSBiomeDonationManager *_biomeDonationManager;
    DNDSDrivingTriggerManager *_drivingTriggerManager;
    DNDSGamingTriggerManager *_gamingTriggerManager;
    DNDSMindfulnessTriggerManager *_mindfulnessTriggerManager;
    DNDSSleepingTriggerManager *_sleepingTriggerManager;
    DNDSSmartTriggerManager *_smartTriggerManager;
    DNDSWorkoutTriggerManager *_workoutTriggerManager;
    DNDSMeDeviceService *_meDeviceService;
    DNDSStateProvider *_stateProvider;
    DNDSEventBehaviorResolver *_eventBehaviorResolver;
    DNDSRemoteServiceProvider *_serviceProvider;
    DNDSRemoteAvailabilityServiceProvider *_availabilityServiceProvider;
    id<DNDSAssertionSyncManager> *_assertionSyncManager;
    id<DNDSAssertionSyncManager> *_legacyAssertionSyncManager;
    id<DNDSSettingsSyncManager> *_settingsSyncManager;
    DNDSSettingsManager *_settingsManager;
    IDSService *_idsLocalService;
    IDSService *_idsCloudService;
    DNDSPairedDeviceStateMonitor *_pairedDeviceStateMonitor;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    DNDSReachability *_reachability;
    id<DNDSKeybagStateProviding> *_keybag;
    DNDSXPCEventStream *_eventStream;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    DNDSGlobalConfigurationStore *_globalConfigurationStore;
    DNDSGlobalConfigurationManager *_globalConfigurationManager;
    DNDSModeConfigurationsStore *_modeConfigurationsStore;
    DNDSPlaceholderModeManager *_placeholderModeManager;
    DNDSContactMonitor *_contactMonitor;
    DNDSAppInfoCache *_appInfoCache;
    DNDSUserAvailabilityCoordinator *_userAvailabilityCoordinator;
    STFocusStatusDomainPublisher *_focusStatusDomainPublisher;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModeAssertionManager *_modeAssertionManager;
    DNDSModeConfigurationManager *_modeConfigurationManager;
    DNDSMetricsManager *_metricsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property NSUInteger lockState; // ivar: _lockState
@property NSUInteger lostModeState; // ivar: _lostModeState
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_setDefaultScheduleTriggerWithScheduleSettings:(id)arg0 ;
-(BOOL)_setDimsLockScreenSetting:(NSUInteger)arg0 forModeConfigurationWithIdentifier:(id)arg1 ;
-(BOOL)_setScheduleTrigger:(id)arg0 forModeConfigurationWithIdentifier:(id)arg1 ;
-(BOOL)eventBehaviorResolver:(id)arg0 isAvailabilityActiveForBundleIdentifier:(id)arg1 ;
-(BOOL)isCloudSyncDisabledForSyncManager:(id)arg0 ;
-(BOOL)layoutIsLocked:(id)arg0 ;
-(BOOL)remoteAvailabilityServiceProvider:(id)arg0 isLocalUserAvailableForApplicationIdentifier:(id)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 getPreventAutoReplyReturningError:(*id)arg1 ;
-(BOOL)remoteServiceProvider:(id)arg0 removeModeConfigurationWithModeIdentifier:(id)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setBehaviorSettings:(id)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setCloudSyncPreferenceEnabled:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setModeConfiguration:(id)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setPairSyncPreferenceEnabled:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setPreventAutoReply:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 setScheduleSettings:(id)arg1 withError:(*id)arg2 ;
-(BOOL)remoteServiceProvider:(id)arg0 syncModeConfigurationsReturningError:(*id)arg1 ;
-(BOOL)remoteServiceProvider:(id)arg0 userAvailabilityInActiveModeForContactHandle:(id)arg1 withError:(*id)arg2 ;
-(BOOL)setUILockState:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)currentUILockStateForEventBehaviorResolver:(id)arg0 ;
-(NSUInteger)remoteServiceProvider:(id)arg0 getCloudSyncStateReturningError:(*id)arg1 ;
-(NSUInteger)remoteServiceProvider:(id)arg0 getPairSyncStateReturningError:(*id)arg1 ;
-(id)_activeDateIntervalForModeAssertion:(id)arg0 currentlyActive:(BOOL)arg1 ;
-(id)_allModes;
-(id)_createDefaultModeForWorkoutTriggerIfNecessary;
-(id)_invalidateModeAssertionForClientIdentifier:(id)arg0 reason:(NSUInteger)arg1 reasonOverride:(NSUInteger)arg2 details:(id)arg3 error:(*id)arg4 ;
-(id)_scheduleSettingsForModeConfigurations;
-(id)_scheduleSettingsFromDefaultScheduleTrigger;
-(id)_scheduleSettingsMatchingTrigger:(id)arg0 ;
-(id)_scheduleTriggerMatchingSettings:(id)arg0 ;
-(id)_stateSystemSnapshot;
// -(id)_updateModeAssertionManagerAndRefreshLifetimesAndStateWithHandler:(id)arg0 error:(unk)arg1  ;
-(id)appForegroundTriggerConfigurationForAppForegroundTriggerManager:(id)arg0 ;
-(id)createWorkoutModeForWorkoutTriggerManager:(id)arg0 ;
-(id)currentStateForEventBehaviorResolver:(id)arg0 ;
-(id)currentStateForLegacyAssertionSyncManager:(id)arg0 ;
-(id)currentlyActivePairedDeviceForSyncManager:(id)arg0 ;
-(id)drivingModeForDrivingTriggerManager:(id)arg0 ;
-(id)eventBehaviorResolver:(id)arg0 bypassSettingsForClientIdentifier:(id)arg1 ;
-(id)eventBehaviorResolver:(id)arg0 configurationForModeIdentifier:(id)arg1 ;
-(id)gamingModeForGamingTriggerManager:(id)arg0 ;
-(id)init;
-(id)lifetimeMonitor:(id)arg0 modeAssertionsWithLifetimeClass:(Class)arg1 ;
-(id)lifetimeMonitor:(id)arg0 takeModeAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)locationTriggerConfigurationForLifetimeMonitor:(id)arg0 ;
-(id)mindfulnessModeForMindfulnessTriggerManager:(id)arg0 ;
-(id)modesSupportingSmartEntryForSmartTriggerManager:(id)arg0 ;
-(id)pairedDevicesForSyncManager:(id)arg0 ;
-(id)phoneCallBypassSettingsForSyncManager:(id)arg0 ;
-(id)remoteServiceProvider:(id)arg0 activeAssertionWithClientIdentifer:(id)arg1 error:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 allActiveModeAssertionsWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 allModesReturningError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 allowedModesForContactHandle:(id)arg1 withError:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 assertionWithClientIdentifer:(id)arg1 error:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 availableModesReturningError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 behaviorSettingsWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 currentMeDeviceStateWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 currentStateWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 getAppInfoForBundleIdentifier:(id)arg1 withError:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 getAppInfoForBundleIdentifiers:(id)arg1 withError:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(NSUInteger)arg2 clientIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)remoteServiceProvider:(id)arg0 invalidateModeAssertionForClientIdentifier:(id)arg1 reason:(NSUInteger)arg2 reasonOverride:(NSUInteger)arg3 details:(id)arg4 error:(*id)arg5 ;
-(id)remoteServiceProvider:(id)arg0 invalidateModeAssertionWithUUID:(id)arg1 reason:(NSUInteger)arg2 reasonOverride:(NSUInteger)arg3 clientIdentifier:(id)arg4 error:(*id)arg5 ;
-(id)remoteServiceProvider:(id)arg0 latestInvalidationWithClientIdentifer:(id)arg1 error:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 modeConfigurationForModeIdentifier:(id)arg1 withError:(*id)arg2 ;
-(id)remoteServiceProvider:(id)arg0 modeConfigurationsWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 publishStatusKitAvailabilityReturningError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(*id)arg4 ;
-(id)remoteServiceProvider:(id)arg0 scheduleSettingsWithError:(*id)arg1 ;
-(id)remoteServiceProvider:(id)arg0 takeModeAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)scheduleSettingsByModeIdentifierForScheduleLifetimeMonitor:(id)arg0 ;
-(id)scheduleSettingsByModeIdentifierForScheduleManager:(id)arg0 ;
-(id)scheduleSettingsForSyncManager:(id)arg0 ;
-(id)sleepingModeForSleepingTriggerManager:(id)arg0 ;
-(id)syncManager:(id)arg0 deviceForDeviceIdentifier:(id)arg1 ;
-(id)syncManager:(id)arg0 scheduleSettingsForModeIdentifier:(id)arg1 ;
-(id)syncManager:(id)arg0 updateOutboundModeAssertion:(id)arg1 ;
-(id)triggerManager:(id)arg0 assertionsWithClientIdentifer:(id)arg1 error:(*id)arg2 ;
-(id)triggerManager:(id)arg0 invalidateModeAssertionWithUUID:(id)arg1 reason:(NSUInteger)arg2 reasonOverride:(NSUInteger)arg3 clientIdentifier:(id)arg4 error:(*id)arg5 ;
-(id)triggerManager:(id)arg0 latestInvalidationWithClientIdentifer:(id)arg1 error:(*id)arg2 ;
-(id)triggerManager:(id)arg0 performModeAssertionUpdatesWithHandler:(id)arg1 ;
-(id)triggerManager:(id)arg0 takeModeAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)workoutModeForWorkoutTriggerManager:(id)arg0 ;
-(void)_forceConfigurationSyncIfNeededWithUpdateResult:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_migrateBypassSettingsIfNeeded;
-(void)_migrateDefaultDoNotDisturbModeIfNeeded;
-(void)_queue_handlePairedDeviceAndSyncSettingsChange;
-(void)_queue_resume;
-(void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(NSUInteger)arg0 source:(NSInteger)arg1 ;
-(void)_queue_validateIDSSyncEngine;
-(void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg0 ;
-(void)globalConfigurationManager:(id)arg0 didUpdatePhoneCallBypassSettings:(id)arg1 ;
-(void)globalConfigurationManager:(id)arg0 didUpdatePreventAutoReplySetting:(BOOL)arg1 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)lifetimeMonitor:(id)arg0 lifetimeDidExpireForAssertionUUIDs:(id)arg1 expirationDate:(id)arg2 ;
-(void)lifetimeMonitor:(id)arg0 registerTimerHandlerWithServiceIdentifier:(id)arg1 handler:(id)arg2 ;
-(void)lifetimeMonitor:(id)arg0 setTimer:(id)arg1 ;
-(void)meDeviceService:(id)arg0 didReceiveMeDeviceStateUpdate:(id)arg1 ;
-(void)modeConfigurationManager:(id)arg0 didModifyExceptionsForContacts:(id)arg1 forModeConfiguration:(id)arg2 ;
-(void)modeConfigurationManager:(id)arg0 didUpdateAvailableModes:(id)arg1 ;
-(void)pairedDeviceStateMonitor:(id)arg0 cloudPairingChangedFromDevices:(id)arg1 toDevices:(id)arg2 ;
-(void)pairedDeviceStateMonitor:(id)arg0 pairingChangedFromDevice:(id)arg1 toDevice:(id)arg2 ;
-(void)reachabilityChangedTo:(BOOL)arg0 ;
-(void)remoteServiceProvider:(id)arg0 didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg1 ;
-(void)resume;
-(void)setWorkoutTriggerEnabled:(BOOL)arg0 forWorkoutTriggerManager:(id)arg1 ;
-(void)settingsManager:(id)arg0 didReceiveUpdatedBehaviorSettings:(id)arg1 ;
-(void)settingsManager:(id)arg0 didReceiveUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)settingsManager:(id)arg0 didReceiveUpdatedScheduleSettings:(id)arg1 ;
-(void)settingsManager:(id)arg0 didReceiveUpdatedSyncSettings:(id)arg1 ;
-(void)syncManager:(id)arg0 didReceiveUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)syncManager:(id)arg0 didReceiveUpdatedScheduleSettings:(id)arg1 ;
-(void)syncManager:(id)arg0 performModeAssertionUpdatesWithHandler:(id)arg1 ;
-(void)syncManager:(id)arg0 prepareForSyncToDevices:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif