// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMEMORYCACHE_H
#define IMMEMORYCACHE_H

@class NSMutableDictionary, NSMutableArray, NSString, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMMemoryCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger countLimit; // ivar: _countLimit
@property (nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) BOOL evictsItemsWithDiscardedContent; // ivar: _evictsItemsWithDiscardedContent
@property (retain, nonatomic) NSMutableDictionary *items; // ivar: _items
@property (retain, nonatomic) NSMutableArray *itemsArray; // ivar: _itemsArray
@property (nonatomic) CGFloat lastCheckTime; // ivar: _lastCheckTime
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (nonatomic) NSUInteger totalCost; // ivar: _totalCost
@property (nonatomic) NSUInteger totalCostLimit; // ivar: _totalCostLimit


-(BOOL)_shouldRemoveIndex:(NSUInteger)arg0 ;
-(NSInteger)numberOfCachedItems;
-(NSUInteger)costForObjectWithKey:(id)arg0 ;
-(id)allKeys;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_addItem:(id)arg0 forKey:(id)arg1 ;
-(void)_checkLimits;
-(void)_checkLimitsAndEvictObjects;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)checkLimitsAndEvictObjects;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeyWithPrefix:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2 ;


@end


#endif