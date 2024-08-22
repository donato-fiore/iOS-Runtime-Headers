// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACONNECTIONPOLICY_H
#define SACONNECTIONPOLICY_H

@class NSString, NSNumber, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAConnectionPolicy : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *disableMPTCP;
@property (copy, nonatomic) NSNumber *enableOptimisticDNS;
@property (copy, nonatomic) NSNumber *enableTLS13;
@property (copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property (copy, nonatomic) NSNumber *enableTcpFastOpen;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSNumber *globalTimeout;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *mptcpFallbackPort;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSArray *routes;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *timeToLive;


+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif