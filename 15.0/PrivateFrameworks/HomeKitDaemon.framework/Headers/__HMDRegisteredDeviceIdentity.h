// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __HMDREGISTEREDDEVICEIDENTITY_H
#define __HMDREGISTEREDDEVICEIDENTITY_H

@class HMDRegisteredIdentity;


#import "HMDDevice.h"

@interface __HMDRegisteredDeviceIdentity : HMDRegisteredIdentity

@property (readonly) HMDDevice *device; // ivar: _device


-(id)initWithIdentity:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 device:(id)arg1 ;


@end


#endif