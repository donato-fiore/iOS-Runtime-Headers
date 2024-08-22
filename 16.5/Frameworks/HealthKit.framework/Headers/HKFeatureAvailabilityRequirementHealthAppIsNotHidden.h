// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTHEALTHAPPISNOTHIDDEN_H
#define HKFEATUREAVAILABILITYREQUIREMENTHEALTHAPPISNOTHIDDEN_H



#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityRequirementHealthAppIsNotHidden : HKFeatureAvailabilityBaseRequirement



+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)requirementDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif