// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPFEATUREAVAILABILITYSTORE_H
#define HKSPFEATUREAVAILABILITYSTORE_H

@class NSString;
@protocol HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding, HKSPSleepOnboardingStore, HKSPFeatureAvailabilityPairedDeviceRegistry, HKSPOnboardingModel, HKSPFeatureSettingsModel;

#import <Foundation/Foundation.h>

#import "HKSPObserverSet.h"

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding>

 {
    id<HKSPSleepOnboardingStore> *_sleepStore;
    HKSPObserverSet *_observers;
    NSInteger _feature;
    id<HKSPFeatureAvailabilityPairedDeviceRegistry> *_pairedDeviceRegistry;
    int _deviceCharacteristicChangeNotifyToken;
    id<HKSPOnboardingModel> *_cachedOnboardingModel;
    id<HKSPFeatureSettingsModel> *_cachedFeatureSettingsModel;
    os_unfair_lock_s _modelLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCurrentOnboardingVersionCompletedForOnboardingModel:(id)arg0 ;
-(BOOL)_lock_updatedCachedFeatureSettingsModelWithError:(*id)arg0 didChange:(*BOOL)arg1 ;
-(BOOL)_lock_updatedCachedOnboardingModelWithError:(*id)arg0 didChange:(*BOOL)arg1 ;
-(BOOL)_updateCachedFeatureSettingsModel;
-(BOOL)_updateCachedOnboardingModel;
-(NSInteger)_onboardedCountrySupportedStateForOnboardingModel:(id)arg0 ;
-(NSUInteger)_onboardingIneligibilityReasons;
-(id)_cachedFeatureSettingsModelWithError:(*id)arg0 ;
-(id)_cachedOnboardingModelWithError:(*id)arg0 ;
-(id)_defaultRequirements;
-(id)_featureSettingsForOnboardingModel:(id)arg0 featureSettingsModel:(id)arg1 ;
-(id)_onboardingCompletionForOnboardingModel:(id)arg0 ;
-(id)_sleepTrackingRequirements;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 sleepStore:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 sleepStore:(id)arg1 pairedDeviceRegistry:(id)arg2 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_cachedOnboardingModelWithCompletion:(id)arg0 ;
-(void)_notifyObserversForDidUpdateOnboarding;
-(void)_notifyObserversForDidUpdateSettings;
-(void)_pairedDeviceDidChange;
-(void)_registerForNotifications;
-(void)_updatedCachedOnboardingModelWithCompletion:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
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
-(void)sleepStore:(id)arg0 sleepEventRecordDidChange:(id)arg1 ;
-(void)sleepStore:(id)arg0 sleepSettingsDidChange:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif