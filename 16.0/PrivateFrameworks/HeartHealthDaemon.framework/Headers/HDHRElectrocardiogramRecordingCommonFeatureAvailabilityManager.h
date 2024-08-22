// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRELECTROCARDIOGRAMRECORDINGCOMMONFEATUREAVAILABILITYMANAGER_H
#define HDHRELECTROCARDIOGRAMRECORDINGCOMMONFEATUREAVAILABILITYMANAGER_H

@class HDProfile, NSUserDefaults, HKObserverSet<HKFeatureAvailabilityProvidingObserver>, NSString, HKFeatureAvailabilityRequirementSet;
@protocol HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDPairedDeviceCapabilityProvidingDelegate, HDFeatureAvailabilityExtension, HDPairedFeatureAttributesProviding, HDPairedDeviceCapabilityProviding, HDFeatureDisableAndExpiryProviding, HDRegionAvailabilityProviding;

#import <Foundation/Foundation.h>


@interface HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDPairedDeviceCapabilityProvidingDelegate, HDFeatureAvailabilityExtension>

 {
    HDProfile *_profile;
    id<HDPairedFeatureAttributesProviding> *_pairedFeatureAttributesProvider;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceProvider;
    id<HDFeatureDisableAndExpiryProviding> *_disableAndExpiryProvider;
    id<HDRegionAvailabilityProviding> *_regionAvailabilityProvider;
    NSUserDefaults *_cacheDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
    NSString *_featureIdentifier;
    NSUInteger _onboardingVersion;
    HKFeatureAvailabilityRequirementSet *_availabilityRequirementSet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isFeatureSupportedOnDevice:(id)arg0 ;
-(NSUInteger)_ineligibilityReasonsForRescindedStatus:(NSInteger)arg0 ;
-(id)_currentOnboardingHistoryDictionaryWithError:(*id)arg0 ;
-(id)_makeOnboardingHistoryWithOnboardingVersion:(NSInteger)arg0 countryCode:(id)arg1 error:(*id)arg2 ;
-(id)_onboardingCompletionWithError:(*id)arg0 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)countryAvailabilityVersion;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 onboardingVersion:(NSUInteger)arg2 pairedFeatureAttributesProvider:(id)arg3 pairedDeviceCapabilityProvider:(id)arg4 disableAndExpiryProvider:(id)arg5 regionAvailabilityProvider:(id)arg6 availabilityRequirementSet:(id)arg7 cacheDefaults:(id)arg8 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_saveFirstOnboardingCompletionDateIfNeeded:(id)arg0 ;
-(void)_setOnboardingCompletedForCountryCode:(id)arg0 onboardingVersion:(NSUInteger)arg1 date:(id)arg2 settings:(id)arg3 completion:(id)arg4 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)pairedDeviceCapabilitiesDidUpdate:(id)arg0 ;
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