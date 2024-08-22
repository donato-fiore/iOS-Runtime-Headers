// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPENDINGPAYMENTTRANSACTION_H
#define PKPENDINGPAYMENTTRANSACTION_H


#import <Foundation/Foundation.h>

#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"
#import "PKPaymentTransaction.h"

@interface PKPendingPaymentTransaction : NSObject

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(id)initWithTransaction:(id)arg0 pass:(id)arg1 paymentApplication:(id)arg2 ;


@end


#endif