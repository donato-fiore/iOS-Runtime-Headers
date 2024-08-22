// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMANAGERXPCMESSAGESENDPOLICY_H
#define HMDHOMEMANAGERXPCMESSAGESENDPOLICY_H



#import "HMDXPCMessageSendPolicy.h"

@interface HMDHomeManagerXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSUInteger entitlements; // ivar: _entitlements
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(BOOL)canSendWithPolicyParameters:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntitlements:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)initWithEntitlements:(NSUInteger)arg0 options:(NSUInteger)arg1 active:(BOOL)arg2 ;


@end


#endif