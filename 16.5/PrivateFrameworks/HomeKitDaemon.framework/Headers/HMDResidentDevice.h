// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTDEVICE_H
#define HMDRESIDENTDEVICE_H

@class HMFObject, HMResidentCapabilities, NSString, NSUUID, NSData;
@protocol HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding, HMResidentCapabilities, HMDResidentDeviceManager;


#import "HMDDeviceController.h"
#import "HMDDevice.h"
#import "HMDHome.h"
#import "HMDDeviceAddress.h"

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    HMDDeviceController *_deviceController;
    BOOL _confirmed;
}


@property (nonatomic) NSInteger batteryState; // ivar: _batteryState
@property (readonly, nonatomic) NSObject<HMResidentCapabilities> *capabilities;
@property (readonly) HMResidentCapabilities *capabilitiesInternal; // ivar: _capabilitiesInternal
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDDevice *device; // ivar: _device
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger legacyResidentCapabilities;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // ivar: _lowBattery
@property (readonly) HMDDeviceAddress *messageAddress; // ivar: _messageAddress
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSData *rawCapabilities; // ivar: _rawCapabilities
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (nonatomic, getter=isReachableByIDS) BOOL reachableByIDS; // ivar: _reachableByIDS
@property (weak, nonatomic) NSObject<HMDResidentDeviceManager> *residentDeviceManager; // ivar: _residentDeviceManager
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsMediaSystem;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;
@property (readonly, nonatomic) BOOL supportsShortcutActions;


+(BOOL)supportsSecureCoding;
+(id)batteryStateAsString:(NSInteger)arg0 ;
+(id)deriveUUIDFromHomeUUID:(id)arg0 deviceUUID:(id)arg1 ;
+(id)logCategory;
+(id)shortDescription;
-(BOOL)_updateMessageAddress:(id)arg0 ;
-(BOOL)_updateRawCapabilities:(id)arg0 ;
-(BOOL)isDeviceEquivalentToDeviceAddress:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 home:(id)arg1 ;
-(id)initWithDevice:(id)arg0 home:(id)arg1 name:(id)arg2 rawCapabilities:(id)arg3 messageAddress:(id)arg4 ;
-(id)initWithDevice:(id)arg0 identifier:(id)arg1 ;
-(id)initWithDeviceController:(id)arg0 identifier:(id)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(id)logIdentifier;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)privateDescription;
-(id)runtimeState;
-(id)shortDescription;
-(void)__deviceUpdated:(id)arg0 ;
-(void)_handleResidentDeviceUpdateConfirmed:(BOOL)arg0 ;
-(void)_handleResidentDeviceUpdateEnabled:(BOOL)arg0 ;
-(void)_residentDeviceModelUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)configureWithHome:(id)arg0 ;
-(void)dealloc;
-(void)deviceController:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif