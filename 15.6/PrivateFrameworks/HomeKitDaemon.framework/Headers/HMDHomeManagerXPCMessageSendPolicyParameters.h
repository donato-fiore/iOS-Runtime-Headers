// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMANAGERXPCMESSAGESENDPOLICYPARAMETERS_H
#define HMDHOMEMANAGERXPCMESSAGESENDPOLICYPARAMETERS_H

@protocol NSCopying, NSMutableCopying;


#import "HMDXPCMessageSendPolicyParameters.h"

@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>



@property (readonly, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntitlements:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)signature;


@end


#endif