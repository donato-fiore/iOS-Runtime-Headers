// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTLOCALAPPLETSUBCREDENTIALPASSCREDENTIAL_H
#define PKPAYMENTLOCALAPPLETSUBCREDENTIALPASSCREDENTIAL_H



#import "PKPaymentCredential.h"
#import "PKAppletSubcredential.h"
#import "PKPaymentPass.h"

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAppletSubcredential *credentialToShare; // ivar: _credentialToShare
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass


-(id)initWithPaymentPass:(id)arg0 credentialToShare:(id)arg1 ;


@end


#endif