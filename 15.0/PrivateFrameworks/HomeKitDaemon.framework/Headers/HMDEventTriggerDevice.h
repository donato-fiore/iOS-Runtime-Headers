// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTTRIGGERDEVICE_H
#define HMDEVENTTRIGGERDEVICE_H

@class HMFObject;


#import "HMDDevice.h"

@interface HMDEventTriggerDevice : HMFObject

@property (readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice; // ivar: _currentDevice
@property (readonly, nonatomic) HMDDevice *device; // ivar: _device


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCurrentDeviceForHome:(id)arg0 ;
-(id)initWithDevice:(id)arg0 forHome:(id)arg1 ;


@end


#endif