// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKCONTACTLESSPAYMENTSESSIONMANAGERTRANSACTIONCONTEXT_H
#define NPKCONTACTLESSPAYMENTSESSIONMANAGERTRANSACTIONCONTEXT_H

@class NSArray, PKPassTile, NSString, PKPaymentTransaction, STS18013ReaderAuthInfo, STSTransaction18013Request, PKPass;

#import <Foundation/Foundation.h>

#import "NPKPaymentBarcode.h"

@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject

@property (nonatomic) NSUInteger action; // ivar: _action
@property (nonatomic) BOOL authenticationRequested; // ivar: _authenticationRequested
@property (retain, nonatomic) NSArray *displayablePassItems; // ivar: _displayablePassItems
@property (retain, nonatomic) PKPassTile *passTile; // ivar: _passTile
@property (retain, nonatomic) NPKPaymentBarcode *paymentBarcode; // ivar: _paymentBarcode
@property (retain, nonatomic) NSString *paymentMethodDescription; // ivar: _paymentMethodDescription
@property (retain, nonatomic) PKPaymentTransaction *paymentTransaction; // ivar: _paymentTransaction
@property (retain, nonatomic) STS18013ReaderAuthInfo *readerAuthInfo; // ivar: _readerAuthInfo
@property (retain, nonatomic) STSTransaction18013Request *releaseDataRequest; // ivar: _releaseDataRequest
@property (nonatomic) NSUInteger releaseDataStatus; // ivar: _releaseDataStatus
@property (retain, nonatomic) NSString *transactionDescription; // ivar: _transactionDescription
@property (retain, nonatomic) PKPass *transactionPass; // ivar: _transactionPass
@property (nonatomic) NSUInteger transactionStatus; // ivar: _transactionStatus
@property (nonatomic) NSUInteger transactionType; // ivar: _transactionType
@property (retain, nonatomic) PKPass *valueAddedServicePass; // ivar: _valueAddedServicePass


+(id)_NPKTransactionContextActionDescriptionForNPKTransactionContextAction:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(void)forceToTransitTypeTransactionWithTransactionStatus:(NSUInteger)arg0 ;
-(void)updateWithConcreteTransactions:(id)arg0 ephemeralTransaction:(id)arg1 updatedPassTransitItems:(id)arg2 paymentApplication:(id)arg3 ;


@end


#endif