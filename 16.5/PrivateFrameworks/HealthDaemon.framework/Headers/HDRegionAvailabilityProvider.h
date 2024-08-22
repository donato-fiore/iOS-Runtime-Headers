// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDREGIONAVAILABILITYPROVIDER_H
#define HDREGIONAVAILABILITYPROVIDER_H

@class HKRegionAvailability, NSString;
@protocol HDRegionAvailabilityProviding;

#import <Foundation/Foundation.h>


@interface HDRegionAvailabilityProvider : NSObject <HDRegionAvailabilityProviding>

 {
    HKRegionAvailability *_regionAvailability;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)anyCountryAvailability;
+(id)uncheckedAvailability;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 device:(id)arg1 ;
-(id)regionAvailability;
-(id)regionAvailabilityForDevice:(id)arg0 ;


@end


#endif