// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDEVICEREGISTRATIONDATA_H
#define PKPAYMENTDEVICEREGISTRATIONDATA_H

@class NSArray, NSString, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *additionalDeviceSerialNumbers; // ivar: _additionalDeviceSerialNumbers
@property (copy, nonatomic) NSString *authorizationHeader; // ivar: _authorizationHeader
@property (copy, nonatomic) NSString *companionSerialNumber; // ivar: _companionSerialNumber
@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (copy, nonatomic) NSString *deviceSerialNumber; // ivar: _deviceSerialNumber
@property (readonly, nonatomic) NSArray *legacyStateInformation; // ivar: _legacyStateInformation
@property (copy, nonatomic) NSData *platformData; // ivar: _platformData
@property (copy, nonatomic) NSData *platformDataSignature; // ivar: _platformDataSignature
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (copy, nonatomic) NSDictionary *secureElementStateInformation; // ivar: _secureElementStateInformation
@property (copy, nonatomic) NSString *signedAuthToken; // ivar: _signedAuthToken


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif