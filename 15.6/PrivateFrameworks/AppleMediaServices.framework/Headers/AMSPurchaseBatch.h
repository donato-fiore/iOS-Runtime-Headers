// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPURCHASEBATCH_H
#define AMSPURCHASEBATCH_H

@class NSLock, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "AMSLazyPromise.h"

@interface AMSPurchaseBatch : NSObject

@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, nonatomic) AMSLazyPromise *promise; // ivar: _promise
@property (readonly, nonatomic) NSMutableDictionary *purchaseMap; // ivar: _purchaseMap
@property (readonly, nonatomic) NSMutableArray *purchases; // ivar: _purchases
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results


-(BOOL)finishPurchase:(id)arg0 withError:(id)arg1 ;
-(BOOL)finishPurchase:(id)arg0 withResult:(id)arg1 ;
-(id)initWithPurchases:(id)arg0 weakPromise:(id)arg1 ;
-(id)nextPurchase;
-(id)purchaseForPurchaseId:(id)arg0 ;


@end


#endif