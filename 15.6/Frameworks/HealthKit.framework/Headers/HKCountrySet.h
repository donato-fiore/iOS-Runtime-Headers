// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCOUNTRYSET_H
#define HKCOUNTRYSET_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCountrySet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allCountryCodes;
@property (readonly, nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSInteger contentVersion; // ivar: _contentVersion
@property (readonly, copy, nonatomic) NSArray *countryBitmasks; // ivar: _countryBitmasks
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;


+(BOOL)supportsSecureCoding;
+(NSInteger)isRegionCodeFound:(id)arg0 availabilityWatch:(id)arg1 availabilityPhone:(id)arg2 ;
+(id)bitmaskPathForCountryCode:(id)arg0 ;
+(id)countryCodeForBitmaskPath:(id)arg0 ;
+(id)countryCodesForCountryBitmasks:(id)arg0 ;
+(id)countrySetWithPlistURL:(id)arg0 error:(*id)arg1 ;
+(id)emptyCountrySet;
+(id)regionCodesWithPlistAtURL:(id)arg0 error:(*id)arg1 ;
+(id)regionsWithPlistAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsCountryCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countrySetByAddingCountriesInSet:(id)arg0 ;
-(id)countrySetByIntersectingCountriesInSet:(id)arg0 ;
-(id)countrySetByRemovingCountriesInSet:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCountryBitmasks:(id)arg0 compatibilityVersion:(NSInteger)arg1 contentVersion:(NSInteger)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSupportedCountryCodes:(id)arg0 contentVersion:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif