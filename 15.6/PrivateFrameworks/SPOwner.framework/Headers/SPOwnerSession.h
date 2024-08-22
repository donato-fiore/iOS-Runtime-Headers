// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPOWNERSESSION_H
#define SPOWNERSESSION_H

@class NSSet, NSMutableDictionary, NSString, NSDate, NSDictionary, NSOperationQueue, FMXPCServiceDescription, FMXPCSession;
@protocol SPSeparationMonitoringProtocol, SPMaintenanceConnectionProtocol, SPPersistentConnectionProtocol, SPTrackingAvoidanceServiceProtocol, SPTagSeparationProtocol, SPOwnerSessionPrivateProtocol, OS_dispatch_source, SPOwnerSessionXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPOwnerSessionState.h"
#import "SPOwnerSessionLocationFetch.h"

@interface SPOwnerSession : NSObject <SPSeparationMonitoringProtocol, SPMaintenanceConnectionProtocol, SPPersistentConnectionProtocol, SPTrackingAvoidanceServiceProtocol, SPTagSeparationProtocol, SPOwnerSessionPrivateProtocol>



@property (retain, nonatomic) SPOwnerSessionState *_ownerSessionState; // ivar: __ownerSessionState
@property (readonly, copy, nonatomic) NSSet *allBeacons;
@property (retain, nonatomic) NSSet *allBeaconsCache; // ivar: _allBeaconsCache
@property (retain, nonatomic) NSMutableDictionary *batteryStatusCache; // ivar: _batteryStatusCache
@property (copy, nonatomic) id *beaconAddedBlock; // ivar: beaconAddedBlock
@property (copy, nonatomic) id *beaconRemovedBlock; // ivar: beaconRemovedBlock
@property (copy, nonatomic) id *beaconsChangedBlock; // ivar: beaconsChangedBlock
@property (retain, nonatomic) NSSet *clientObservedBeacons; // ivar: _clientObservedBeacons
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectionExpiryDispatchTimer; // ivar: _connectionExpiryDispatchTimer
@property (retain, nonatomic) NSMutableDictionary *darwinHandlers; // ivar: _darwinHandlers
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
@property (copy, nonatomic) NSDate *fetchLimit; // ivar: _fetchLimit
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *latestLocationsUpdatedBlock; // ivar: latestLocationsUpdatedBlock
@property (retain, nonatomic) NSDictionary *locationCache; // ivar: _locationCache
@property (retain, nonatomic) SPOwnerSessionLocationFetch *locationFetch; // ivar: _locationFetch
@property (copy, nonatomic) NSSet *locationSources; // ivar: _locationSources
@property (copy, nonatomic) id *maintainedBeaconsChangedBlock; // ivar: maintainedBeaconsChangedBlock
@property (copy, nonatomic) id *maintainedUnknownBeaconsChangedBlock; // ivar: maintainedUnknownBeaconsChangedBlock
@property (retain, nonatomic) NSOperationQueue *notificationQueue; // ivar: _notificationQueue
@property (readonly, copy, nonatomic) SPOwnerSessionState *ownerSessionState;
@property (copy, nonatomic) id *ownerSessionStateUpdatedBlock; // ivar: ownerSessionStateUpdatedBlock
@property (retain, nonatomic) NSObject<SPOwnerSessionXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *registerIntentDispatchTimer; // ivar: _registerIntentDispatchTimer
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tagSeparationBeaconsChangedBlock; // ivar: _tagSeparationBeaconsChangedBlock
@property (retain, nonatomic) NSObject<SPOwnerSessionXPCProtocol> *userAgentProxy; // ivar: _userAgentProxy


-(id)executeCommand:(id)arg0 ;
-(id)executeUTPlaySoundCommand:(id)arg0 ;
-(id)init;
-(id)maintenanceConnectionUpdateBlock:(SEL)arg0 ;
-(id)remoteInterface;
-(void)_cacheBatteryStatus:(unsigned char)arg0 beaconUUID:(id)arg1 ;
-(void)_invalidate;
-(void)_unregisterDarwinNotificationName:(id)arg0 ;
-(void)_updateBatteryStatus:(unsigned char)arg0 beaconUUID:(id)arg1 completion:(id)arg2 ;
-(void)_updateOwnerSessionState;
-(void)acceptUTForBeaconUUID:(id)arg0 ;
-(void)activeCompanionWithCompletion:(id)arg0 ;
-(void)addBeaconChangedListener:(id)arg0 beaconUUID:(id)arg1 taskName:(id)arg2 commandIdentifier:(id)arg3 commandIssueDate:(id)arg4 ;
-(void)addSafeLocation:(id)arg0 completion:(id)arg1 ;
-(void)allBeaconsWithCompletion:(id)arg0 ;
-(void)allObservationsForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)assignSafeLocation:(id)arg0 beaconUUIDs:(id)arg1 completion:(id)arg2 ;
-(void)assignSafeLocation:(id)arg0 to:(id)arg1 completion:(id)arg2 ;
-(void)beaconForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)beaconForUUID:(id)arg0 completion:(id)arg1 ;
-(void)beaconGroupForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)beaconGroupsForUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)beaconStoreStatusWithCompletion:(id)arg0 ;
-(void)beaconingIdentifierForMACAddress:(id)arg0 completion:(id)arg1 ;
-(void)beaconsToMaintainPersistentConnection:(id)arg0 ;
-(void)beaconsToMonitorForSeparation:(id)arg0 ;
-(void)clientConfigurationWithCompletion:(id)arg0 ;
-(void)connectionExpiryTimerFired;
-(void)dealloc;
-(void)didDetectUnauthorizedTrackingWithCompletion:(id)arg0 completion:(id)arg1 ;
-(void)didUpdateUnauthorizedTrackingWithCompletion:(id)arg0 completion:(id)arg1 ;
-(void)didWithdrawUnauthorizedTrackingWithCompletion:(id)arg0 completion:(id)arg1 ;
-(void)disableSeparationMonitoringForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)disableSeparationMonitoringForBeacons:(id)arg0 completion:(id)arg1 ;
-(void)disableUTAppAlert:(BOOL)arg0 completion:(id)arg1 ;
-(void)enableSeparationMonitoringForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)enableSeparationMonitoringForBeacons:(id)arg0 completion:(id)arg1 ;
-(void)executeCommand:(id)arg0 completion:(id)arg1 ;
-(void)fakeClassicPairingWithMACAddress:(id)arg0 completion:(id)arg1 ;
-(void)fetchFindMyNetworkStatusForMACAddress:(id)arg0 completion:(id)arg1 ;
-(void)fetchSeparationMonitoringStatus:(id)arg0 ;
-(void)fetchUnauthorizedEncryptedPayload:(id)arg0 completion:(id)arg1 ;
-(void)finishBeaconFuture:(id)arg0 beaconUUID:(id)arg1 ;
-(void)finishBeaconGroupFuture:(id)arg0 command:(id)arg1 commandIssueDate:(id)arg2 ;
-(void)forceDistributeKeysWithCompletion:(id)arg0 ;
-(void)forceKeySyncForBeaconUUID:(id)arg0 lastObservationDate:(id)arg1 lastObservationIndex:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)forceLOIBasedSafeLocationRefresh:(id)arg0 ;
-(void)forceUpdateKeyAlignmentRecordForUUID:(id)arg0 completion:(id)arg1 ;
-(void)forceUpdateKeyMapsForUUID:(id)arg0 completion:(id)arg1 ;
-(void)ignoreBeaconByAdvertisement:(id)arg0 until:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)ignoreBeaconByUUID:(id)arg0 until:(NSUInteger)arg1 ;
-(void)ignoreBeaconByUUID:(id)arg0 until:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)ignoreBeaconByUUID:(id)arg0 untilDate:(id)arg1 completion:(id)arg2 ;
-(void)ignoringUnauthorizedTrackingWithCompletion:(id)arg0 completion:(id)arg1 ;
-(void)invalidateRegisterIntentDispatchTimer;
-(void)isUTAppAlertDisabled:(id)arg0 ;
-(void)locationForContext:(id)arg0 completion:(id)arg1 ;
-(void)locationsForBeacons:(id)arg0 completion:(id)arg1 ;
-(void)maintainedBeaconsChangedWithBlock:(id)arg0 ;
-(void)maintainedUnknownBeaconsChangedWithBlock:(id)arg0 ;
-(void)playUnauthorizedSoundOnBeaconByUUID:(id)arg0 completion:(id)arg1 ;
-(void)publishSeparationEventForBeacons:(id)arg0 eventType:(NSInteger)arg1 region:(id)arg2 completion:(id)arg3 ;
-(void)rawSearchResultsForBeacon:(id)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)readAISMetadataFromBeaconIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)readAISMetadataFromMACAddress:(id)arg0 useOwnerControlPoint:(BOOL)arg1 completion:(id)arg2 ;
-(void)registerDarwinNotificationName:(id)arg0 block:(id)arg1 ;
-(void)registerIntentTimerFired;
-(void)removeBeacon:(id)arg0 completion:(id)arg1 ;
-(void)removeSafeLocation:(id)arg0 completion:(id)arg1 ;
-(void)requestLiveLocationForFriend:(id)arg0 completion:(id)arg1 ;
-(void)requestLiveLocationForUUID:(id)arg0 completion:(id)arg1 ;
-(void)safeLocationsForSeparationMonitoring:(id)arg0 ;
-(void)sendRegisterIntentWithCompletion:(id)arg0 ;
-(void)sendUnregisterIntentWithCompletion:(id)arg0 ;
-(void)setFindMyNetworkStatusForMACAddress:(id)arg0 status:(BOOL)arg1 completion:(id)arg2 ;
-(void)setInvalidationBlock:(id)arg0 ;
-(void)setLocationUpdateBlock:(id)arg0 ;
-(void)shareBeacon:(id)arg0 handles:(id)arg1 expiration:(id)arg2 completion:(id)arg3 ;
-(void)simulateAccessoryPairing:(id)arg0 name:(id)arg1 isAirPods:(BOOL)arg2 completion:(id)arg3 ;
-(void)startRefreshing;
-(void)startRefreshingBeacons:(id)arg0 ;
-(void)startRefreshingBeaconsForSeparationMonitoringWithBlock:(id)arg0 ;
-(void)startRefreshingPersistentConnectionWithBlock:(id)arg0 ;
-(void)startRefreshingSafeLocationWithBlock:(id)arg0 ;
-(void)startRefreshingSeparationMonitoringState:(id)arg0 ;
-(void)startRefreshingTagSeparationWithBlock:(id)arg0 ;
-(void)startUpdatingMaintenanceConnection;
-(void)stopRefreshing;
-(void)stopRefreshingBeaconsForSeparationMonitoringWithBlock;
-(void)stopRefreshingPersistentConnection;
-(void)stopRefreshingSafeLocations;
-(void)stopRefreshingSeparationMonitoringState;
-(void)stopRefreshingTagSeparation;
-(void)subscribeAndFetchLocationForContext:(id)arg0 completion:(id)arg1 ;
-(void)tagSeparationStateChanged:(id)arg0 beaconUUID:(id)arg1 completion:(id)arg2 ;
-(void)tagSeparationStateChanged:(id)arg0 beaconUUID:(id)arg1 location:(id)arg2 completion:(id)arg3 ;
-(void)unacceptedBeaconsWithCompletion:(id)arg0 ;
-(void)unassignSafeLocation:(id)arg0 beaconUUID:(id)arg1 completion:(id)arg2 ;
-(void)unassignSafeLocation:(id)arg0 beaconUUIDs:(id)arg1 completion:(id)arg2 ;
-(void)unauthorizedTrackingTypeWithCompletion:(id)arg0 completion:(id)arg1 ;
-(void)unknownBeaconsForUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)unregisterDarwinNotificationName:(id)arg0 ;
-(void)unsubscribeLocationUpdatesWithCompletion:(id)arg0 ;
-(void)updateAllBeacons;
-(void)updateBatteryStatus:(unsigned char)arg0 beaconUUID:(id)arg1 completion:(id)arg2 ;
-(void)updateBeaconObservations:(id)arg0 completion:(id)arg1 ;
-(void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg0 ;
-(void)updateSafeLocation:(id)arg0 completion:(id)arg1 ;
-(void)waitForBeaconStoreAvailableWithCompletion:(id)arg0 ;


@end


#endif