// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSREMOTESERVICEPROVIDER_H
#define DNDSREMOTESERVICEPROVIDER_H

@class BSServiceConnectionListener, NSMapTable, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol, OS_dispatch_queue, DNDSRemoteServiceProviderDelegate;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"

@interface DNDSRemoteServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol>

 {
    BSServiceConnectionListener *_requestListener;
    BSServiceConnectionListener *_monitorListener;
    NSMapTable *_clientConnectionDetailsByConnection;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    os_unfair_lock_s _accessLock;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_clientNotificationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSRemoteServiceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_clientDetailsForClientIdentifier:(id)arg0 clientConnection:(id)arg1 ;
-(id)initWithClientDetailsProvider:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_handleClientConnectionInterrupted:(id)arg0 ;
-(void)_handleClientConnectionInvalidated:(id)arg0 ;
-(void)_iterateClientConnectionsToSendWithHandler:(id)arg0 ;
-(void)_queryStateWithCompletionHandler:(id)arg0 ;
-(void)_registerOrMutateConnectionDetailsForClientConnection:(id)arg0 handler:(id)arg1 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_unregisterConnectionDetailsForClientConnection:(id)arg0 ;
-(void)activateModeWithDetails:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)activeModeAssertionWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getActiveModeAssertionWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllModeAssertionsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllModesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllowedModesForContactHandle:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppInfoForBundleIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAppInfoForBundleIdentifiers:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAvailableModesWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getBehaviorSettingsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCloudSyncStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getModeConfigurationForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)getModeConfigurationsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPairSyncStateWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPreventAutoReplyWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getScheduleSettingsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStateDumpWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)getUserAvailabilityInActiveModeForContactHandle:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleMeDeviceStateUpdate:(id)arg0 ;
-(void)handleModeAssertionUpdateResult:(id)arg0 ;
-(void)handleStateUpdate:(id)arg0 ;
-(void)handleUpdatedBehaviorSettings:(id)arg0 ;
-(void)handleUpdatedModes:(id)arg0 availableModes:(id)arg1 ;
-(void)handleUpdatedPairSyncState:(NSUInteger)arg0 ;
-(void)handleUpdatedPhoneCallBypassSettings:(id)arg0 ;
-(void)handleUpdatedPreventAutoReplySetting:(BOOL)arg0 ;
-(void)handleUpdatedScheduleSettings:(id)arg0 ;
-(void)invalidate;
-(void)invalidateActiveModeAssertionWithDetails:(id)arg0 reasonOverride:(id)arg1 requestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateModeAssertionWithUUID:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
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
-(void)removeModeConfigurationForModeIdentifier:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)resolveBehaviorForEventDetails:(id)arg0 requestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)resume;
-(void)setBehaviorSettings:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCloudSyncPreferenceEnabled:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setModeConfiguration:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPairSyncPreferenceEnabled:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPreventAutoReply:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScheduleSettings:(id)arg0 withRequestDetails:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScreenIsShared:(id)arg0 screenIsMirrored:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id)arg3 ;
-(void)syncModeConfigurationsWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)takeModeAssertionWithDetails:(id)arg0 requestDetails:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif