// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYBROWSERXPCMESSAGESENDPOLICY_H
#define HMDACCESSORYBROWSERXPCMESSAGESENDPOLICY_H



#import "HMDXPCMessageSendPolicy.h"

@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) NSUInteger requiredEntitlements; // ivar: _requiredEntitlements


-(BOOL)canSendWithPolicyParameters:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRequiredEntitlements:(NSUInteger)arg0 ;


@end


#endif