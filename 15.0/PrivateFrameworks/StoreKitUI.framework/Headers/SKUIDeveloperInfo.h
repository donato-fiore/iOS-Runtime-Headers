// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIDEVELOPERINFO_H
#define SKUIDEVELOPERINFO_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIDeveloperInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSString *ECommerceRegistrationIdentifier; // ivar: _ecommerceRegistrationIdentifier
@property (copy, nonatomic) NSString *ISOCountryCode; // ivar: _isoCountryCode
@property (copy, nonatomic) NSArray *addressLines; // ivar: _addressLines
@property (copy, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (copy, nonatomic) NSString *businessRegistrationIdentifier; // ivar: _businessRegistrationIdentifier
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *locality; // ivar: _locality
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (copy, nonatomic) NSString *tradeName; // ivar: _tradeName
@property (copy, nonatomic) NSString *tradeRepresentativeName; // ivar: _tradeRepresentativeName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedAddressString;
-(id)initWithDeveloperDictionary:(id)arg0 ;


@end


#endif