// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYONBOARDINGELIGIBILITY_H
#define HKFEATUREAVAILABILITYONBOARDINGELIGIBILITY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityOnboardingEligibility : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *countryAvailabilityVersion; // ivar: _countryAvailabilityVersion
@property (readonly, nonatomic) NSUInteger ineligibilityReasons; // ivar: _ineligibilityReasons
@property (readonly, nonatomic) BOOL isEligible;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)onboardedCountrySupportedState;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eligibilityRespectingOverridesForFeatureIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIneligibilityReasons:(NSUInteger)arg0 countryAvailabilityVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif