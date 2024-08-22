// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLRUMEMORYCACHE_H
#define PXLRUMEMORYCACHE_H

@class NSMapTable, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface PXLRUMemoryCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    *_PXLRUMemoryCacheList _leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}


@property (readonly, nonatomic) NSUInteger currentUsedSlots;
@property (nonatomic) NSUInteger numberOfSlots; // ivar: _numberOfSlots


-(id)allKeys;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_promoteListElement:(struct _PXLRUMemoryCacheListElement *)arg0 ;
-(void)_removeListElement:(struct _PXLRUMemoryCacheListElement *)arg0 ;
-(void)dealloc;
-(void)evictSlots:(NSUInteger)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif