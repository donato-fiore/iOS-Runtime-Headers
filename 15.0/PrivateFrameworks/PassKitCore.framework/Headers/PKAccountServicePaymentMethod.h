// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTSERVICEPAYMENTMETHOD_H
#define PKACCOUNTSERVICEPAYMENTMETHOD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKBankAccountInformation.h"
#import "PKCurrencyAmount.h"

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>



@property (copy, nonatomic) PKBankAccountInformation *bankAccountInformation; // ivar: _bankAccountInformation
@property (nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment; // ivar: _deviceSupportsPeerPaymentAccountPayment
@property (copy, nonatomic) PKCurrencyAmount *peerPaymentBalance; // ivar: _peerPaymentBalance


+(BOOL)supportsSecureCoding;
-(id)initWithBankAccountInformation:(id)arg0 peerPaymentBalance:(id)arg1 deviceSupportsPeerPaymentAccountPayment:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif