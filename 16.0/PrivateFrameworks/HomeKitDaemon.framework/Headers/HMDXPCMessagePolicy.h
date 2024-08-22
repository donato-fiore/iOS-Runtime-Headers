// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCMESSAGEPOLICY_H
#define HMDXPCMESSAGEPOLICY_H

@class HMFMessagePolicy;



@interface HMDXPCMessagePolicy : HMFMessagePolicy

@property (readonly) NSUInteger entitlements; // ivar: _entitlements


+(id)defaultPolicy;
+(id)policyWithEntitlements:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__initWithEntitlements:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif