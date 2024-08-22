// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRCARDIOFITNESSFEATUREAVAILABILITYMANAGER_H
#define HDHRCARDIOFITNESSFEATUREAVAILABILITYMANAGER_H

@class HDProfile, NSString, HDFeatureAvailabilityManager, NSUserDefaults;
@protocol HDFeatureAvailabilityExtension, HDHRRegionSupportedDeterminer, HDPairedDeviceCapabilityProviding, HDHRCardioFitnessPairedDeviceSupportedRegionProviding;

#import <Foundation/Foundation.h>


@interface HDHRCardioFitnessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDHRRegionSupportedDeterminer>

 {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    NSInteger _currentOnboardingVersion;
    id<HDPairedDeviceCapabilityProviding> *_capabilityProvider;
    id<HDHRCardioFitnessPairedDeviceSupportedRegionProviding> *_supportedRegionProvider;
    HDFeatureAvailabilityManager *_manager;
    NSUserDefaults *_heartRateSettingsDefaults;
}


@property (nonatomic) NSInteger _unitTest_currentOnboardingVersionOverride; // ivar: __unitTest_currentOnboardingVersionOverride
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


-(BOOL)_determineIsSupportedWithOnboardingCompletions:(id)arg0 regionCheckBlock:(id)arg1 ;
-(BOOL)isRegionCodeSupportedOnLocalDevice:(id)arg0 ;
-(BOOL)localRegionCheckWithCountryCode:(id)arg0 ;
-(BOOL)pairedDeviceRegionCheckWithCountryCode:(id)arg0 pairedDevice:(id)arg1 ;
-(NSInteger)_currentOnboardingVersion;
-(id)_onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)_onboardingCompletionsForHighestVersionWithError:(*id)arg0 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)arg0 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)highestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 supportedRegionProvider:(id)arg2 heartRateSettingsDefaults:(id)arg3 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)isOnboardingCompletionWithRegionSupportedOnLocalAndActivePairedDevicePresentWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeFeatureSettingValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)resetOnboardingWithCompletion:(id)arg0 ;
-(void)saveOnboardingCompletion:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg0 countryCodeProvenance:(NSInteger)arg1 date:(id)arg2 settings:(id)arg3 completion:(id)arg4 ;
-(void)setFeatureSettingData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif