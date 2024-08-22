// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFEATUREAVAILABILITYONBOARDINGELIGIBILITYDETERMINER_H
#define HDFEATUREAVAILABILITYONBOARDINGELIGIBILITYDETERMINER_H

@class NSString, NSUUID;
@protocol HDPairedDeviceCapabilityProviding, HDPairedFeatureAttributesProviding, HDRegionAvailabilityProviding, HDFeatureDisableAndExpiryProviding, OS_os_log;

#import <Foundation/Foundation.h>


@interface HDFeatureAvailabilityOnboardingEligibilityDeterminer : NSObject {
    NSString *_featureIdentifier;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    id<HDPairedFeatureAttributesProviding> *_pairedFeatureAttributesProvider;
    id<HDRegionAvailabilityProviding> *_regionAvailabilityProvider;
    id<HDFeatureDisableAndExpiryProviding> *_disableAndExpiryProvider;
    NSObject<OS_os_log> *_loggingCategory;
}


@property (nonatomic) NSInteger currentOnboardingVersion; // ivar: _currentOnboardingVersion


// -(id)_onboardingEligibilitiesForOnboardingCompletions:(id)arg0 onboardingEligibilityRetrievalBlock:(id)arg1 error:(unk)arg2  ;
-(id)_onboardingEligibilityForRegionEligibility:(id)arg0 rescindedStatus:(id)arg1 isCapabilitySupported:(id)arg2 ;
-(id)initWithFeatureIdentifier:(id)arg0 currentOnboardingVersion:(NSInteger)arg1 pairedDeviceCapability:(id)arg2 pairedDeviceCapabilityProvider:(id)arg3 regionAvailabilityProvider:(id)arg4 disableAndExpiryProvider:(id)arg5 loggingCategory:(id)arg6 ;
-(id)onboardingEligibilitiesForDevice:(id)arg0 onboardingCompletions:(id)arg1 error:(*id)arg2 ;
-(id)onboardingEligibilitiesForOnboardingCompletions:(id)arg0 error:(*id)arg1 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)onboardingEligibilityForDevice:(id)arg0 countryCode:(id)arg1 error:(*id)arg2 ;


@end


#endif