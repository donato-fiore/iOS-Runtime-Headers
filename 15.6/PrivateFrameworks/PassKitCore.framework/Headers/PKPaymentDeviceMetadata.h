// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTDEVICEMETADATA_H
#define PKPAYMENTDEVICEMETADATA_H

@class NSString, CLLocation, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, weak, nonatomic) NSString *extensiveLatitude;
@property (readonly, weak, nonatomic) NSString *extensiveLongitude;
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // ivar: _primaryJSBLSequenceCounter
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSString *signedPhoneNumber; // ivar: _signedPhoneNumber
@property (copy, nonatomic) NSString *signedPhoneNumberVersion; // ivar: _signedPhoneNumberVersion
@property (copy, nonatomic) NSNumber *uniqueChipIdentifier; // ivar: _uniqueChipIdentifier
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier; // ivar: _uniqueDeviceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentDeviceMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif