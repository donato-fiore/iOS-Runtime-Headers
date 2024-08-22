// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMACCOUNTLDAPDECLARATION_H
#define CEMACCOUNTLDAPDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAccountLDAPDeclaration_CommunicationServiceRules.h"

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // ivar: _payloadCommunicationServiceRules
@property (copy, nonatomic) NSString *payloadLDAPAccountDescription; // ivar: _payloadLDAPAccountDescription
@property (copy, nonatomic) NSString *payloadLDAPAccountHostName; // ivar: _payloadLDAPAccountHostName
@property (copy, nonatomic) NSNumber *payloadLDAPAccountUseSSL; // ivar: _payloadLDAPAccountUseSSL
@property (copy, nonatomic) NSString *payloadLDAPCredentials; // ivar: _payloadLDAPCredentials
@property (copy, nonatomic) NSArray *payloadLDAPSearchSettings; // ivar: _payloadLDAPSearchSettings
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withLDAPAccountHostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withLDAPAccountDescription:(id)arg1 withLDAPAccountHostName:(id)arg2 withLDAPAccountUseSSL:(id)arg3 withLDAPSearchSettings:(id)arg4 withCommunicationServiceRules:(id)arg5 withLDAPCredentials:(id)arg6 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif