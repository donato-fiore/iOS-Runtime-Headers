// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUNASSOCIATEDAPPLEHOMEPODACCESSORY_H
#define HMDUNASSOCIATEDAPPLEHOMEPODACCESSORY_H



#import "HMDUnassociatedAppleMediaAccessory.h"

@interface HMDUnassociatedAppleHomePodAccessory : HMDUnassociatedAppleMediaAccessory



-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 productColor:(NSInteger)arg3 idsIdentifierString:(id)arg4 requiredPairingCapabilities:(NSUInteger)arg5 minimumPairingSoftware:(id)arg6 rawAccessoryCapabilities:(id)arg7 rawResidentCapabilities:(id)arg8 messageDispatcher:(id)arg9 ;
-(id)modelForChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;


@end


#endif