// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMOBILITYWALKINGSTEADINESSFEATUREAVAILABILITYMANAGER_H
#define HDMOBILITYWALKINGSTEADINESSFEATUREAVAILABILITYMANAGER_H

@class HDProfile, HDFeatureAvailabilityManager, NSString;
@protocol HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer, HDRegionAvailabilityProviding;

#import <Foundation/Foundation.h>


@interface HDMobilityWalkingSteadinessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer>

 {
    HDProfile *_profile;
    NSInteger _currentOnboardingVersion;
    id<HDRegionAvailabilityProviding> *_supportedRegionProvider;
    HDFeatureAvailabilityManager *_manager;
}


@property (nonatomic) NSInteger _unitTest_currentOnboardingVersionOverride; // ivar: __unitTest_currentOnboardingVersionOverride
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


-(BOOL)_determineIsSupportedWithOnboardingCompletions:(id)arg0 regionCheckBlock:(id)arg1 ;
-(BOOL)_localRegionCheckWithCountryCode:(id)arg0 ;
-(BOOL)isRegionCodeSupportedOnLocalDevice:(id)arg0 ;
-(NSInteger)_currentOnboardingVersion;
-(id)_onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)_onboardingCompletionsForHighestVersionWithError:(*id)arg0 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)arg0 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 regionAvailabilityProvider:(id)arg1 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)isOnboardingCompletionWithRegionSupportedOnLocalDevicePresentWithError:(*id)arg0 ;
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