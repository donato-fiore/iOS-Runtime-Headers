// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXLRUCACHE_H
#define JFXLRUCACHE_H

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXLRUCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSMutableOrderedSet *keys; // ivar: _keys


-(BOOL)JT_removeLeastRecentlyUsedIfAtCapacity;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)JT_markRecentlyUsed:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)highMemoryWarning;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif