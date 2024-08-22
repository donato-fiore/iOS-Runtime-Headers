// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMGENERATOR_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMGENERATOR_H


#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject



-(id)_feeLineItemsForFees:(id)arg0 ;
-(id)_foreignExchangeLineItemsForExchangeInfo:(id)arg0 ;
-(id)_lineItemsForPeerPaymentTransaction:(id)arg0 transactionSourceCollection:(id)arg1 ;
-(id)_lineItemsForPurchaseTransaction:(id)arg0 transactionSourceCollection:(id)arg1 associatedReceipt:(id)arg2 ;
-(id)_lineItemsForWithdrawalTransaction:(id)arg0 transactionSourceCollection:(id)arg1 ;
-(id)_primaryFundingSourceLineItemForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 ;
-(id)_rewardsLineItemsForRewards:(id)arg0 currencyCode:(id)arg1 ;
-(id)_secondaryFundingSourceLineItemForTransaction:(id)arg0 ;
-(id)_subtotalLineItemForTransaction:(id)arg0 ;
-(id)_totalPaidLineItemForTransaction:(id)arg0 isUnqualified:(BOOL)arg1 ;
-(id)_totalReceivedLineItemForTransaction:(id)arg0 ;
-(id)_totalSentLineItemForTransaction:(id)arg0 ;
-(id)_totalTransferredItemForTransaction:(id)arg0 ;
-(id)lineItemsForInstallmentPlan:(id)arg0 ;
-(id)lineItemsForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 associatedTransaction:(id)arg2 associatedReceipt:(id)arg3 ;


@end


#endif