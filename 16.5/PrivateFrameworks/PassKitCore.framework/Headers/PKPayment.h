// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENT_H
#define PKPAYMENT_H

@class NSMutableDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKContact.h"
#import "PKShippingMethod.h"
#import "PKPaymentToken.h"

@interface PKPayment : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *authKitAuthenticationResults; // ivar: _authKitAuthenticationResults
@property (readonly, nonatomic) *void billingAddress;
@property (retain, nonatomic) PKContact *billingContact; // ivar: _billingContact
@property (nonatomic) NSInteger biometricAuthorizationAttempts; // ivar: _biometricAuthorizationAttempts
@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (copy, nonatomic) NSString *installmentAuthorizationToken; // ivar: _installmentAuthorizationToken
@property (readonly, nonatomic) *void shippingAddress;
@property (retain, nonatomic) PKContact *shippingContact; // ivar: _shippingContact
@property (retain, nonatomic) PKShippingMethod *shippingMethod; // ivar: _shippingMethod
@property (retain, nonatomic) PKPaymentToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)paymentWithProtobuf:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif