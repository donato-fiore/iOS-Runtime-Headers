// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEDEVICEMESSAGEDESTINATION_H
#define HMDREMOTEDEVICEMESSAGEDESTINATION_H



#import "HMDRemoteMessageDestination.h"
#import "HMDDevice.h"
#import "HMDDeviceHandle.h"

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (copy, nonatomic) HMDDeviceHandle *preferredHandle; // ivar: _preferredHandle


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 device:(id)arg1 ;
-(id)remoteDestinationString;
-(id)shortDescription;


@end


#endif