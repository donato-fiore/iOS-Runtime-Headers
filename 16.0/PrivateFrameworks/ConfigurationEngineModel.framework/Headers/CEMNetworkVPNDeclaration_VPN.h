// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_VPN_H
#define CEMNETWORKVPNDECLARATION_VPN_H

@class NSString, NSNumber, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAuthName; // ivar: _payloadAuthName
@property (copy, nonatomic) NSString *payloadAuthPassword; // ivar: _payloadAuthPassword
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // ivar: _payloadDisconnectOnIdle
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // ivar: _payloadDisconnectOnIdleTimer
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled; // ivar: _payloadOnDemandEnabled
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways; // ivar: _payloadOnDemandMatchDomainsAlways
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever; // ivar: _payloadOnDemandMatchDomainsNever
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry; // ivar: _payloadOnDemandMatchDomainsOnRetry
@property (copy, nonatomic) NSArray *payloadOnDemandRules; // ivar: _payloadOnDemandRules
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier; // ivar: _payloadProviderBundleIdentifier
@property (copy, nonatomic) NSString *payloadRemoteAddress; // ivar: _payloadRemoteAddress


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAuthName:(id)arg0 withAuthPassword:(id)arg1 withAuthenticationMethod:(id)arg2 withPayloadCertificateUUID:(id)arg3 withOnDemandEnabled:(id)arg4 withOnDemandMatchDomainsAlways:(id)arg5 withOnDemandMatchDomainsNever:(id)arg6 withOnDemandMatchDomainsOnRetry:(id)arg7 withOnDemandRules:(id)arg8 withDisconnectOnIdle:(id)arg9 withDisconnectOnIdleTimer:(id)arg10 withRemoteAddress:(id)arg11 withPassword:(id)arg12 withProviderBundleIdentifier:(id)arg13 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif