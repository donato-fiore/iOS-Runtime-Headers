// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKVPNDECLARATION_IPSEC_H
#define CEMNETWORKVPNDECLARATION_IPSEC_H

@class NSString, NSNumber, NSArray, NSData;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // ivar: _payloadDisconnectOnIdle
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // ivar: _payloadDisconnectOnIdleTimer
@property (copy, nonatomic) NSString *payloadLocalIdentifier; // ivar: _payloadLocalIdentifier
@property (copy, nonatomic) NSString *payloadLocalIdentifierType; // ivar: _payloadLocalIdentifierType
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled; // ivar: _payloadOnDemandEnabled
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways; // ivar: _payloadOnDemandMatchDomainsAlways
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever; // ivar: _payloadOnDemandMatchDomainsNever
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry; // ivar: _payloadOnDemandMatchDomainsOnRetry
@property (copy, nonatomic) NSArray *payloadOnDemandRules; // ivar: _payloadOnDemandRules
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSNumber *payloadPromptForVPNPIN; // ivar: _payloadPromptForVPNPIN
@property (copy, nonatomic) NSString *payloadRemoteAddress; // ivar: _payloadRemoteAddress
@property (copy, nonatomic) NSData *payloadSharedSecret; // ivar: _payloadSharedSecret
@property (copy, nonatomic) NSNumber *payloadXAuthEnabled; // ivar: _payloadXAuthEnabled
@property (copy, nonatomic) NSString *payloadXAuthName; // ivar: _payloadXAuthName
@property (copy, nonatomic) NSString *payloadXAuthPassword; // ivar: _payloadXAuthPassword
@property (copy, nonatomic) NSString *payloadXAuthPasswordEncryption; // ivar: _payloadXAuthPasswordEncryption


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRemoteAddress:(id)arg0 withAuthenticationMethod:(id)arg1 withXAuthName:(id)arg2 withXAuthPassword:(id)arg3 withXAuthEnabled:(id)arg4 withXAuthPasswordEncryption:(id)arg5 withLocalIdentifier:(id)arg6 withLocalIdentifierType:(id)arg7 withSharedSecret:(id)arg8 withPayloadCertificateUUID:(id)arg9 withPromptForVPNPIN:(id)arg10 withOnDemandEnabled:(id)arg11 withOnDemandMatchDomainsAlways:(id)arg12 withOnDemandMatchDomainsNever:(id)arg13 withOnDemandMatchDomainsOnRetry:(id)arg14 withOnDemandRules:(id)arg15 withDisconnectOnIdle:(id)arg16 withDisconnectOnIdleTimer:(id)arg17 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif