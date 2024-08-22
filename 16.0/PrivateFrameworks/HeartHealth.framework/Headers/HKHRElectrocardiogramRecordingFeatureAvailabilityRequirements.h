// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRELECTROCARDIOGRAMRECORDINGFEATUREAVAILABILITYREQUIREMENTS_H
#define HKHRELECTROCARDIOGRAMRECORDINGFEATUREAVAILABILITYREQUIREMENTS_H


#import <Foundation/Foundation.h>


@interface HKHRElectrocardiogramRecordingFeatureAvailabilityRequirements : NSObject



+(id)_onboardingInitiationRequirementsForFeatureIdentifier:(id)arg0 ;
+(id)_onboardingPromotionRequirementsForFeatureIdentifier:(id)arg0 ;
+(id)_settingsUserInteractionEnabledForFeatureIdentifier:(id)arg0 ;
+(id)_settingsVisibilityRequirementsForFeatureIdentifier:(id)arg0 ;
+(id)_upgradeInitiation;
+(id)_upgradePromotion;
+(id)_usageRequirementsForFeatureIdentifier:(id)arg0 ;
+(id)requirementSet;


@end


#endif