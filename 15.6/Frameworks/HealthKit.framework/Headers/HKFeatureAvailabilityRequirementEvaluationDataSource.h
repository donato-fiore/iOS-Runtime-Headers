// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTEVALUATIONDATASOURCE_H
#define HKFEATUREAVAILABILITYREQUIREMENTEVALUATIONDATASOURCE_H

@class NSDate;
@protocol HKCurrentCountryCodeProvider, HKFeatureAvailabilityHealthDataSource;

#import <Foundation/Foundation.h>

#import "HKUserDefaultsDataSource.h"
#import "_HKBehavior.h"
#import "HKDarwinNotificationDataSource.h"
#import "HKNanoRegistryPairingAndSwitchingNotificationDataSource.h"
#import "HKFeatureAvailabilityProvidingDataSource.h"
#import "HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource.h"
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
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource; // ivar: _privacyPreferencesDataSource
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource; // ivar: _requirementSatisfactionOverridesDataSource
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource; // ivar: _strongHealthDataSource
@property (readonly, weak, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource; // ivar: _weakHealthDataSource
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource; // ivar: _wristDetectionSettingDataSource


+(id)dataSourceWithHealthDataSource:(id)arg0 ;
+(id)dataSourceWithHealthDataSource:(id)arg0 currentCountryCodeProvider:(id)arg1 ;
+(id)dataSourceWithHealthDataSource:(id)arg0 currentCountryCodeProvider:(id)arg1 wristDetectionSettingManager:(id)arg2 ;
-(id)healthDataSource;
-(id)initWithHealthDataSource:(id)arg0 privacyPreferencesDataSource:(id)arg1 ageGatingDataSource:(id)arg2 wristDetectionSettingDataSource:(id)arg3 devicePairingAndSwitchingNotificationDataSource:(id)arg4 darwinNotificationDataSource:(id)arg5 currentCountryCodeProvider:(id)arg6 requirementSatisfactionOverridesDataSource:(id)arg7 currentDateDataSource:(id)arg8 ;
-(id)onboardingEligibilityForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)onboardingRecordForFeatureWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)performLocalEvaluation:(id)arg0 ;
-(id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)arg0 ;


@end


#endif