// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYDATABASEINACCESSIBILITYCACHE_H
#define HKFEATUREAVAILABILITYDATABASEINACCESSIBILITYCACHE_H

@class NSString;
@protocol HKFeatureAvailabilityProviding, HKFeatureAvailabilityCacheProviding, OS_os_log;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding>

 {
    id<HKFeatureAvailabilityProviding> *_featureAvailabilityProviding;
    id<HKFeatureAvailabilityCacheProviding> *_cacheProviding;
    NSObject<OS_os_log> *_loggingCategory;
}


@property (readonly, copy, nonatomic) NSString *featureIdentifier;


-(id)_cachedObjectForKey:(id)arg0 ;
-(id)_namespacedKeyForKey:(id)arg0 ;
-(id)_processNumber:(id)arg0 error:(id)arg1 cacheKey:(id)arg2 ;
-(id)_processResult:(id)arg0 resultType:(Class)arg1 error:(id)arg2 cacheKey:(id)arg3 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)highestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)initWithFeatureAvailabilityProviding:(id)arg0 backedByCache:(id)arg1 loggingCategory:(id)arg2 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_setCachedObject:(id)arg0 forKey:(id)arg1 ;
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