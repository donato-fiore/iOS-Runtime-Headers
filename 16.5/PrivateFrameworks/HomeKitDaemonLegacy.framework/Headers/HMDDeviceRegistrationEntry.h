// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICEREGISTRATIONENTRY_H
#define HMDDEVICEREGISTRATIONENTRY_H

@class HMFObject, NSArray;


#import "HMDDevice.h"

@interface HMDDeviceRegistrationEntry : HMFObject

@property (readonly, nonatomic) NSArray *accessoryUUIDList; // ivar: _accessoryUUIDList
@property (readonly, nonatomic) HMDDevice *device; // ivar: _device


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDevice:(id)arg0 accessoryList:(id)arg1 ;


@end


#endif