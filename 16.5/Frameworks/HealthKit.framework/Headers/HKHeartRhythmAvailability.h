// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTRHYTHMAVAILABILITY_H
#define HKHEARTRHYTHMAVAILABILITY_H

@class NSNumber, NSString, NSDate, NSUserDefaults, NSMutableSet;

#import <Foundation/Foundation.h>

#import "HKWatchAppAvailability.h"
#import "HKActiveWatchRemoteFeatureAvailabilityDataSource.h"
#import "HKHealthStore.h"
#import "HKObserverSet.h"
#import "HKKeyValueDomain.h"
#import "HKMobileCountryCodeManager.h"

@interface HKHeartRhythmAvailability : NSObject {
    os_unfair_lock_s _cacheLock;
    os_unfair_lock_s _onboardingKeysReadLock;
    NSNumber *_electrocardiogramRescindedStatusCache;
}


@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionDisabled) BOOL atrialFibrillationDetectionDisabled;
@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionOnboardingCompleted) BOOL atrialFibrillationDetectionOnboardingCompleted;
@property (readonly, nonatomic) NSInteger atrialFibrillationDetectionRescindedStatus;
@property (readonly, nonatomic, getter=isAtrialFibrillationDetectionSettingEnabled) BOOL atrialFibrillationDetectionSettingEnabled;
@property (retain, nonatomic) NSString *currentCountryCode; // ivar: _currentCountryCode
@property (retain, nonatomic) HKWatchAppAvailability *ecgAppAvailability; // ivar: _ecgAppAvailability
@property (retain, nonatomic) HKActiveWatchRemoteFeatureAvailabilityDataSource *electrocardiogramAvailabilityDataSource; // ivar: _electrocardiogramAvailabilityDataSource
@property (readonly, nonatomic) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property (readonly, nonatomic, getter=isElectrocardiogramOnboardingCompleted) BOOL electrocardiogramOnboardingCompleted;
@property (readonly, nonatomic, getter=isElectrocardiogramRecordingDisabled) BOOL electrocardiogramRecordingDisabled;
@property (readonly, nonatomic) NSInteger electrocardiogramRecordingRescindedStatus;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken; // ivar: _featureAvailabilityConditionsDidUpdateNotificationToken
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKObserverSet *heartRhythmAvailabilityObservers; // ivar: _heartRhythmAvailabilityObservers
@property (retain, nonatomic) NSUserDefaults *heartRhythmUserDefaults; // ivar: _heartRhythmUserDefaults
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // ivar: _mobileCountryCodeManager
@property (retain, nonatomic) NSMutableSet *onboardingKeysReadSet; // ivar: _onboardingKeysReadSet
@property (nonatomic) int onboardingStateDidChangeNotificationToken; // ivar: _onboardingStateDidChangeNotificationToken
@property (nonatomic) int userCharacteristicsDidChangeNotificationToken; // ivar: _userCharacteristicsDidChangeNotificationToken


