// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSECURITYSMARTCARDDECLARATION_H
#define CEMSECURITYSMARTCARDDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecuritySmartCardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowSmartCard; // ivar: _payloadAllowSmartCard
@property (copy, nonatomic) NSNumber *payloadCheckCertificateTrust; // ivar: _payloadCheckCertificateTrust
@property (copy, nonatomic) NSNumber *payloadEnforceSmartCard; // ivar: _payloadEnforceSmartCard
@property (copy, nonatomic) NSNumber *payloadOneCardPerUser; // ivar: _payloadOneCardPerUser
@property (copy, nonatomic) NSNumber *payloadTokenRemovalAction; // ivar: _payloadTokenRemovalAction
@property (copy, nonatomic) NSNumber *payloadUserPairing; // ivar: _payloadUserPairing
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withUserPairing:(id)arg1 withAllowSmartCard:(id)arg2 withCheckCertificateTrust:(id)arg3 withOneCardPerUser:(id)arg4 withTokenRemovalAction:(id)arg5 withEnforceSmartCard:(id)arg6 ;
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