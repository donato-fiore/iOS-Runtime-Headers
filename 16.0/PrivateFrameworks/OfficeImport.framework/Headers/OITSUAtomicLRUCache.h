// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUATOMICLRUCACHE_H
#define OITSUATOMICLRUCACHE_H



#import "OITSULRUCache.h"

@interface OITSUAtomicLRUCache : OITSULRUCache



-(id)allKeys;
-(id)allValues;
-(id)objectForKey:(id)arg0 ;
-(void)clearEvictionCallbackTarget;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setEvictionCallbackTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif