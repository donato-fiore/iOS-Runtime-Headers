// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTNOTINSTOREDEMOMODE_H
#define HKFEATUREAVAILABILITYREQUIREMENTNOTINSTOREDEMOMODE_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : NSObject <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif