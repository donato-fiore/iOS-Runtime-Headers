// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYONBOARDINGELIGIBILITYREQUIREMENT_H
#define HKFEATUREAVAILABILITYONBOARDINGELIGIBILITYREQUIREMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityOnboardingEligibilityRequirement : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)isSatisfiedWithOnboardingEligibility:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif