// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTWRISTDETECTIONISENABLEDFORACTIVEWATCH_H
#define HKFEATUREAVAILABILITYREQUIREMENTWRISTDETECTIONISENABLEDFORACTIVEWATCH_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementWristDetectionIsEnabledForActiveWatch : NSObject <HKObservableFeatureAvailabilityRequirement>



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
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif