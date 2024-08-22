// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTHEARTRATEISENABLEDINPRIVACY_H
#define HKFEATUREAVAILABILITYREQUIREMENTHEARTRATEISENABLEDINPRIVACY_H



#import "HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator.h"

@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator



+(id)requirementIdentifier;
-(BOOL)defaultValueWhenKeyIsMissing;
-(BOOL)isSatisfiedForBoolValue:(BOOL)arg0 ;
-(id)init;
-(id)requirementDescription;
-(id)whichUserDefaultsDataSourceInDataSource:(id)arg0 ;


@end


#endif