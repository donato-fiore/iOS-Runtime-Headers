// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPENDINGNEWACCESSORYSETUPCONTEXT_H
#define HMDPENDINGNEWACCESSORYSETUPCONTEXT_H

@class HMFObject, HMFTimer;


#import "HMDAccessory.h"
#import "HMDDevice.h"

@interface HMDPendingNewAccessorySetupContext : HMFObject

@property (readonly) HMDAccessory *accessory; // ivar: _accessory
@property (readonly) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly) HMFTimer *timer; // ivar: _timer


-(id)initWithAccessory:(id)arg0 remoteDevice:(id)arg1 timer:(id)arg2 ;


@end


#endif