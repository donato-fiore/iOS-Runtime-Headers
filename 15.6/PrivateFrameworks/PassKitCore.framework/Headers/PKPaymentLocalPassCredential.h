// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTLOCALPASSCREDENTIAL_H
#define PKPAYMENTLOCALPASSCREDENTIAL_H

@class NSString;


#import "PKPaymentCredential.h"
#import "PKPaymentPass.h"

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;


-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif