// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMOCKPAYMENTTRANSACTIONMANAGER_H
#define FCMOCKPAYMENTTRANSACTIONMANAGER_H

@class NSString, NSError;
@protocol FCPaymentTransactionManager, FCPaymentTransactionManagerDelegate;

#import <Foundation/Foundation.h>


@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager>



@property (weak, nonatomic) NSObject<FCPaymentTransactionManagerDelegate> *delegate; // ivar: delegate
@property (copy, nonatomic) NSString *productID; // ivar: _productID
@property (copy, nonatomic) NSError *transactionError; // ivar: _transactionError
@property (nonatomic) NSUInteger transactionExpectation; // ivar: _transactionExpectation
@property (nonatomic) NSInteger transactionState; // ivar: _transactionState


+(id)mockPaymentTransactionWithFailForProductID:(id)arg0 transactionState:(NSInteger)arg1 transactionError:(id)arg2 ;
+(id)mockPaymentTransactionWithSuccessForProductID:(id)arg0 ;
-(BOOL)canMakePayments;
-(void)registerOngoingPurchaseTransactionsWithEntry:(id)arg0 ;
-(void)startPurchaseWithTagID:(id)arg0 productID:(id)arg1 purchaseID:(id)arg2 bundleID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 ;


@end


#endif