// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACCOUNTGOOGLEDECLARATION_H
#define CEMACCOUNTGOOGLEDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAccountGoogleDeclaration_CommunicationServiceRules.h"

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAccountDescription; // ivar: _payloadAccountDescription
@property (copy, nonatomic) NSString *payloadAccountName; // ivar: _payloadAccountName
@property (copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // ivar: _payloadCommunicationServiceRules
@property (copy, nonatomic) NSString *payloadEmailAddress; // ivar: _payloadEmailAddress
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withEmailAddress:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withAccountDescription:(id)arg1 withAccountName:(id)arg2 withEmailAddress:(id)arg3 withCommunicationServiceRules:(id)arg4 ;
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