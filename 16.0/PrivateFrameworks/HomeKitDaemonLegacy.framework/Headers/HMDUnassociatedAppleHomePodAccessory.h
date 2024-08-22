// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUNASSOCIATEDAPPLEHOMEPODACCESSORY_H
#define HMDUNASSOCIATEDAPPLEHOMEPODACCESSORY_H



#import "HMDUnassociatedAppleMediaAccessory.h"

@interface HMDUnassociatedAppleHomePodAccessory : HMDUnassociatedAppleMediaAccessory



-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 productColor:(NSInteger)arg3 requiredPairingCapabilities:(NSUInteger)arg4 minimumPairingSoftware:(id)arg5 messageDispatcher:(id)arg6 ;
-(id)modelForChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;


@end


#endif