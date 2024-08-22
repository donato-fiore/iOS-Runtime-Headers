// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPURCHASEQUEUEBATCHLIST_H
#define AMSPURCHASEQUEUEBATCHLIST_H


#import <Foundation/Foundation.h>

#import "AMSThreadSafeObject.h"

@interface AMSPurchaseQueueBatchList : NSObject

@property (retain, nonatomic) AMSThreadSafeObject *backingArray; // ivar: _backingArray


-(NSUInteger)count;
-(id)batchForPurchase:(id)arg0 ;
-(id)init;
-(id)nextPurchase;
-(void)appendBatch:(id)arg0 ;
-(void)popBatch:(id)arg0 ;


@end


#endif