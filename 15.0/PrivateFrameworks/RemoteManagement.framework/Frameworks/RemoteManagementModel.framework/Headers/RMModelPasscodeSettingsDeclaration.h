// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMODELPASSCODESETTINGSDECLARATION_H
#define RMMODELPASSCODESETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"

@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadMaximumFailedAttempts; // ivar: _payloadMaximumFailedAttempts
@property (copy, nonatomic) NSNumber *payloadMaximumGracePeriodInMinutes; // ivar: _payloadMaximumGracePeriodInMinutes
@property (copy, nonatomic) NSNumber *payloadMaximumInactivityInMinutes; // ivar: _payloadMaximumInactivityInMinutes
@property (copy, nonatomic) NSNumber *payloadMinimumLength; // ivar: _payloadMinimumLength
@property (copy, nonatomic) NSNumber *payloadPasscodeReuseLimit; // ivar: _payloadPasscodeReuseLimit
@property (copy, nonatomic) NSNumber *payloadRequireComplexPasscode; // ivar: _payloadRequireComplexPasscode
@property (copy, nonatomic) NSNumber *payloadRequirePasscode; // ivar: _payloadRequirePasscode
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 requirePasscode:(id)arg1 requireComplexPasscode:(id)arg2 minimumLength:(id)arg3 maximumFailedAttempts:(id)arg4 maximumGracePeriodInMinutes:(id)arg5 maximumInactivityInMinutes:(id)arg6 passcodeReuseLimit:(id)arg7 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif