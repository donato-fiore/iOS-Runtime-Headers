// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTNOTINSTOREDEMOMODE_H
#define HKFEATUREAVAILABILITYREQUIREMENTNOTINSTOREDEMOMODE_H



#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : HKFeatureAvailabilityBaseRequirement



+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)requirementDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif