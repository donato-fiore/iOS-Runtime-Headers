// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFLRUCACHE_H
#define OFLRUCACHE_H

@class NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface OFLRUCache : NSObject {
    NSMutableDictionary *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    *_OFLRUCacheList _leastRecentUsedList;
    NSMutableDictionary *_leastRecentUsedDictionary;
}


@property (readonly, nonatomic) NSUInteger currentUsedSlots;
@property (nonatomic) NSUInteger numberOfSlots; // ivar: _numberOfSlots


-(BOOL)loadFromURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 ;
-(id)allKeys;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_promoteListElement:(struct _OFLRUCacheListElement *)arg0 ;
-(void)_removeListElement:(struct _OFLRUCacheListElement *)arg0 ;
-(void)dealloc;
-(void)evictSlots:(NSUInteger)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif