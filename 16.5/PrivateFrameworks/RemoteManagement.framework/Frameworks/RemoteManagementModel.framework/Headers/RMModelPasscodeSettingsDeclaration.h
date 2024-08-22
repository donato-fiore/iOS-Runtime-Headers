// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELPASSCODESETTINGSDECLARATION_H
#define RMMODELPASSCODESETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"

@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadChangeAtNextAuth; // ivar: _payloadChangeAtNextAuth
@property (copy, nonatomic) NSNumber *payloadFailedAttemptsResetInMinutes; // ivar: _payloadFailedAttemptsResetInMinutes
@property (copy, nonatomic) NSNumber *payloadMaximumFailedAttempts; // ivar: _payloadMaximumFailedAttempts
@property (copy, nonatomic) NSNumber *payloadMaximumGracePeriodInMinutes; // ivar: _payloadMaximumGracePeriodInMinutes
@property (copy, nonatomic) NSNumber *payloadMaximumInactivityInMinutes; // ivar: _payloadMaximumInactivityInMinutes
@property (copy, nonatomic) NSNumber *payloadMaximumPasscodeAgeInDays; // ivar: _payloadMaximumPasscodeAgeInDays
@property (copy, nonatomic) NSNumber *payloadMinimumComplexCharacters; // ivar: _payloadMinimumComplexCharacters
@property (copy, nonatomic) NSNumber *payloadMinimumLength; // ivar: _payloadMinimumLength
@property (copy, nonatomic) NSNumber *payloadPasscodeReuseLimit; // ivar: _payloadPasscodeReuseLimit
@property (copy, nonatomic) NSNumber *payloadRequireAlphanumericPasscode; // ivar: _payloadRequireAlphanumericPasscode
@property (copy, nonatomic) NSNumber *payloadRequireComplexPasscode; // ivar: _payloadRequireComplexPasscode
@property (copy, nonatomic) NSNumber *payloadRequirePasscode; // ivar: _payloadRequirePasscode
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 requirePasscode:(id)arg1 requireAlphanumericPasscode:(id)arg2 requireComplexPasscode:(id)arg3 minimumLength:(id)arg4 minimumComplexCharacters:(id)arg5 maximumFailedAttempts:(id)arg6 failedAttemptsResetInMinutes:(id)arg7 maximumGracePeriodInMinutes:(id)arg8 maximumInactivityInMinutes:(id)arg9 maximumPasscodeAgeInDays:(id)arg10 passcodeReuseLimit:(id)arg11 changeAtNextAuth:(id)arg12 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif