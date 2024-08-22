// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKRPOXYGENSATURATIONONBOARDINGMANAGERDATASOURCE_H
#define _HKRPOXYGENSATURATIONONBOARDINGMANAGERDATASOURCE_H

@class HKFeatureAvailabilityStore, HKMobileCountryCodeManager, NSString, NRDevice;
@protocol HKRPOxygenSaturationOnboardingManagerDataSource, HKFeatureAvailabilityProviding;

#import <Foundation/Foundation.h>

#import "HKRPOxygenSaturationAvailability.h"
#import "HKRPOxygenSaturationSettings.h"
#import "HKRPOxygenSaturationOnboardingCache.h"

@interface _HKRPOxygenSaturationOnboardingManagerDataSource : NSObject <HKRPOxygenSaturationOnboardingManagerDataSource>

 {
    os_unfair_lock_s _lock;
    HKFeatureAvailabilityStore *_featureAvailabilityProvider;
    HKRPOxygenSaturationAvailability *_oxygenSaturationAvailability;
    HKRPOxygenSaturationSettings *_oxygenSaturationSettings;
    HKRPOxygenSaturationOnboardingCache *_onboardingCache;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
}


@property (readonly, nonatomic, getter=isAgeGated) BOOL ageGated;
@property (readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) BOOL bloodOxygenSaturationEnabled;
@property (readonly, nonatomic) NSString *countryCodeFromCurrentLocale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NRDevice *device;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (readonly, nonatomic) HKRPOxygenSaturationOnboardingCache *onboardingCache;
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (readonly, nonatomic) BOOL shouldAdvertise;
@property (readonly, nonatomic) BOOL skipHardwareCheck;
@property (readonly) Class superclass;


-(id)_lazyPropertyWithLockedBlock:(id)arg0 ;
-(id)init;


@end


#endif