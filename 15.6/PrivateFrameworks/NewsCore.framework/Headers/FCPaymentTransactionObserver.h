// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPAYMENTTRANSACTIONOBSERVER_H
#define FCPAYMENTTRANSACTIONOBSERVER_H

@class NSString;
@protocol SKPaymentTransactionObserver, FCPaymentTransactionObserverDelegate;

#import <Foundation/Foundation.h>


@interface FCPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCPaymentTransactionObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)failedTransaction:(id)arg0 ;
-(void)finishTransaction:(id)arg0 ;
-(void)paymentQueue:(id)arg0 updatedTransactions:(id)arg1 ;


@end


#endif