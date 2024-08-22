// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTADDRESS_H
#define RTADDRESS_H

@class NSString, NSArray, NSDate, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTAddress : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (readonly, copy, nonatomic) NSString *administrativeAreaCode; // ivar: _administrativeAreaCode
@property (readonly, nonatomic) NSArray *areasOfInterest; // ivar: _areasOfInterest
@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *inlandWater; // ivar: _inlandWater
@property (readonly, nonatomic) BOOL isIsland; // ivar: _isIsland
@property (readonly, copy, nonatomic) NSString *iso3166CountryCode; // ivar: _iso3166CountryCode
@property (readonly, copy, nonatomic) NSString *iso3166SubdivisionCode; // ivar: _iso3166SubdivisionCode
@property (readonly, copy, nonatomic) NSString *locality; // ivar: _locality
@property (readonly, nonatomic) NSString *mergedThoroughfare;
@property (readonly, copy, nonatomic) NSString *ocean; // ivar: _ocean
@property (readonly, copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (readonly, copy, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (readonly, nonatomic) NSArray *subPremises; // ivar: _subPremises
@property (readonly, copy, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (readonly, copy, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 subPremises:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(BOOL)arg15 creationDate:(id)arg16 expirationDate:(id)arg17 iso3166CountryCode:(id)arg18 iso3166SubdivisionCode:(id)arg19 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif