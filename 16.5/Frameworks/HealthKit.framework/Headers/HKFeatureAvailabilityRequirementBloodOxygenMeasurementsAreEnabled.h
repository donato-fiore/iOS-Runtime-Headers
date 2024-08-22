// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTBLOODOXYGENMEASUREMENTSAREENABLED_H
#define HKFEATUREAVAILABILITYREQUIREMENTBLOODOXYGENMEASUREMENTSAREENABLED_H



#import "HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator.h"

@interface HKFeatureAvailabilityRequirementBloodOxygenMeasurementsAreEnabled : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator



+(id)requirementIdentifier;
-(BOOL)defaultValueWhenKeyIsMissing;
-(BOOL)isSatisfiedForBoolValue:(BOOL)arg0 ;
-(id)init;
-(id)requirementDescription;
-(id)whichUserDefaultsDataSourceInDataSource:(id)arg0 ;


@end


#endif