// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRESIDENTDEVICE_H
#define HMDRESIDENTDEVICE_H

@class HMFObject, HMFUnfairLock, NSString, NSUUID;
@protocol HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding, HMDResidentDeviceManager;


#import "HMDDeviceController.h"
#import "HMDDevice.h"
#import "HMDHome.h"

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding>

 {
    HMFUnfairLock *_lock;
    HMDDeviceController *_deviceController;
    BOOL _confirmed;
}


@property (nonatomic) NSInteger batteryState; // ivar: _batteryState
@property (readonly, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDDevice *device; // ivar: _device
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // ivar: _lowBattery
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (weak, nonatomic) NSObject<HMDResidentDeviceManager> *residentDeviceManager; // ivar: _residentDeviceManager
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;
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
-(BOOL)isEqual:(id)arg0 ;
-(id)__initWithDeviceController:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)logIdentifier;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
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