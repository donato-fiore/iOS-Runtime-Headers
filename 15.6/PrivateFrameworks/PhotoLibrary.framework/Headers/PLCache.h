// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCACHE_H
#define PLCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCache : NSObject {
    NSMutableDictionary *_cacheEntries;
    NSInteger _countLimit;
    NSInteger _currentCount;
    NSInteger _totalCostLimit;
    NSInteger _currentCost;
    _opaque_pthread_mutex_t _lock;
    entryList _lru;
}




-(id)initWithCountLimit:(NSInteger)arg0 totalCostLimit:(NSInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSInteger)arg2 ;


@end


#endif