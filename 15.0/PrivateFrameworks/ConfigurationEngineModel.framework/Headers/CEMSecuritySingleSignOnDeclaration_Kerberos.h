// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSECURITYSINGLESIGNONDECLARATION_KERBEROS_H
#define CEMSECURITYSINGLESIGNONDECLARATION_KERBEROS_H

@class NSArray, NSString;


#import "CEMPayloadBase.h"

@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches; // ivar: _payloadAppIdentifierMatches
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSString *payloadPrincipalName; // ivar: _payloadPrincipalName
@property (copy, nonatomic) NSString *payloadRealm; // ivar: _payloadRealm
@property (copy, nonatomic) NSArray *payloadURLPrefixMatches; // ivar: _payloadURLPrefixMatches


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithRealm:(id)arg0 ;
+(id)buildWithPrincipalName:(id)arg0 withPayloadCertificateUUID:(id)arg1 withRealm:(id)arg2 withURLPrefixMatches:(id)arg3 withAppIdentifierMatches:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif