// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATOMICLRUCACHE_H
#define ICATOMICLRUCACHE_H



#import "ICLRUCache.h"

@interface ICAtomicLRUCache : ICLRUCache



-(id)allKeys;
-(id)objectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif