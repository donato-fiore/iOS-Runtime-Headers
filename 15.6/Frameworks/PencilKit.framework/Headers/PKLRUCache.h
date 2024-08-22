// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKLRUCACHE_H
#define PKLRUCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "PKLRUCacheItem.h"

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    NSUInteger _currentCost;
    os_unfair_lock_s _lock;
    NSUInteger _totalCostLimit;
    NSInteger _freeItemCount;
}




-(id)init;
-(void)dealloc;


@end


#endif