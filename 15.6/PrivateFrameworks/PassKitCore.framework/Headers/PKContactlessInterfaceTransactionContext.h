// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTACTLESSINTERFACETRANSACTIONCONTEXT_H
#define PKCONTACTLESSINTERFACETRANSACTIONCONTEXT_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "PKExpressTransactionState.h"
#import "PKFelicaAppletHistory.h"
#import "PKPaymentApplication.h"
#import "PKPaymentPass.h"
#import "PKPaymentTransaction.h"
#import "PKTransitAppletHistory.h"

@interface PKContactlessInterfaceTransactionContext : NSObject

@property (retain, nonatomic) NSString *appletIdentifier; // ivar: _appletIdentifier
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) PKExpressTransactionState *expressState; // ivar: _expressState
@property (readonly, nonatomic) PKFelicaAppletHistory *felicaHistory;
@property (nonatomic, getter=isIncompatible) BOOL incompatible; // ivar: _incompatible
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (nonatomic) BOOL success; // ivar: _success
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (retain, nonatomic) PKTransitAppletHistory *transitHistory; // ivar: _transitHistory
@property (retain, nonatomic) NSArray *valueAddedServicePasses; // ivar: _valueAddedServicePasses
@property (retain, nonatomic) NSArray *valueAddedServiceTransactions; // ivar: _valueAddedServiceTransactions




@end


#endif