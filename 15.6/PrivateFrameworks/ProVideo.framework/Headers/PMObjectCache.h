// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMOBJECTCACHE_H
#define PMOBJECTCACHE_H

@class NSRecursiveLock, NSMapTable;

#import <Foundation/Foundation.h>


@interface PMObjectCache : NSObject {
    NSRecursiveLock *_cacheLock;
    int _purgesInProgress;
    NSUInteger _currentSize;
    NSUInteger _setSize;
    NSUInteger _maxSize;
    NSUInteger _reservedMemory;
    NSUInteger _numberOfCalls;
    NSMapTable *_mapTable;
    float _responseRate;
    float _decayRate;
    float _penalty;
}




+(id)sharedInstance;
+(void)releaseSharedInstance;
-(NSUInteger)currentSize;
-(NSUInteger)getCacheMemoryUsed;
-(NSUInteger)getCacheSize;
-(NSUInteger)reservedMemorySize;
-(id)copyObjectForKey:(id)arg0 cost:(*CGFloat)arg1 ;
-(id)copyObjectForKeyDontUpdateAccessTime:(id)arg0 cost:(*CGFloat)arg1 ;
-(id)copyObjectForKeyImpl:(id)arg0 cost:(*CGFloat)arg1 updateAccessTime:(BOOL)arg2 ;
-(id)initWithCacheSize:(NSUInteger)arg0 ;
-(int)addObject:(id)arg0 cacheKey:(id)arg1 size:(NSUInteger)arg2 cost:(CGFloat)arg3 ;
-(int)addObject:(id)arg0 cacheKey:(id)arg1 size:(NSUInteger)arg2 cost:(CGFloat)arg3 retDidAddObject:(*BOOL)arg4 ;
-(void)clearCache;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg0 ;
-(void)reserveCacheMemory:(NSInteger)arg0 ;
-(void)setCacheSize:(NSUInteger)arg0 ;
-(void)shutdownCache;


@end


#endif