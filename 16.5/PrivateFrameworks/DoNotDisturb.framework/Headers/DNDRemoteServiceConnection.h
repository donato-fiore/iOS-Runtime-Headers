// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDREMOTESERVICECONNECTION_H
#define DNDREMOTESERVICECONNECTION_H

@class BSServiceConnection, NSMutableArray, NSHashTable, NSString;
@protocol DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol;

#import <Foundation/Foundation.h>

#import "DNDState.h"

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol>

 {
    BSServiceConnection *_monitorLock_monitorService;
    BSServiceConnection *_connectionLock_connection;
    NSInteger _monitorState;
    os_unfair_lock_s _stateLock;
    os_unfair_lock_s _connectionLock;
    os_unfair_lock_s _monitorLock;
    NSMutableArray *_assertionMonitorRequestDetails;
    NSMutableArray *_stateMonitorRequestDetails;
    NSMutableArray *_settingsMonitorRequestDetails;
    NSMutableArray *_modeIdentifiersMonitorRequestDetails;
    NSMutableArray *_globalConfigurationMonitorRequestDetails;
    NSMutableArray *_meDeviceStateMonitorRequestDetails;
    NSHashTable *_eventListeners;
    DNDState *_lastReceivedState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(id)_monitorTarget;
-(id)_remoteTarget;
-(id)init;
-(void)_connectionLock_createConnection;
-(void)_connectionLock_invalidateConnection;
-(void)_monitorLock_createMonitorConnection;
-(void)_monitorLock_invalidateMonitorConnection;
-(void)_setMonitorState:(NSInteger)arg0 ;
-(void)activateModeWithDetails:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)activeModeAssertionWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)addEventListener:(id)arg0 ;
-(void)clearAppActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(id)arg4 ;
-(void)clearAppConfigurationActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(id)arg4 ;
-(void)clearSystemActionWithIdentifier:(id)arg0 forModeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearSystemConfigurationActionWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)deliverActiveModeAssertion:(id)arg0 stateUpdate:(id)arg1 clientIdentifiers:(id)arg2 ;
-(void)deliverActiveModeAssertionUpdate:(id)arg0 invalidation:(id)arg1 clientIdentifiers:(id)arg2 ;
-(void)deliverAllModes:(id)arg0 ;
-(void)deliverAvailableModes:(id)arg0 ;
-(void)deliverMeDeviceState:(id)arg0 ;
-(void)deliverStateUpdate:(id)arg0 ;
-(void)deliverUpdatedBehaviorSettings:(id)arg0 ;
-(void)deliverUpdatedPairSyncState:(id)arg0 ;
-(void)deliverUpdatedPhoneCallBypassSettings:(id)arg0 ;
-(void)deliverUpdatedPreventAutoReplySetting:(id)arg0 ;
-(void)deliverUpdatedScheduleSettings:(id)arg0 ;
-(void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAccountFeatureSupportWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getActiveModeAssertionWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllModeAssertionsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllModesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllowedModesForContactHandle:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppActionsForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppConfigurationActionsForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppConfigurationPredicateForActionIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(id)arg4 ;
-(void)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppInfoForBundleIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppInfoForBundleIdentifiers:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAvailableModesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getBehaviorSettingsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCloudSyncStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getModeConfigurationForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getModeConfigurationsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getModesCanImpactAvailabilityWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPairSyncStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPreventAutoReplyWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getScheduleSettingsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSilencedModesForContactHandle:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getStateDumpWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSystemActionsForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getSystemConfigurationActionsForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getUserAvailabilityInActiveModeForContactHandle:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidateActiveModeAssertionWithDetails:(id)arg0 reasonOverride:(id)arg1 requestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateModeAssertionWithUUID:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)publishStatusKitAvailabilityWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryMeDeviceStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryStateForUpdateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForAssertionUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForGlobalConfigurationUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForMeDeviceStateUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForModeSelectionUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForSettingsUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForStateUpdatesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeEventListener:(id)arg0 ;
-(void)removeModeConfigurationForModeIdentifier:(id)arg0 deletePlaceholder:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)resolveBehaviorForEventDetails:(id)arg0 requestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setAppAction:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(id)arg4 ;
-(void)setAppConfigurationAction:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(id)arg4 ;
-(void)setAppConfigurationPredicate:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 withRequestDetails:(id)arg4 completionHandler:(id)arg5 ;
-(void)setAppConfigurationTargetContentIdentifierPrefix:(id)arg0 forActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 withRequestDetails:(id)arg4 completionHandler:(id)arg5 ;
-(void)setBehaviorSettings:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCloudSyncPreferenceEnabled:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setModeConfiguration:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setModesCanImpactAvailability:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPairSyncPreferenceEnabled:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPreventAutoReply:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScheduleSettings:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScreenIsShared:(id)arg0 screenIsMirrored:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSystemAction:(id)arg0 forModeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSystemConfigurationAction:(id)arg0 modeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)signalAppConfigurationContextUpdateForModeIdentifier:(id)arg0 ;
-(void)syncModeConfigurationsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)takeModeAssertionWithDetails:(id)arg0 requestDetails:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif