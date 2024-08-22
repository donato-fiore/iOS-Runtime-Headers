// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYISSUPPORTEDONACTIVEREMOTEDEVICE_H
#define HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYISSUPPORTEDONACTIVEREMOTEDEVICE_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement>

 {
    BOOL _isSupportedIfCountryListMissing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 isSupportedIfCountryListMissing:(BOOL)arg1 ;
-(id)isSatisfiedWithOnboardingEligibility:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif