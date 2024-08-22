// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMACCOUNTCARDDAVDECLARATION_H
#define CEMACCOUNTCARDDAVDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAccountCardDAVDeclaration_CommunicationServiceRules.h"

@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCardDAVAccountDescription; // ivar: _payloadCardDAVAccountDescription
@property (copy, nonatomic) NSString *payloadCardDAVCredentials; // ivar: _payloadCardDAVCredentials
@property (copy, nonatomic) NSString *payloadCardDAVHostName; // ivar: _payloadCardDAVHostName
@property (copy, nonatomic) NSNumber *payloadCardDAVPort; // ivar: _payloadCardDAVPort
@property (copy, nonatomic) NSString *payloadCardDAVPrincipalURL; // ivar: _payloadCardDAVPrincipalURL
@property (copy, nonatomic) NSNumber *payloadCardDAVUseSSL; // ivar: _payloadCardDAVUseSSL
@property (copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // ivar: _payloadCommunicationServiceRules
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withCardDAVHostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withCardDAVAccountDescription:(id)arg1 withCardDAVHostName:(id)arg2 withCardDAVPrincipalURL:(id)arg3 withCardDAVUseSSL:(id)arg4 withCardDAVPort:(id)arg5 withCommunicationServiceRules:(id)arg6 withCardDAVCredentials:(id)arg7 ;
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