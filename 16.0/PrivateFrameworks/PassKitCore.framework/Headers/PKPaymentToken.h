// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTOKEN_H
#define PKPAYMENTTOKEN_H

@class NSData, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentMethod.h"

@interface PKPaymentToken : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *paymentData; // ivar: _paymentData
@property (copy, nonatomic) NSString *paymentInstrumentName; // ivar: _paymentInstrumentName
@property (retain, nonatomic) PKPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (copy, nonatomic) NSString *paymentNetwork; // ivar: _paymentNetwork
@property (retain, nonatomic) NSURL *redeemURL; // ivar: _redeemURL
@property (copy, nonatomic) NSString *retryNonce; // ivar: _retryNonce
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)paymentTokenWithProtobuf:(id)arg0 ;
+(id)simulatedTokenForNetwork:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif