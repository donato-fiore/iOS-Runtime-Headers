// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDXPCBACKGROUNDMESSAGEPOLICY_H
#define HMDXPCBACKGROUNDMESSAGEPOLICY_H

@class HMFMessagePolicy;



@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) BOOL requiresEntitlement; // ivar: _requiresEntitlement


+(id)defaultPolicy;
+(id)policyWithEntitlementRequirement:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__initWithEntitlementRequirement:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif