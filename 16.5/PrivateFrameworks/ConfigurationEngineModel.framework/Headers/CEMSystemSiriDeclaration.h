// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMSIRIDECLARATION_H
#define CEMSYSTEMSIRIDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAssistant; // ivar: _payloadAllowAssistant
@property (copy, nonatomic) NSNumber *payloadAllowAssistantUserGeneratedContent; // ivar: _payloadAllowAssistantUserGeneratedContent
@property (copy, nonatomic) NSNumber *payloadAllowDictation; // ivar: _payloadAllowDictation
@property (copy, nonatomic) NSNumber *payloadForceAssistantProfanityFilter; // ivar: _payloadForceAssistantProfanityFilter
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowAssistant:(id)arg1 withAllowDictation:(id)arg2 withAllowAssistantUserGeneratedContent:(id)arg3 withForceAssistantProfanityFilter:(id)arg4 ;
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