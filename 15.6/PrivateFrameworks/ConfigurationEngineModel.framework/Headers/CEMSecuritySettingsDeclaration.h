// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSECURITYSETTINGSDECLARATION_H
#define CEMSECURITYSETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowEnablingRestrictions; // ivar: _payloadAllowEnablingRestrictions
@property (copy, nonatomic) NSNumber *payloadAllowEraseContentAndSettings; // ivar: _payloadAllowEraseContentAndSettings
@property (copy, nonatomic) NSNumber *payloadAllowOTAPKIUpdates; // ivar: _payloadAllowOTAPKIUpdates
@property (copy, nonatomic) NSNumber *payloadAllowUntrustedTLSPrompt; // ivar: _payloadAllowUntrustedTLSPrompt
@property (copy, nonatomic) NSNumber *payloadForceEncryptedBackup; // ivar: _payloadForceEncryptedBackup
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowUntrustedTLSPrompt:(id)arg1 withAllowOTAPKIUpdates:(id)arg2 withForceEncryptedBackup:(id)arg3 withAllowEraseContentAndSettings:(id)arg4 withAllowEnablingRestrictions:(id)arg5 ;
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