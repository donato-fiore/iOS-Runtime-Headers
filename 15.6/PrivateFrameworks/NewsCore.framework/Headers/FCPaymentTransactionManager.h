// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPAYMENTTRANSACTIONMANAGER_H
#define FCPAYMENTTRANSACTIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager, FCPaymentTransactionManagerDelegate;

#import <Foundation/Foundation.h>

#import "FCPaymentTransactionObserver.h"

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCPaymentTransactionManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *paymentQueueByProductID; // ivar: _paymentQueueByProductID
@property (retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver; // ivar: _paymentTransactionObserver
@property (readonly) Class superclass;


-(BOOL)canMakePayments;
-(id)createPaymentQueueWithProductID:(id)arg0 purchaseID:(id)arg1 bundleID:(id)arg2 webAccessOptIn:(BOOL)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 ;
-(id)init;
-(void)paymentTransactionObserver:(id)arg0 didFailPurchaseTransactionWithTransaction:(id)arg1 ;
-(void)paymentTransactionObserver:(id)arg0 didFinishPurchaseTransaction:(id)arg1 ;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg0 ;
-(void)startPurchaseWithTagID:(id)arg0 productID:(id)arg1 purchaseID:(id)arg2 bundleID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;


@end


#endif