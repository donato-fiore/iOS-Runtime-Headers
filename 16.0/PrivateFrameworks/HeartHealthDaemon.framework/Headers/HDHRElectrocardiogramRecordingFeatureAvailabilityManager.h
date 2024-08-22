// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRELECTROCARDIOGRAMRECORDINGFEATUREAVAILABILITYMANAGER_H
#define HDHRELECTROCARDIOGRAMRECORDINGFEATUREAVAILABILITYMANAGER_H

@class HKObserverSet<HKFeatureAvailabilityProvidingObserver>, NSUserDefaults, NSString;
@protocol HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtension, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRElectrocardiogramRecordingFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtension>

 {
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
    int _didUpdateOnboardingCacheNotificationToken;
    NSUserDefaults *_cacheDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _needsOnboardingVersionCacheUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager; // ivar: _v1FeatureAvailabilityManager
@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v2FeatureAvailabilityManager; // ivar: _v2FeatureAvailabilityManager


-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 cacheDefaults:(id)arg2 ;
-(id)initWithV1FeatureAvailabilityManager:(id)arg0 v2FeatureAvailabilityManager:(id)arg1 cacheDefaults:(id)arg2 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_observerQueue_updateCachedOnboardingVersionIfNeeded;
-(void)_registerForCacheUpdatedNotifications;
-(void)dealloc;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;
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