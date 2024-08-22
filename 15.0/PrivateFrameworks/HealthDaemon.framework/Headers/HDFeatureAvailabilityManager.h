// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFEATUREAVAILABILITYMANAGER_H
#define HDFEATUREAVAILABILITYMANAGER_H

@class NSUUID, HKFeatureAvailabilityRequirementSet, HKObserverSet, NSString;
@protocol HDFeatureSettingsManagerObserver, HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDRegionAvailabilityProvidingDelegate, HDRemoteFeatureAvailabilityProvidingDelegate, HDFeatureAvailabilityExtension, OS_os_log, HDPairedDeviceCapabilityProviding, HDPairedFeatureAttributesProviding, HDRegionAvailabilityProviding, HDRemoteFeatureAvailabilityProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDFeatureAvailabilityOnboardingEligibilityDeterminer.h"

@interface HDFeatureAvailabilityManager : NSObject <HDFeatureSettingsManagerObserver, HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDRegionAvailabilityProvidingDelegate, HDRemoteFeatureAvailabilityProvidingDelegate, HDFeatureAvailabilityExtension>

 {
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    id<HDPairedFeatureAttributesProviding> *_pairedFeatureAttributesProvider;
    id<HDRegionAvailabilityProviding> *_regionAvailabilityProvider;
    id<HDRemoteFeatureAvailabilityProviding> *_remoteAvailabilityProvider;
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
    HKFeatureAvailabilityRequirementSet *_requirements;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSInteger currentOnboardingVersion; // ivar: _currentOnboardingVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)highestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 availabilityRequirements:(id)arg2 currentOnboardingVersion:(NSInteger)arg3 pairedDeviceCapability:(id)arg4 pairedDeviceCapabilityProvider:(id)arg5 pairedFeatureAttributesProvider:(id)arg6 regionAvailabilityProvider:(id)arg7 remoteAvailabilityProvider:(id)arg8 loggingCategory:(id)arg9 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 availabilityRequirements:(id)arg2 currentOnboardingVersion:(NSInteger)arg3 pairedDeviceCapability:(id)arg4 pairedDeviceCapabilityProvider:(id)arg5 pairedFeatureAttributesProvider:(id)arg6 regionAvailabilityProvider:(id)arg7 remoteAvailabilityProvider:(id)arg8 onboardingEligibilityDeterminer:(id)arg9 loggingCategory:(id)arg10 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 loggingCategory:(id)arg3 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 pairedDeviceCapability:(id)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5 pairedDeviceCapabilityProvider:(id)arg6 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 pairedDeviceCapability:(id)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5 pairedDeviceCapabilityProvider:(id)arg6 remoteAvailabilityProvider:(id)arg7 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 pairedDeviceCapability:(id)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5 pairedDeviceCapabilityProvider:(id)arg6 remoteAvailabilityProvider:(id)arg7 availabilityRequirements:(id)arg8 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 pairedDeviceCapability:(id)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5 remoteAvailabilityProvider:(id)arg6 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 pairedDeviceCapability:(id)arg3 regionAvailabilityProvider:(id)arg4 loggingCategory:(id)arg5 remoteAvailabilityProvider:(id)arg6 availabilityRequirements:(id)arg7 ;
-(id)initWithProfile:(id)arg0 featureIdentifier:(id)arg1 currentOnboardingVersion:(NSInteger)arg2 regionAvailabilityProvider:(id)arg3 loggingCategory:(id)arg4 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(void)dealloc;
-(void)featureSettingsManager:(id)arg0 didUpdateSettingsForFeatureIdentifier:(id)arg1 ;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)onboardingCompletionManager:(id)arg0 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)arg1 ;
-(void)pairedDeviceCapabilitiesDidUpdate:(id)arg0 ;
-(void)regionAvailabilityProvidingDidUpdate:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)remoteFeatureAvailabilityProviderDidUpdate:(id)arg0 ;
-(void)removeFeatureSettingValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)resetOnboardingWithCompletion:(id)arg0 ;
-(void)saveOnboardingCompletion:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif