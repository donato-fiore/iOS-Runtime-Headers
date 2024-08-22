// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEACCESSORYPAIRINGHOMESTATE_H
#define HMDAPPLEACCESSORYPAIRINGHOMESTATE_H

@class HMFObject, HMBCloudZoneID, NSString, NSUUID, HMSoftwareUpdateDescriptor;
@protocol NSSecureCoding;


#import "HMDUnassociatedAppleMediaAccessory.h"
#import "HMDDevice.h"

@interface HMDAppleAccessoryPairingHomeState : HMFObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMDUnassociatedAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID; // ivar: _cloudZoneID
@property (retain, nonatomic) NSString *configurationAppID; // ivar: _configurationAppID
@property (retain, nonatomic) HMDDevice *device; // ivar: _device
@property (retain, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (retain, nonatomic) HMSoftwareUpdateDescriptor *lastPostedSoftwareUpdateDescriptor; // ivar: _lastPostedSoftwareUpdateDescriptor
@property (nonatomic) NSUInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCloudZoneID:(id)arg0 accessory:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif