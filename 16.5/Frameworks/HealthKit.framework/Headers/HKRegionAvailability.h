// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKREGIONAVAILABILITY_H
#define HKREGIONAVAILABILITY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKAllowedCountries.h"

@interface HKRegionAvailability : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKAllowedCountries *allowedCountries; // ivar: _allowedCountries
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *prettyPrintedDescription;
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)allowedInSomeCountries:(id)arg0 ;
+(id)anyCountryAvailability;
+(id)uncheckedAvailability;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)ineligibilityReasonsForOnboardingCountryCode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif