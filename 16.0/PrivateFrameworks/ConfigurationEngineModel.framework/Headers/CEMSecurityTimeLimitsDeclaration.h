// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYTIMELIMITSDECLARATION_H
#define CEMSECURITYTIMELIMITSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMSecurityTimeLimitsDeclaration_TimeLimits.h"

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadFamilyControlsEnabled; // ivar: _payloadFamilyControlsEnabled
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_TimeLimits *payloadTimeLimits; // ivar: _payloadTimeLimits
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withFamilyControlsEnabled:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withFamilyControlsEnabled:(id)arg1 withTimeLimits:(id)arg2 ;
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