// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICVALUECACHEMANAGER_H
#define HFCHARACTERISTICVALUECACHEMANAGER_H

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFCharacteristicValueCacheManager : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    os_unfair_lock_s _cacheLock;
    os_unfair_lock_s _unprocessedTransctionLock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *transactionsByActionSetID; // ivar: _transactionsByActionSetID
@property (retain, nonatomic) NSMutableDictionary *transactionsByCharacteristicID; // ivar: _transactionsByCharacteristicID
@property (retain, nonatomic) NSMutableOrderedSet *unprocessedAddedTransactions; // ivar: _unprocessedAddedTransactions
@property (retain, nonatomic) NSMutableOrderedSet *unprocessedRemovedTransactions; // ivar: _unprocessedRemovedTransactions


-(BOOL)_transaction:(id)arg0 isWritingCharacteristic:(id)arg1 ;
-(BOOL)_transaction:(id)arg0 isWritingCharacteristic:(id)arg1 allowingActions:(BOOL)arg2 ;
-(BOOL)containsTransactionsExecutingActionSet:(id)arg0 ;
-(BOOL)containsTransactionsReadingCharacteristic:(id)arg0 filterBlock:(id)arg1 ;
-(BOOL)containsTransactionsWritingCharacteristic:(id)arg0 ;
-(id)_perfomUpdatedCacheRead:(id)arg0 ;
-(id)_performLock:(struct os_unfair_lock_s *)arg0 block:(id)arg1 ;
-(id)cachedValueForCharacteristic:(id)arg0 ;
-(id)init;
-(id)transactionsExecutingActionSet:(id)arg0 ;
-(id)transactionsReadingCharacteristic:(id)arg0 filterBlock:(id)arg1 ;
-(id)transactionsWritingCharacteristic:(id)arg0 ;
-(void)_enumerateTransactionsRemovingFailingItems:(id)arg0 block:(id)arg1 ;
-(void)_locked_updateWithAddedTransaction:(id)arg0 ;
-(void)_locked_updateWithRemovedTransaction:(id)arg0 ;
-(void)transactionAdded:(id)arg0 ;
-(void)transactionRemoved:(id)arg0 ;


@end


#endif