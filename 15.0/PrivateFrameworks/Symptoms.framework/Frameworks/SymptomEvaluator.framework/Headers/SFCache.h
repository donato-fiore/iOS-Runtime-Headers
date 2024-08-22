// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCACHE_H
#define SFCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SFCache : NSObject {
    NSUInteger _cachePolicy;
    NSUInteger _cacheSize;
    CGFloat _entryTimeToLive;
    NSMutableDictionary *_cacheEntries;
}




-(NSUInteger)count;
-(id)_entryForKey:(id)arg0 ;
-(id)entryForKey:(id)arg0 ;
-(id)init;
-(id)initWithPolicy:(NSUInteger)arg0 ;
-(id)initWithPolicy:(NSUInteger)arg0 timeToLive:(CGFloat)arg1 size:(NSUInteger)arg2 ;
-(void)_insertCacheEntry:(id)arg0 forKey:(id)arg1 ;
-(void)_removeCacheEntryWithKey:(id)arg0 ;
-(void)addEntry:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;


@end


#endif