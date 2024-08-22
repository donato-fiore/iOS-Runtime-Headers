// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTNOTAGEGATEDFORUSERDEFAULTSKEY_H
#define HKFEATUREAVAILABILITYREQUIREMENTNOTAGEGATEDFORUSERDEFAULTSKEY_H



#import "HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator.h"

@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator



+(id)requirementIdentifier;
-(BOOL)defaultValueWhenKeyIsMissing;
-(BOOL)isSatisfiedForBoolValue:(BOOL)arg0 ;
-(id)initWithUserDefaultsKey:(id)arg0 ;
-(id)requirementDescription;
-(id)whichUserDefaultsDataSourceInDataSource:(id)arg0 ;


@end


#endif