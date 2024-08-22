// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRIRREGULARRHYTHMNOTIFICATIONSV1FEATUREAVAILABILITYMANAGER_H
#define HDHRIRREGULARRHYTHMNOTIFICATIONSV1FEATUREAVAILABILITYMANAGER_H

@class HDProfile, NSUserDefaults, HKObserverSet<HKFeatureAvailabilityProvidingObserver>, NSString;
@protocol HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDFeatureAvailabilityExtension, HDPairedDeviceCapabilityProviding, HDFeatureDisableAndExpiryProviding;

#import <Foundation/Foundation.h>


@interface HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDFeatureAvailabilityExtension>

 {
    HDProfile *_profile;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceProvider;
    id<HDFeatureDisableAndExpiryProviding> *_disableAndExpiryProvider;
    NSUserDefaults *_notificationSettingDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_countryCodeIsSupportedForDevicePairing:(id)arg0 device:(id)arg1 ;
-(BOOL)_isFeatureSupportedOnDevice:(id)arg0 ;
-(id)_onboardingCompletionWithError:(*id)arg0 ;
-(id)_onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)countryAvailabilityVersion;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;
-(id)initWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 disableAndExpiryProvider:(id)arg2 notificationSettingDefaults:(id)arg3 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
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