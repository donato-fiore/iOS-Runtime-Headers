// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFITEMMANAGERBATCHEDDELEGATEADAPTER_H
#define HFITEMMANAGERBATCHEDDELEGATEADAPTER_H

@class NSMutableSet, NAFuture;
@protocol HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>

#import "HFItemManager.h"

@interface HFItemManagerBatchedDelegateAdapter : NSObject

@property (retain, nonatomic) NSMutableSet *batchedItemProviderInvalidationReasons; // ivar: _batchedItemProviderInvalidationReasons
@property (retain, nonatomic) NSMutableSet *batchedItemsToUpdate; // ivar: _batchedItemsToUpdate
@property (nonatomic) SEL batchedSenderSelector; // ivar: _batchedSenderSelector
@property (retain, nonatomic) NAFuture *finishExecutingBatchFuture; // ivar: _finishExecutingBatchFuture
@property (readonly, weak, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) NSObject<HFCharacteristicReadPolicy> *readPolicy; // ivar: _readPolicy
@property (retain, nonatomic) NAFuture *startExecutingBatchFuture; // ivar: _startExecutingBatchFuture
@property (retain, nonatomic) NSMutableSet *uncommittedBatchingReasons; // ivar: _uncommittedBatchingReasons


-(id)_itemProvidersToReloadForInvalidationReasons:(id)arg0 ;
-(id)commitBatchWithReason:(id)arg0 senderSelector:(SEL)arg1 ;
-(id)initWithItemManager:(id)arg0 readPolicy:(id)arg1 ;
-(id)requestUpdateForItems:(id)arg0 itemProviderInvalidationReasons:(id)arg1 modifiedHome:(id)arg2 senderSelector:(SEL)arg3 ;
-(void)_executeBatch;
-(void)_reset;
-(void)beginBatchWithReason:(id)arg0 ;


@end


#endif