// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMKEYBOARDDECLARATION_H
#define CEMSYSTEMKEYBOARDDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemKeyboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAutoCorrection; // ivar: _payloadAllowAutoCorrection
@property (copy, nonatomic) NSNumber *payloadAllowKeyboardShortcuts; // ivar: _payloadAllowKeyboardShortcuts
@property (copy, nonatomic) NSNumber *payloadAllowPredictiveKeyboard; // ivar: _payloadAllowPredictiveKeyboard
@property (copy, nonatomic) NSNumber *payloadAllowSpellCheck; // ivar: _payloadAllowSpellCheck
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowPredictiveKeyboard:(id)arg1 withAllowAutoCorrection:(id)arg2 withAllowSpellCheck:(id)arg3 withAllowKeyboardShortcuts:(id)arg4 ;
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