// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYADVERTISEMENT_H
#define HMDAPPLEMEDIAACCESSORYADVERTISEMENT_H



#import "HMDMediaAccessoryAdvertisement.h"
#import "HMDDevice.h"

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement

@property (readonly) HMDDevice *device; // ivar: _device


-(id)description;
-(id)initWithOutputDevice:(id)arg0 device:(id)arg1 ;


@end


#endif