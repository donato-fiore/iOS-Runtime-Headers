// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYBROWSERXPCMESSAGESENDPOLICYPARAMETERS_H
#define HMDACCESSORYBROWSERXPCMESSAGESENDPOLICYPARAMETERS_H



#import "HMDXPCMessageSendPolicyParameters.h"

@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters

@property (nonatomic, getter=isBrowsing) BOOL browsing; // ivar: _browsing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntitlements:(NSUInteger)arg0 browsing:(BOOL)arg1 ;
-(id)signature;


@end


#endif