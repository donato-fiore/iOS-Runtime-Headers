// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEBUFFERCACHE_H
#define VNIMAGEBUFFERCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNImageBufferCache : NSObject {
    *__CFDictionary _pixelBufferReps;
    os_unfair_lock_s _pixelBufferRepsLock;
    NSMutableDictionary *_repsCacheKeyToProcessingQueueDictionary;
    os_unfair_lock_s _repsCacheKeyToProcessingQueueDictionaryLock;
}




+(id)cacheKeyWithBufferFormat:(unsigned int)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
+(id)cacheKeyWithBufferFormat:(unsigned int)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 cropRect:(struct CGRect )arg3 ;
-(id)init;
-(struct __CVBuffer *)cachedBufferWithKey:(id)arg0 ;
-(void)cacheBuffer:(struct __CVBuffer *)arg0 forCacheKey:(id)arg1 ;
-(void)dealloc;
-(void)purgeCacheRepresentationsForOriginalBuffer:(struct __CVBuffer *)arg0 ;
-(void)removeCachedBufferWithKey:(id)arg0 ;


@end


#endif