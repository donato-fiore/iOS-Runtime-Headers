// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPOSTALADDRESSCOMPONENTS_H
#define SGPOSTALADDRESSCOMPONENTS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *city; // ivar: _city
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) NSString *street; // ivar: _street
@property (readonly, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (readonly, nonatomic) NSString *subLocality; // ivar: _subLocality


+(BOOL)supportsSecureCoding;
+(id)components:(id)arg0 city:(id)arg1 state:(id)arg2 postalCode:(id)arg3 country:(id)arg4 ;
+(id)components:(id)arg0 subLocality:(id)arg1 city:(id)arg2 subAdministrativeArea:(id)arg3 state:(id)arg4 postalCode:(id)arg5 country:(id)arg6 isoCountryCode:(id)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPostalAddressComponents:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreet:(id)arg0 subLocality:(id)arg1 city:(id)arg2 subAdministrativeArea:(id)arg3 state:(id)arg4 postalCode:(id)arg5 country:(id)arg6 isoCountryCode:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif