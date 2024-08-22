// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTONBOARDEDBEFORETIMEAGO_H
#define HKFEATUREAVAILABILITYREQUIREMENTONBOARDEDBEFORETIMEAGO_H

@class NSDateComponents, NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingRecordRequirement.h"

@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement>

 {
    NSDateComponents *_dateComponents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 daysBeforeCurrentDate:(NSInteger)arg1 ;
-(id)isSatisfiedWithOnboardingRecord:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif