// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTPREREQUISITEFEATURESAREON_H
#define HKFEATUREAVAILABILITYREQUIREMENTPREREQUISITEFEATURESAREON_H

@class NSString, NSArray;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityBaseRequirement.h"

@interface HKFeatureAvailabilityRequirementPrerequisiteFeaturesAreOn : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *prerequisiteFeatureSettings; // ivar: _prerequisiteFeatureSettings
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrerequisiteFeatureSettings:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif