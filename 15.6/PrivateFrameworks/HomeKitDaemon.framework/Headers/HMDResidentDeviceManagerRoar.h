// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTDEVICEMANAGERROAR_H
#define HMDRESIDENTDEVICEMANAGERROAR_H

@class HMFObject, NSMutableSet, NSArray, HMFFuture, NSString, NSSet, NSUUID, NSNotificationCenter;
@protocol HMDResidentDeviceManagerContext, HMDModernTransportDeviceReachabilityObserverListener, HMDPrimaryResidentElectionAddOnDelegate, NSSecureCoding, HMDResidentDeviceManager, HMFLocking, OS_dispatch_queue, HMDResidentDeviceManagerDelegate;


#import "HMDDeviceCapabilities.h"
#import "HMDResidentDevice.h"
#import "HMDHome.h"
#import "HMDPrimaryElectionCoordinationAddOn.h"
#import "HMDMessageDispatcher.h"
#import "HMDPrimaryResidentDiscoveryOperation.h"
#import "HMDModernTransportDeviceReachabilityObserver.h"

@interface HMDResidentDeviceManagerRoar : HMFObject <HMDResidentDeviceManagerContext, HMDModernTransportDeviceReachabilityObserverListener, HMDPrimaryResidentElectionAddOnDelegate, NSSecureCoding, HMDResidentDeviceManager>

 {
    id<HMFLocking> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
}


@property (getter=isActingAsResident) BOOL actingAsResident; // ivar: _actingAsResident
@property (readonly) NSInteger atHomeLevel;
@property (readonly, copy) NSArray *availableResidentDevices;
@property (readonly) HMFFuture *cloudReady;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly) HMDDeviceCapabilities *currentDeviceCapabilities; // ivar: _currentDeviceCapabilities
@property (readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) HMDResidentDevice *currentResidentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDResidentDeviceManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTrustZoneCapableResident;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) BOOL isOwnerUser;
@property (readonly, nonatomic) BOOL isResidentElectionV2Enabled;
@property (readonly) BOOL isResidentEnabled;
@property (readonly) BOOL isResidentSupported;
@property (readonly) HMDPrimaryElectionCoordinationAddOn *localNetworkElection; // ivar: _localNetworkElection
@property (readonly) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) HMDPrimaryResidentDiscoveryOperation *primaryDiscoveryOperation; // ivar: _primaryDiscoveryOperation
@property (readonly) HMDResidentDevice *primaryResidentDevice;
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
-(id)_discoverPrimaryResident;
-(id)_findExpectedResidents;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)discoverPrimaryResident;
-(id)dumpState;
-(id)foundNewPrimaryResident:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationCenter:(id)arg0 deviceCapabilities:(id)arg1 electionAddOnFactory:(id)arg2 ;
-(id)logIdentifier;
-(id)ourSelf;
-(id)residentDeviceForDevice:(id)arg0 ;
-(id)residentWithUUID:(id)arg0 ;
-(id)shortDescription;
-(void)_addResidentDevice:(id)arg0 ;
-(void)_configureResidentSupported;
-(void)_handleCloudResidentChange:(id)arg0 ;
-(void)_handleCloudZoneReadyNotification:(id)arg0 ;
-(void)_handlePrimaryResidentDiscoveryRequest:(id)arg0 ;
-(void)_handlePrimaryResidentDiscoveryXPCRequest:(id)arg0 ;
-(void)_handleResidentDeviceUpdateEnabled:(id)arg0 ;
-(void)_handleUpdatedPrimaryResidentDevice:(id)arg0 ;
-(void)_joinLocalMesh;
-(void)_registerForMessages;
-(void)_registerForNotifications;
-(void)_removeResidentDevice:(id)arg0 ;
-(void)_run;
-(void)_sendResidentDeviceNotificationWithName:(id)arg0 forResidentDevice:(id)arg1 ;
-(void)_setupSessionWithPrimaryResidentDevice;
-(void)_teardownSessionWithPrimaryResidentDevice;
-(void)_updateReachability:(BOOL)arg0 forResidentDevice:(id)arg1 ;
-(void)_updateResidentAvailability;
-(void)_updateResidentReachabilityWithResidents:(id)arg0 ;
-(void)accountOrDeviceDidUpdate:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)atHomeLevelChanged:(NSInteger)arg0 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)confirmAsResident;
-(void)confirmOnAvailability;
-(void)confirmWithCompletionHandler:(id)arg0 ;
-(void)electResidentDevice:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCurrentDeviceChanged:(id)arg0 ;
-(void)modernTransportDeviceReachabilityObserverDidUpdate:(id)arg0 isReachable:(BOOL)arg1 ;
-(void)notifyClientsOfUpdatedResidentDevice:(id)arg0 ;
-(void)notifyResidentAvailable:(BOOL)arg0 ;
-(void)notifyUpdatedPrimaryResident:(id)arg0 previousPrimaryResident:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didElectPrimaryResident:(id)arg1 confirmed:(BOOL)arg2 electionLogEvent:(id)arg3 ;
-(void)primaryElectionAddOn:(id)arg0 didFailToElectWithError:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didUpdateActiveNodes:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didUpdateResidentDevice:(id)arg1 ;
-(void)removeResidentDevice:(id)arg0 ;
-(void)run;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updatePrimaryResidentWithUUID:(id)arg0 actions:(id)arg1 ;
-(void)updateResidentAvailability;


@end


#endif