+(BOOL)_isECG1SupportedOnCompanionDevice:(id)arg0 geolocatedCountryCode:(id)arg1 ;
+(BOOL)_isECG2SupportedForCountryCode:(id)arg0 andPhoneDevice:(id)arg1 ;
+(BOOL)_isECG2SupportedForCountryCode:(id)arg0 andWatchDevice:(id)arg1 ;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg0 ;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg0 geolocatedCountryCode:(id)arg1 ;
+(BOOL)electrocardiogramSupportedForDevice:(id)arg0 ;
+(BOOL)isCompanionRegionCheckEnabledForActiveWatch;
+(BOOL)isCompanionRegionCheckEnabledForDevice:(id)arg0 ;
+(BOOL)isCompanionRegionCheckEnabledOnPairedPhone;
+(BOOL)isECG1SupportedOnlyForCountryCode:(id)arg0 ;
+(BOOL)isElectrocardiogram2SupportedWithCountryCode:(id)arg0 ;
+(BOOL)isElectrocardiogramAppDeletableForActiveWatch;
+(BOOL)isElectrocardiogramAppInstallableForLocale:(id)arg0 ;
+(BOOL)isElectrocardiogramSupportedOnActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnAllWatches;
+(BOOL)isElectrocardiogramSupportedOnAnyWatch;
+(BOOL)isElectrocardiogramSupportedOnPairedPhone;
+(BOOL)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg0 ;
+(BOOL)isElectrocardiogramSupportedOnWatch:(id)arg0 ;
+(BOOL)isHeartRateEnabledInPrivacy;
+(BOOL)shouldInstallWatchApp;
+(Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg0 ;
+(Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;
+(NSInteger)_electrocardiogramRescindedStatusWithDataSource:(id)arg0 ;
+(NSInteger)currentElectrocardiogramOnboardingVersion;
+(NSUInteger)_electrocardiogramSupportedStateForDeviceRegion:(id)arg0 ;
+(NSUInteger)electrocardiogramSupportedState;
+(NSUInteger)electrocardiogramSupportedStateForActiveWatch;
+(NSUInteger)electrocardiogramSupportedStateForWatch:(id)arg0 ;
+(id)_ECG2SupportedCountriesOnDevice;
+(id)_ECG2SupportedCountriesOnDevice:(id)arg0 ;
+(id)_availabilityPlistURL;
+(id)_history:(id)arg0 addCurrentOnboardingVersionCompletedIfApplicable:(NSInteger)arg1 countryCode:(id)arg2 ;
+(id)_onboardingCountryCodeKeyFromCompletedKey:(id)arg0 ;
+(id)_onboardingHistoryKeyFromCompletedKey:(id)arg0 ;
+(id)_onboardingHistoryWithVersionCompletedKey:(id)arg0 keyValueDomain:(id)arg1 ;
+(id)activePairedDevice;
+(id)currentDeviceRegionCode;
+(id)electrocardiogramOnboardingHistoryMaxKnownWithKeyValueDomain:(id)arg0 ;
+(id)featureAvailabilityUserDefaults;
+(id)pairedDevices;
+(void)installElectrocardiogramAppOnActiveWatch:(id)arg0 ;
-(BOOL)_activePairedDevicesSupportECGAlgorithmVersionTwo:(id)arg0 ;
-(BOOL)_isECG1SupportedForCountryCode:(id)arg0 watchOSVersion:(unsigned int)arg1 isWatchOSSeedBuild:(BOOL)arg2 ;
-(BOOL)_isOnboardingCompletedForKey:(id)arg0 version:(NSInteger)arg1 ;
-(BOOL)_isOnboardingCompletedForKey:(id)arg0 version:(NSInteger)arg1 useCache:(BOOL)arg2 ;
-(BOOL)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg0 ;
-(BOOL)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(NSInteger)arg0 currentDate:(id)arg1 ;
-(BOOL)_shouldAdvertiseECG2BackgroundDeliveryCompletedWithDevice:(id)arg0 ;
-(BOOL)_shouldAdvertiseECG2DirectOnboardingWithWatchDevice:(id)arg0 ;
-(BOOL)_shouldAdvertiseECG2UpgradeWithDevice:(id)arg0 ;
-(BOOL)_shouldAdvertiseECGDirectOnboardingWithDevice:(id)arg0 ;
-(BOOL)_shouldAdvertiseElectrocardiogramUpgradeForDevice:(id)arg0 ;
-(BOOL)_shouldAdvertiseWithAdvertiseECGVersions:(id)arg0 ;
-(BOOL)activePairedDevicesSupportElectrocardiogramAlgorithmVersion:(NSInteger)arg0 ;
-(BOOL)isElectrocardiogramAppInstallAllowedForWatch:(id)arg0 ;
-(BOOL)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg0 ;
-(BOOL)isElectrocardiogramAvailableOnWatch:(id)arg0 countryCode:(id)arg1 ;
-(BOOL)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg0 ;
-(BOOL)isHeartAgeGatingEnabledOnWatch:(id)arg0 currentDate:(id)arg1 ;
-(BOOL)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
-(BOOL)shouldAdvertiseECG2BackgroundDeliveryCompletedForActiveWatch;
-(BOOL)shouldAdvertiseElectrocardiogramForActiveWatch;
-(BOOL)shouldAdvertiseElectrocardiogramForWatch:(id)arg0 ;
-(BOOL)shouldAdvertiseElectrocardiogramUpgradeBackgroundDeliveryCompletedForActivePhone;
-(NSInteger)_getOnboardingVersionForKey:(id)arg0 ;
-(NSInteger)electrocardiogramOnboardingCompletedVersionNoCache;
-(NSUInteger)electrocardiogramUpgradeBackgroundDeliveryVersionCompletedForActivePhone;
-(id)_ecg2AvailabilityWithPhoneDevice:(id)arg0 ;
-(id)_ecg2AvailabilityWithPhoneDevice:(id)arg0 wasUpgradeBackgroundDelivered:(BOOL)arg1 ;
-(id)_ecg2AvailabilityWithWatchDevice:(id)arg0 ;
-(id)_electrocardiogramOnboardingHistory;
-(id)_electrocardiogramOnboardingHistoryKnown;
-(id)_makeOnboardingHistoryWithVersionCompleted:(NSInteger)arg0 versionCompletedKey:(id)arg1 additionalValues:(id)arg2 countryCodeKey:(id)arg3 ;
-(id)electrocardiogramOnboardingCountryCode;
-(id)electrocardiogramOnboardingHistoryType:(NSInteger)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 currentCountryCode:(id)arg1 ;
-(void)_featureAvailabilityConditionsDidUpdate;
-(void)_localeDidChange;
-(void)_pairedOrActiveDevicesDidChange:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_removeFirstOnboardingCompletedDatesForKey:(id)arg0 completion:(id)arg1 ;
-(void)_resetElectrocardiogramRescindedStatusCacheWithLock:(BOOL)arg0 ;
-(void)_setFirstOnboardingCompletedDate:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)_setOnboardingVersionCompleted:(NSInteger)arg0 forKey:(id)arg1 additionalValues:(id)arg2 completion:(id)arg3 ;
-(void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(NSInteger)arg0 ;
-(void)_unregisterForNotifications;
-(void)_updateOnboardingCompletionForKey:(id)arg0 andVersion:(NSInteger)arg1 ;
-(void)addHeartRhythmAvailabilityObserver:(id)arg0 ;
-(void)dealloc;
-(void)electrocardiogramAppInstallStateOnActiveWatch:(id)arg0 ;
-(void)notifyHeartRhythmAvailabilityDidUpdate;
-(void)removeHeartRhythmAvailabilityObserver:(id)arg0 ;
-(void)setAllowInstallingElectrocardiogramWatchApp:(BOOL)arg0 ;
-(void)updateElectrocardiogramWatchAppInstallIsAllowed;
-(void)updateOnboardingCompletionVersionCache;


@end


#endif