// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAYMENTTRANSACTION_H
#define SKPAYMENTTRANSACTION_H

@class NSString, NSArray, NSError, NSDate, NSData;

#import <Foundation/Foundation.h>

#import "SKPaymentTransaction.h"
#import "SKPayment.h"

@interface SKPaymentTransaction : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSString *_transactionIdentifier;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *matchingIdentifier;
@property (readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property (readonly, nonatomic) SKPayment *payment;
@property (readonly, nonatomic) NSDate *transactionDate;
@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSData *transactionReceipt;
@property (readonly, nonatomic) NSInteger transactionState;


-(BOOL)canMergeWithTransaction:(id)arg0 ;
-(BOOL)mergeWithServerTransaction:(id)arg0 ;
-(BOOL)mergeWithTransaction:(id)arg0 ;
-(id)UUID;
-(id)copyXPCEncoding;
-(id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg0 ;
-(id)init;
-(id)initWithPayment:(id)arg0 ;
-(id)initWithServerTransaction:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_setTemporaryIdentifier:(id)arg0 ;


@end


#endif