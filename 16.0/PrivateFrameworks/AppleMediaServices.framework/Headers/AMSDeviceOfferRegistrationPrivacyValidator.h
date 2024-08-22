// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDEVICEOFFERREGISTRATIONPRIVACYVALIDATOR_H
#define AMSDEVICEOFFERREGISTRATIONPRIVACYVALIDATOR_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface AMSDeviceOfferRegistrationPrivacyValidator : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account


+(BOOL)_isPrivacyAcknowledgementForIdentifier:(id)arg0 satisfiedOnAccount:(id)arg1 ;
+(BOOL)_isPrivacyAcknowledgementForIdentifiers:(id)arg0 satisfiedOnAccount:(id)arg1 ;
+(id)_identifiersForValidationOptions:(NSUInteger)arg0 ;
+(id)_masterEligibilityPrivacyOptionsIdentifiers;
+(id)_minimumAcknowledgementVersionForIdentifier:(id)arg0 ;
+(id)_privacyVersionMap;
-(BOOL)canMasterDevicePerformRegistration;
-(BOOL)isPrivacyRequirementMetForOptions:(NSUInteger)arg0 ;
-(id)initWithAccount:(id)arg0 ;


@end


#endif