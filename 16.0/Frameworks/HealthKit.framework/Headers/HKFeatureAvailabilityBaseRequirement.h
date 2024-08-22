// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYBASEREQUIREMENT_H
#define HKFEATUREAVAILABILITYBASEREQUIREMENT_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityBaseRequirement : NSObject <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(id)_hk_featureAvailabilityRequirements;
-(id)initWithCoder:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif