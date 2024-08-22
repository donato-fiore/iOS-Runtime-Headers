// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTDEVICEREGISTRATIONDATA_H
#define PKPEERPAYMENTDEVICEREGISTRATIONDATA_H

@class NSString, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *authorizationHeader; // ivar: _authorizationHeader
@property (copy, nonatomic) NSString *companionSerialNumber; // ivar: _companionSerialNumber
@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (copy, nonatomic) NSDictionary *enrollmentData; // ivar: _enrollmentData
@property (copy, nonatomic) NSString *signedAuthToken; // ivar: _signedAuthToken
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature; // ivar: _signedEnrollmentDataSignature


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif