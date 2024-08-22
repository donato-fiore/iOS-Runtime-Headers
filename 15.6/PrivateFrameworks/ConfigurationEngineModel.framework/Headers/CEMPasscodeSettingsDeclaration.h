// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMPASSCODESETTINGSDECLARATION_H
#define CEMPASSCODESETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAutoUnlock; // ivar: _payloadAllowAutoUnlock
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintForUnlock; // ivar: _payloadAllowFingerprintForUnlock
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintModification; // ivar: _payloadAllowFingerprintModification
@property (copy, nonatomic) NSNumber *payloadAllowPasscodeModification; // ivar: _payloadAllowPasscodeModification
@property (copy, nonatomic) NSNumber *payloadAllowSimple; // ivar: _payloadAllowSimple
@property (copy, nonatomic) NSNumber *payloadChangeAtNextAuth; // ivar: _payloadChangeAtNextAuth
@property (copy, nonatomic) NSNumber *payloadForcePIN; // ivar: _payloadForcePIN
@property (copy, nonatomic) NSNumber *payloadManualFetchingWhenRoaming; // ivar: _payloadManualFetchingWhenRoaming
@property (copy, nonatomic) NSNumber *payloadMaxFailedAttempts; // ivar: _payloadMaxFailedAttempts
@property (copy, nonatomic) NSNumber *payloadMaxGracePeriod; // ivar: _payloadMaxGracePeriod
@property (copy, nonatomic) NSNumber *payloadMaxInactivity; // ivar: _payloadMaxInactivity
@property (copy, nonatomic) NSNumber *payloadMaxPINAgeInDays; // ivar: _payloadMaxPINAgeInDays
@property (copy, nonatomic) NSNumber *payloadMinComplexChars; // ivar: _payloadMinComplexChars
@property (copy, nonatomic) NSNumber *payloadMinLength; // ivar: _payloadMinLength
@property (copy, nonatomic) NSNumber *payloadMinutesUntilFailedLoginReset; // ivar: _payloadMinutesUntilFailedLoginReset
@property (copy, nonatomic) NSNumber *payloadPinHistory; // ivar: _payloadPinHistory
@property (copy, nonatomic) NSNumber *payloadRequireAlphanumeric; // ivar: _payloadRequireAlphanumeric
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowSimple:(id)arg1 withForcePIN:(id)arg2 withMaxFailedAttempts:(id)arg3 withMaxInactivity:(id)arg4 withMaxPINAgeInDays:(id)arg5 withMinComplexChars:(id)arg6 withMinLength:(id)arg7 withRequireAlphanumeric:(id)arg8 withPinHistory:(id)arg9 withMaxGracePeriod:(id)arg10 withMinutesUntilFailedLoginReset:(id)arg11 withChangeAtNextAuth:(id)arg12 withManualFetchingWhenRoaming:(id)arg13 withAllowFingerprintForUnlock:(id)arg14 withAllowFingerprintModification:(id)arg15 withAllowPasscodeModification:(id)arg16 withAllowAutoUnlock:(id)arg17 ;
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