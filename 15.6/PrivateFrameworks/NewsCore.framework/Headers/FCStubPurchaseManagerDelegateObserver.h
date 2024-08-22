// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSTUBPURCHASEMANAGERDELEGATEOBSERVER_H
#define FCSTUBPURCHASEMANAGERDELEGATEOBSERVER_H

@protocol FCPurchaseManagerDelegate;

#import <Foundation/Foundation.h>


@interface FCStubPurchaseManagerDelegateObserver : NSObject <FCPurchaseManagerDelegate>



@property (copy, nonatomic) id *failedBlock; // ivar: _failedBlock
@property (copy, nonatomic) id *failedWithInvalidReceiptBlock; // ivar: _failedWithInvalidReceiptBlock
@property (copy, nonatomic) id *successBlock; // ivar: _successBlock


-(void)addPurchaseFailedBlock:(id)arg0 ;
-(void)addPurchaseFailedWithInvalidReceiptBlock:(id)arg0 ;
-(void)addPurchaseSuccessBlock:(id)arg0 ;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg0 ongoingPurchaseEntry:(id)arg1 ;
-(void)purchaseFailedWithProductID:(id)arg0 transactionState:(NSInteger)arg1 transactionError:(id)arg2 ongoingPurchaseEntry:(id)arg3 ;
-(void)purchaseSuccessWithProductID:(id)arg0 transaction:(id)arg1 chargeCurrencyCode:(id)arg2 ongoingPurchaseEntry:(id)arg3 ;


@end


#endif