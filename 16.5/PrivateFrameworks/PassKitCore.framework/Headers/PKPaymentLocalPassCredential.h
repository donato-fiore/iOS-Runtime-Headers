// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTLOCALPASSCREDENTIAL_H
#define PKPAYMENTLOCALPASSCREDENTIAL_H

@class NSString;


#import "PKPaymentCredential.h"
#import "PKPaymentPass.h"

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property (nonatomic) BOOL suppressSuperEasyProvisioning; // ivar: _suppressSuperEasyProvisioning


-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsSuperEasyProvisioning;
-(NSUInteger)hash;
-(id)description;
-(id)detailDescription;
-(id)init;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif