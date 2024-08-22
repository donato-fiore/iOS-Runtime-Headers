// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTDEVICEMANAGERROAR_H
#define HMDRESIDENTDEVICEMANAGERROAR_H

@class HMFObject, NSMutableSet, NSArray, HMFFuture, NSString, NSSet, NSUUID, NSNotificationCenter, NSHashTable;
@protocol HMDResidentDeviceManagerContext, HMDPrimaryResidentDiscoveryManagerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDPrimaryResidentElectionAddOnDelegate, HMDModernTransportDeviceReachabilityObserverListener, NSSecureCoding, HMDResidentDeviceManager, OS_dispatch_queue, HMDResidentDeviceManagerRoarBackingStore, HMDResidentDeviceManagerRoarDataSource, HMDResidentDeviceManagerDelegate, HMDPrimaryResidentDiscoveryManager;


#import "HMDAppleAccountManager.h"
#import "HMDDevice.h"
#import "HMDResidentDevice.h"
#import "HMDRemoteDeviceMonitor.h"
#import "HMDHome.h"
#import "HMDPrimaryElectionCoordinationAddOn.h"
#import "HMDMessageDispatcher.h"
#import "HMDModernTransportDeviceReachabilityObserver.h"

@interface HMDResidentDeviceManagerRoar : HMFObject <HMDResidentDeviceManagerContext, HMDPrimaryResidentDiscoveryManagerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDPrimaryResidentElectionAddOnDelegate, HMDModernTransportDeviceReachabilityObserverListener, NSSecureCoding, HMDResidentDeviceManager>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
}


@property (getter=isActingAsResident) BOOL actingAsResident; // ivar: _actingAsResident
@property (readonly) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (readonly) NSInteger atHomeLevel;
@property (readonly, copy) NSArray *availableResidentDevices;
@property (readonly) NSObject<HMDResidentDeviceManagerRoarBackingStore> *backingStore; // ivar: _backingStore
@property (readonly) HMFFuture *cloudReady;
@property (readonly, nonatomic) HMDDevice *confirmedPrimaryResidentDevice;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) HMDResidentDevice *currentResidentDevice;
@property (readonly) NSObject<HMDResidentDeviceManagerRoarDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDResidentDeviceManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain) HMDRemoteDeviceMonitor *deviceMonitor; // ivar: _deviceMonitor
@property (readonly, nonatomic) BOOL hasAnyResident;
@property (readonly, nonatomic) BOOL hasTrustZoneCapableResident;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) BOOL isOwnerUser;
@property (readonly, nonatomic) BOOL isResidentElectionV2Enabled;
@property (readonly) BOOL isResidentEnabled;
@property (readonly) BOOL isResidentSupported;
@property (retain) HMDPrimaryElectionCoordinationAddOn *localNetworkElection; // ivar: _localNetworkElection
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<HMDPrimaryResidentDiscoveryManager> *primaryDiscoveryManager; // ivar: _primaryDiscoveryManager
@property (readonly, nonatomic) NSHashTable *primaryDiscoveryRequesters; // ivar: _primaryDiscoveryRequesters
@property (readonly) HMDResidentDevice *primaryResidentDevice;
@property (readonly) NSUUID *primaryResidentGenerationID; // ivar: _primaryResidentGenerationID
@property (readonly) NSUUID *primaryResidentUUID; // ivar: _primaryResidentUUID
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver; // ivar: _reachabilityObserver
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable; // ivar: _residentAvailable
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported; // ivar: _residentSupported
@property (readonly) Class superclass;


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)shortDescription;
-(BOOL)_updatePrimaryResidentGenerationID:(id)arg0 ;
-(BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)foundNewPrimaryResident:(id)arg0 generationID:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)ourSelf;
-(id)residentDeviceForDevice:(id)arg0 ;
-(id)residentWithUUID:(id)arg0 ;
-(id)shortDescription;
-(void)_addResidentDevice:(id)arg0 ;
-(void)_checkPrimaryResidentDeviceRemoved:(id)arg0 currentPrimary:(id)arg1 ;
-(void)_configureResidentSupported;
-(void)_discoverPrimaryResidentForRequester:(id)arg0 ;
-(void)_handleCloudResidentChange:(id)arg0 ;
-(void)_handleCloudZoneReadyNotification:(id)arg0 ;
-(void)_handlePrimaryResident:(id)arg0 isReachable:(BOOL)arg1 ;
-(void)_handlePrimaryResidentDiscoveryRequest:(id)arg0 ;
-(void)_handlePrimaryResidentDiscoveryXPCRequest:(id)arg0 ;
-(void)_handleRemoteDeviceIsNotReachable:(id)arg0 ;
-(void)_handleRemoteDeviceIsReachable:(id)arg0 ;
-(void)_handleResidentDeviceUpdateEnabled:(id)arg0 ;
-(void)_handleUpdatedPrimaryFromLeader:(id)arg0 ;
-(void)_handleUpdatedPrimaryResidentDevice:(id)arg0 previousPrimaryResident:(id)arg1 generationID:(id)arg2 ;
-(void)_joinLocalMesh;
-(void)_notifyUpdatedGenerationIDWithPrimaryResident:(id)arg0 ;
-(void)_registerForMessages;
-(void)_registerForNotifications;
-(void)_removeResidentDevice:(id)arg0 ;
-(void)_run;
-(void)_sendResidentDeviceNotificationWithName:(id)arg0 forResidentDevice:(id)arg1 ;
-(void)_setResident:(id)arg0 reachableOverIDS:(BOOL)arg1 andNotify:(BOOL)arg2 ;
-(void)_setupSessionWithPrimaryResidentDevice;
-(void)_startLocalNetworkElection;
-(void)_stopLocalNetworkElection;
-(void)_teardownSessionWithPrimaryResidentDevice;
-(void)_updateReachability:(BOOL)arg0 forResidentDevice:(id)arg1 ;
-(void)_updateReachability:(BOOL)arg0 forResidentDevices:(id)arg1 ;
-(void)_updateReachabilityFromWorkingStoreExceptResident:(id)arg0 ;
-(void)_updateResidentAvailability:(BOOL)arg0 ;
-(void)_updateResidentIDSReachability:(BOOL)arg0 withUpdatedDevice:(id)arg1 ;
-(void)_updateResidentReachabilityWithResidents:(id)arg0 ;
-(void)accountOrDeviceDidUpdate:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)atHomeLevelChanged:(NSInteger)arg0 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)confirmAsResident;
-(void)confirmOnAvailability;
-(void)confirmWithCompletionHandler:(id)arg0 ;
-(void)discoverPrimaryResidentForRequester:(id)arg0 ;
-(void)discoveryManager:(id)arg0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg1 primaryResidentGenerationID:(id)arg2 error:(id)arg3 ;
-(void)electResidentDevice:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCurrentDeviceChanged:(id)arg0 ;
-(void)handlePrimaryResidentDiscovered:(id)arg0 primaryResidentGenerationID:(id)arg1 ;
-(void)invalidate;
-(void)modernTransportDeviceReachabilityObserverDidUpdate:(id)arg0 isReachable:(BOOL)arg1 ;
-(void)notifyClientsOfUpdatedResidentDevice:(id)arg0 ;
-(void)notifyResidentAvailable:(BOOL)arg0 ;
-(void)notifyUpdatedPrimaryResident:(id)arg0 previousPrimaryResident:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didElectPrimaryResident:(id)arg1 confirmed:(BOOL)arg2 electionLogEvent:(id)arg3 ;
-(void)primaryElectionAddOn:(id)arg0 didFailToElectWithError:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didReceivePrimaryResidentUUIDFromLeader:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didUpdateActiveNodes:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didUpdateResidentDevice:(id)arg1 ;
-(void)removeResidentDevice:(id)arg0 ;
-(void)run;
-(void)sawGenerationID:(id)arg0 forDevice:(id)arg1 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updatePrimaryResidentWithUUID:(id)arg0 actions:(id)arg1 ;
-(void)updateResidentAvailability;


@end


#endif