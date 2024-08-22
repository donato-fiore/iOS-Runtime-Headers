// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRHEARTRATENOTIFICATIONSFEATUREAVAILABILITYMANAGER_H
#define HDHRHEARTRATENOTIFICATIONSFEATUREAVAILABILITYMANAGER_H

@class NSUserDefaults, HKObserverSet, NSString;
@protocol HDFeatureAvailabilityExtension, HDPairedDeviceCapabilityProviding;

#import <Foundation/Foundation.h>


@interface HDHRHeartRateNotificationsFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension>

 {
    NSUserDefaults *_notificationSettingsDefaults;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    HKObserverSet *_observers;
}


@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier


-(BOOL)_isActiveRemoteDevicePresent;
-(BOOL)_isOnboardingRecordPresent;
-(NSInteger)_defaultHeartRateThreshold;
-(id)_activeRemoteDeviceSupportsHeartRateNotificationsWithError:(*id)arg0 ;
-(id)_featureEnabledDefaultsKey;
-(id)_featureSettings;
-(id)_thresholdDefaultsKey;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 notificationSettingsDefaults:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_setFeatureEnabled:(id)arg0 preferredThreshold:(id)arg1 ;
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