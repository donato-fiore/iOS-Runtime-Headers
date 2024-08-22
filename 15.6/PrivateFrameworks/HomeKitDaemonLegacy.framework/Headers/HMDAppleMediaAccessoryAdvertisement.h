// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYADVERTISEMENT_H
#define HMDAPPLEMEDIAACCESSORYADVERTISEMENT_H



#import "HMDMediaAccessoryAdvertisement.h"
#import "HMDDevice.h"

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement

@property (readonly) HMDDevice *device; // ivar: _device


-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 device:(id)arg3 ;
-(id)initWithOutputDevice:(id)arg0 device:(id)arg1 ;


@end


#endif