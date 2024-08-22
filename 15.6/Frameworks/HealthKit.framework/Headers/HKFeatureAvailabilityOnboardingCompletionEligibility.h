// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYONBOARDINGCOMPLETIONELIGIBILITY_H
#define HKFEATUREAVAILABILITYONBOARDINGCOMPLETIONELIGIBILITY_H


#import <Foundation/Foundation.h>

#import "HKOnboardingCompletion.h"
#import "HKFeatureAvailabilityOnboardingEligibility.h"

@interface HKFeatureAvailabilityOnboardingCompletionEligibility : NSObject

@property (readonly, copy, nonatomic) HKOnboardingCompletion *onboardingCompletion; // ivar: _onboardingCompletion
@property (readonly, copy, nonatomic) HKFeatureAvailabilityOnboardingEligibility *onboardingEligibility; // ivar: _onboardingEligibility


-(id)initWithOnboardingCompletion:(id)arg0 onboardingEligibility:(id)arg1 ;


@end


#endif