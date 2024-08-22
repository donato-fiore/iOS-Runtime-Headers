// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKALLOWEDCOUNTRIES_H
#define HKALLOWEDCOUNTRIES_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKCountrySet.h"

@interface HKAllowedCountries : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet; // ivar: _localCountrySet
@property (readonly, copy, nonatomic) HKCountrySet *remoteCountrySet; // ivar: _remoteCountrySet
@property (readonly, nonatomic) NSInteger remoteState; // ivar: _remoteState
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)allowedCountriesInIntersectionOfLocalAndRemoteSetPendingSync:(id)arg0 ;
+(id)allowedCountriesInIntersectionOfLocalSet:(id)arg0 remoteSet:(id)arg1 ;
+(id)allowedCountriesInLocalSet:(id)arg0 ;
+(id)capabilityNotSupportedOnRemoteDevice:(id)arg0 ;
+(id)noRemoteDevice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)ineligibilityReasonsForOnboardingCountryCode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif