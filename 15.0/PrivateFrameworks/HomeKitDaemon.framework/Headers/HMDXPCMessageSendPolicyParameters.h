// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCMESSAGESENDPOLICYPARAMETERS_H
#define HMDXPCMESSAGESENDPOLICYPARAMETERS_H


#import <Foundation/Foundation.h>


@interface HMDXPCMessageSendPolicyParameters : NSObject

@property (readonly, nonatomic) NSUInteger entitlements; // ivar: _entitlements


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEntitlements:(NSUInteger)arg0 ;
-(id)signature;


@end


#endif