// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMCREDENTIALSCEPDECLARATION_SCEPSUBJECTALTNAME_H
#define CEMCREDENTIALSCEPDECLARATION_SCEPSUBJECTALTNAME_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDNSName; // ivar: _payloadDNSName
@property (copy, nonatomic) NSString *payloadNtPrincipalName; // ivar: _payloadNtPrincipalName
@property (copy, nonatomic) NSString *payloadRfc822Name; // ivar: _payloadRfc822Name
@property (copy, nonatomic) NSString *payloadUniformResourceIdentifier; // ivar: _payloadUniformResourceIdentifier


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRfc822Name:(id)arg0 withDNSName:(id)arg1 withUniformResourceIdentifier:(id)arg2 withNtPrincipalName:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif