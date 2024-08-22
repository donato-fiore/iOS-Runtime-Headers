// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCMESSAGESENDPOLICYPARAMETERS_H
#define HMDXPCMESSAGESENDPOLICYPARAMETERS_H

@class HMFObject, NSString;



@interface HMDXPCMessageSendPolicyParameters : HMFObject

@property (readonly, nonatomic) NSUInteger entitlements; // ivar: _entitlements
@property (readonly, copy) NSString *signature;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntitlements:(NSUInteger)arg0 ;


@end


#endif