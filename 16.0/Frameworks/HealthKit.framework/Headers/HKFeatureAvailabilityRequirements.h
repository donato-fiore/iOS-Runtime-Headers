// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTS_H
#define HKFEATUREAVAILABILITYREQUIREMENTS_H


#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirements : NSObject



+(id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)arg0 ;
+(id)bloodOxygenMeasurementsAreEnabled;
+(id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg0 ;
+(id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)arg0 supportedOnLocalDevice:(BOOL)arg1 ;
+(id)capabilityIsSupportedOnAnyWatch:(id)arg0 supportedOnLocalDevice:(BOOL)arg1 ;
+(id)countryCodeIsPresentForFeatureWithIdentifier:(id)arg0 ;
+(id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg0 isSupportedIfCountryListMissing:(BOOL)arg1 ;
+(id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)arg0 isSupportedIfCountryListMissing:(BOOL)arg1 ;
+(id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)arg0 ;
+(id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)arg0 isSupportedIfCountryListMissing:(BOOL)arg1 ;
+(id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)arg0 isAgeGatedUserDefaultsKey:(id)arg1 ;
+(id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)arg0 ;
+(id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)arg0 isAgeGatedUserDefaultsKey:(id)arg1 ;
+(id)featureFlagIsEnabled:(BOOL)arg0 ;
+(id)featureIsNotRemotelyDisabledWithIdentifier:(id)arg0 ;
+(id)featureIsOnWithIdentifier:(id)arg0 isOnIfSettingIsAbsent:(BOOL)arg1 ;
+(id)healthAppIsNotHidden;
+(id)heartRateIsEnabledInPrivacy;
+(id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)arg0 isOnIfSettingIsAbsent:(BOOL)arg1 ;
+(id)notAgeGatedForUserDefaultsKey:(id)arg0 ;
+(id)notInStoreDemoMode;
+(id)onboardedAtLeastDaysAgo:(NSInteger)arg0 featureIdentifier:(id)arg1 ;
+(id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)arg0 ;
+(id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)arg0 ;
+(id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)arg0 ;
+(id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)arg0 ;
+(id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)arg0 ;
+(id)profileIsNotFamilySetupPairingProfile;
+(id)seedIsNotExpiredForFeatureWithIdentifier:(id)arg0 ;
+(id)watchLowPowerModeIsOff;
+(id)wristDetectionIsEnabledForActiveWatch;


@end


#endif