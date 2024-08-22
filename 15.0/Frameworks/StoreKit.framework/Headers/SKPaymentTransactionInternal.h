// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAYMENTTRANSACTIONINTERNAL_H
#define SKPAYMENTTRANSACTIONINTERNAL_H

@class NSString, NSArray, NSError, NSDate, NSData;

#import <Foundation/Foundation.h>

#import "SKPaymentTransaction.h"
#import "SKPayment.h"

@interface SKPaymentTransactionInternal : NSObject {
    NSString *_uuid;
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    NSInteger _transactionState;
}




-(id)init;


@end


#endif