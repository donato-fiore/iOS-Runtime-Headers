// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTEVALUATIONDATASOURCE_H
#define HKFEATUREAVAILABILITYREQUIREMENTEVALUATIONDATASOURCE_H

@class NSDate;
@protocol HKCurrentCountryCodeProvider, HKFeatureOnboardingRecordFallbackProviding, HKFeatureAvailabilityHealthDataSource;

#import <Foundation/Foundation.h>

#import "HKUserDefaultsDataSource.h"
#import "_HKBehavior.h"
#import "HKDarwinNotificationDataSource.h"
#import "HKNanoRegistryPairingAndSwitchingNotificationDataSource.h"
#import "HKFeatureAvailabilityProvidingDataSource.h"
#import "HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource.h"
#import "HKWatchLowPowerModeDataSource.h"
#import "HKWristDetectionSettingDataSource.h"

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource; // ivar: _ageGatingDataSource
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSObject<HKCurrentCountryCodeProvider> *currentCountryCodeProvider; // ivar: _currentCountryCodeProvider
@property (readonly, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) id *currentDateDataSource; // ivar: _currentDateDataSource
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource; // ivar: _darwinNotificationDataSource
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource; // ivar: _devicePairingAndSwitchingNotificationDataSource
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource; // ivar: _featureAvailabilityProvidingDataSource
@property (retain, nonatomic) NSObject<HKFeatureOnboardingRecordFallbackProviding> *onboardingRecordFallbackProvider; // ivar: _onboardingRecordFallbackProvider
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource; // ivar: _privacyPreferencesDataSource
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource; // ivar: _requirementSatisfactionOverridesDataSource
@property (readonly, nonatomic) HKUserDefaultsDataSource *respiratoryPreferencesDataSource; // ivar: _respiratoryPreferencesDataSource
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource; // ivar: _strongHealthDataSource
@property (readonly, nonatomic) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource; // ivar: _watchLowPowerModeDataSource
@property (readonly, weak, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource; // ivar: _weakHealthDataSource
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource; // ivar: _wristDetectionSettingDataSource


+(id)dataSourceWithHealthDataSource:(id)arg0 ;
+(id)dataSourceWithHealthDataSource:(id)arg0 currentCountryCodeProvider:(id)arg1 ;
+(id)dataSourceWithHealthDataSource:(id)arg0 currentCountryCodeProvider:(id)arg1 onboardingRecordFallbackProvider:(id)arg2 ;
+(id)dataSourceWithHealthDataSource:(id)arg0 currentCountryCodeProvider:(id)arg1 wristDetectionSettingManager:(id)arg2 requirementSatisfactionOverridesDataSource:(id)arg3 onboardingRecordFallbackProvider:(id)arg4 ;
-(id)healthDataSource;
// -(id)initWithHealthDataSource:(id)arg0 featureAvailabilityProvidingDataSource:(id)arg1 privacyPreferencesDataSource:(id)arg2 respiratoryPreferencesDataSource:(id)arg3 ageGatingDataSource:(id)arg4 wristDetectionSettingDataSource:(id)arg5 devicePairingAndSwitchingNotificationDataSource:(id)arg6 darwinNotificationDataSource:(id)arg7 watchLowPowerModeDataSource:(id)arg8 currentCountryCodeProvider:(id)arg9 requirementSatisfactionOverridesDataSource:(id)arg10 currentDateDataSource:(id)arg11 onboardingRecordFallbackProvider:(unk)arg12  ;
// -(id)initWithHealthDataSource:(id)arg0 privacyPreferencesDataSource:(id)arg1 respiratoryPreferencesDataSource:(id)arg2 ageGatingDataSource:(id)arg3 wristDetectionSettingDataSource:(id)arg4 devicePairingAndSwitchingNotificationDataSource:(id)arg5 darwinNotificationDataSource:(id)arg6 watchLowPowerModeDataSource:(id)arg7 currentCountryCodeProvider:(id)arg8 requirementSatisfactionOverridesDataSource:(id)arg9 currentDateDataSource:(id)arg10 onboardingRecordFallbackProvider:(unk)arg11  ;
-(id)onboardingEligibilityForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingRecordForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)performLocalEvaluation:(id)arg0 ;
-(id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)arg0 ;
-(void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)arg0 block:(id)arg1 ;
-(void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)arg0 ;


@end


#endif