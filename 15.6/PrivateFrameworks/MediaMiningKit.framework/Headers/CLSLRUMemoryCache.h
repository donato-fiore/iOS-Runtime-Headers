// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSLRUMEMORYCACHE_H
#define CLSLRUMEMORYCACHE_H

@class NSMapTable, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface CLSLRUMemoryCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    *_CLSLRUMemoryCacheList _leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}


@property (readonly, nonatomic) NSUInteger currentUsedSlots;
@property (nonatomic) NSUInteger numberOfSlots; // ivar: _numberOfSlots


-(BOOL)loadFromURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 ;
-(id)allKeys;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_promoteListElement:(struct _CLSLRUMemoryCacheListElement *)arg0 ;
-(void)_removeListElement:(struct _CLSLRUMemoryCacheListElement *)arg0 ;
-(void)dealloc;
-(void)evictSlots:(NSUInteger)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif