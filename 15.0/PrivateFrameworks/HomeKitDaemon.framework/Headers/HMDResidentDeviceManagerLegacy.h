// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRESIDENTDEVICEMANAGERLEGACY_H
#define HMDRESIDENTDEVICEMANAGERLEGACY_H

@class HMFObject, NSMutableSet, NSArray, NSString, NSSet, NSUUID, NSNotificationCenter;
@protocol HMDResidentDeviceManagerContext, HMDPrimaryResidentElectionAddOnDelegate, NSSecureCoding, HMDResidentDeviceManager, HMFLocking, OS_dispatch_queue, HMDResidentDeviceManagerDelegate;


#import "HMDResidentDevice.h"
#import "HMDHome.h"
#import "HMDPrimaryElectionLegacyAddOn.h"
#import "HMDMessageDispatcher.h"

@interface HMDResidentDeviceManagerLegacy : HMFObject <HMDResidentDeviceManagerContext, HMDPrimaryResidentElectionAddOnDelegate, NSSecureCoding, HMDResidentDeviceManager>

 {
    id<HMFLocking> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    BOOL _verifyCurrentResidentDevice;
    BOOL _fixupRemoteResidentDevice;
}


@property (readonly) NSInteger atHomeLevel;
@property (readonly, copy) NSArray *availableResidentDevices;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) HMDResidentDevice *currentResidentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDResidentDeviceManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=hasFirstHomeZoneFetch) BOOL firstHomeZoneFetch; // ivar: _firstHomeZoneFetch
@property (nonatomic, getter=hasFirstLegacyFetch) BOOL firstLegacyFetch; // ivar: _firstLegacyFetch
@property (readonly, nonatomic) BOOL hasTrustZoneCapableResident;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) BOOL isOwnerUser;
@property (readonly) BOOL isResidentEnabled;
@property (readonly) BOOL isResidentSupported;
@property (retain) HMDPrimaryElectionLegacyAddOn *legacyElection; // ivar: _legacyElection
@property (readonly) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDResidentDevice *primaryResidentDevice;
@property (readonly) NSUUID *primaryResidentUUID; // ivar: _primaryResidentUUID
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable; // ivar: _residentAvailable
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported; // ivar: _residentSupported
@property (readonly) Class superclass;


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationCenter:(id)arg0 ;
-(id)logIdentifier;
-(id)ourSelf;
-(id)residentDeviceForDevice:(id)arg0 ;
-(id)residentWithUUID:(id)arg0 ;
-(id)shortDescription;
-(void)__currentDeviceUpdated:(id)arg0 completion:(id)arg1 ;
-(void)_addResidentDevice:(id)arg0 ;
-(void)_addResidentDeviceWithModel:(id)arg0 message:(id)arg1 ;
-(void)_electResidentDevice;
-(void)_fixUpRemoteResidentDevice:(id)arg0 existingResidentDevice:(id)arg1 ;
-(void)_handleCloudZoneReadyNotification:(id)arg0 ;
-(void)_handleResidentDeviceUpdateEnabled:(id)arg0 ;
-(void)_registerForMessages;
-(void)_removeResidentDevice:(id)arg0 ;
-(void)_removeResidentDevice:(id)arg0 reason:(id)arg1 ;
-(void)_removeResidentDeviceWithModel:(id)arg0 message:(id)arg1 ;
-(void)_run;
-(void)_sendResidentDeviceNotificationWithName:(id)arg0 forResidentDevice:(id)arg1 ;
-(void)_setupSessionWithPrimaryResidentDevice;
-(void)_teardownSessionWithPrimaryResidentDevice;
-(void)_updateReachability:(BOOL)arg0 forResidentDevice:(id)arg1 ;
-(void)_updateResidentAvailability;
-(void)_verifyCurrentResidentDevice;
-(void)addDataSource:(id)arg0 ;
-(void)atHomeLevelChanged:(NSInteger)arg0 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)confirmAsResident;
-(void)confirmOnAvailability;
-(void)confirmWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)electResidentDevice;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCurrentDeviceChanged:(id)arg0 ;
-(void)handleCurrentDeviceUpdated:(id)arg0 ;
-(void)handleHomeUpdatedAccessories:(id)arg0 ;
-(void)handleResidentDeviceIsNotReachable:(id)arg0 ;
-(void)handleResidentDeviceIsReachable:(id)arg0 ;
-(void)notifyClientsOfUpdatedResidentDevice:(id)arg0 ;
-(void)notifyResidentAvailable:(BOOL)arg0 ;
-(void)notifyUpdatedPrimaryResident:(id)arg0 ;
-(void)primaryElectionAddOn:(id)arg0 didElectPrimaryResident:(id)arg1 confirmed:(BOOL)arg2 ;
-(void)primaryElectionAddOn:(id)arg0 didFailToElectWithError:(id)arg1 ;
-(void)primaryElectionAddOn:(id)arg0 didUpdateResidentDevice:(id)arg1 ;
-(void)removeResidentDevice:(id)arg0 ;
-(void)run;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updatePrimaryResidentWithUUID:(id)arg0 actions:(id)arg1 ;
-(void)updateResidentAvailability;


@end


#endif