// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDRPFEATUREAVAILABILITYMANAGER_H
#define HDRPFEATUREAVAILABILITYMANAGER_H

@class HDProfile, NSString, HDFeatureAvailabilityManager;
@protocol HDFeatureAvailabilityExtension, HDPairedDeviceCapabilityProviding, OS_os_log;

#import <Foundation/Foundation.h>


@interface HDRPFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension>

 {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    HDFeatureAvailabilityManager *_manager;
    id<HDPairedDeviceCapabilityProviding> *_capabilityProvider;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _skipHardwareCheck;
}


@property (nonatomic) NSInteger currentOnboardingVersion;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)highestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 currentOnboardingVersion:(NSInteger)arg1 regionAvailabilityProvider:(id)arg2 pairedDeviceCapabilityProvider:(id)arg3 remoteAvailabilityProvider:(id)arg4 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 regionAvailabilityProvider:(id)arg3 pairedDeviceCapability:(id)arg4 loggingCategory:(id)arg5 skipHardwareCheck:(BOOL)arg6 pairedDeviceCapabilityProvider:(id)arg7 remoteAvailabilityProvider:(id)arg8 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)_resetOnboarding;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeFeatureSettingValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)resetOnboardingWithCompletion:(id)arg0 ;
-(void)saveOnboardingCompletion:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif