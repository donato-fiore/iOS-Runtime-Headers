// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPOSTALADDRESS_H
#define CNPOSTALADDRESS_H

@class NSString;
@protocol CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *ISOCountryCode; // ivar: _ISOCountryCode
@property (copy, nonatomic) NSString *city; // ivar: _city
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formattedAddress; // ivar: _formattedAddress
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *street; // ivar: _street
@property (copy, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (copy, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg0 ;
+(id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg0 ;
+(id)postalAddressWithDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)addressBookDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif