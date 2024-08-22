// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCATOMICLRUCACHE_H
#define DCATOMICLRUCACHE_H



#import "DCLRUCache.h"

@interface DCAtomicLRUCache : DCLRUCache



-(id)allKeys;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif