// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFFRAMECACHE_H
#define PFFRAMECACHE_H

@class NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFFrameCache : NSObject {
    *CGImageSource _gifSource;
    NSUInteger _frameCount;
    NSUInteger _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSUInteger _frameCacheSize;
    NSMutableDictionary *_frameCache;
    NSUInteger _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    ? _isValid;
}


@property (nonatomic) NSInteger cacheStrategy; // ivar: _cacheStrategy


+(id)sharedFrameGenerationQueue;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 cachingStrategy:(NSInteger)arg1 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 cachingStrategy:(NSInteger)arg1 useGlobalDecodeQueue:(BOOL)arg2 ;
-(struct CGImage *)_createPredrawnImage:(struct CGImage *)arg0 ;
-(struct CGImage *)_frameAtIndex:(NSUInteger)arg0 allowLazy:(BOOL)arg1 ;
-(struct CGImage *)frameAtIndex:(NSUInteger)arg0 ;
-(struct CGImage *)frameAtIndexIfReady:(NSUInteger)arg0 ;
-(void)_frameGenerationQueue_cacheFrameAtIndex:(NSUInteger)arg0 ;
-(void)_frameGenerationQueue_updateFrameCache;
-(void)_invalidateCache;
-(void)_invalidateCacheSize;
-(void)_updateDesiredCacheSize;
-(void)_updateFrameCache;
-(void)_updateIfNeeded;
-(void)dealloc;


@end


#endif