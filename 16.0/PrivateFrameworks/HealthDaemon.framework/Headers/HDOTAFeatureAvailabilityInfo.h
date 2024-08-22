// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDOTAFEATUREAVAILABILITYINFO_H
#define HDOTAFEATUREAVAILABILITYINFO_H

@class HKCountrySet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDOTAFeatureAvailabilityInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKCountrySet *allowedCountrySet; // ivar: _allowedCountrySet


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAllowedCountrySet:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif