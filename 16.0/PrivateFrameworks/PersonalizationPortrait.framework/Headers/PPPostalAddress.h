// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPOSTALADDRESS_H
#define PPPOSTALADDRESS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) NSString *locality; // ivar: _locality
@property (readonly, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (readonly, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (readonly, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (readonly, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare


+(BOOL)supportsSecureCoding;
+(id)normalizeAddressString:(id)arg0 ;
+(id)postalAddressWithThoroughfare:(id)arg0 subThoroughfare:(id)arg1 locality:(id)arg2 subLocality:(id)arg3 administrativeArea:(id)arg4 subAdministrativeArea:(id)arg5 postalCode:(id)arg6 country:(id)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPostalAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)_countryStringWithCountry:(id)arg0 isoCode:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactsPostalAddress:(id)arg0 ;
-(id)initWithFoundInAppsPostalAddress:(id)arg0 ;
-(id)initWithThoroughfare:(id)arg0 subThoroughfare:(id)arg1 locality:(id)arg2 subLocality:(id)arg3 administrativeArea:(id)arg4 subAdministrativeArea:(id)arg5 postalCode:(id)arg6 country:(id)arg7 ;
-(id)singleLineNormalizedAddressString;
-(id)toCNPostalAddress;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif