// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPIXELBUFFERPOOL_H
#define BWPIXELBUFFERPOOL_H

@class NSString, NSDictionary, NSMutableSet;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "BWVideoFormat.h"
#import "BWMemoryPool.h"

@interface BWPixelBufferPool : NSObject {
    BWVideoFormat *_videoFormat;
    NSUInteger _capacity;
    NSString *_name;
    BOOL _clientProvidesPool;
    NSDictionary *_additionalPixelBufferAttributes;
    os_unfair_lock_s _pixelBufferPoolConfigurationLock;
    *__CVPixelBufferPool _pixelBufferPool;
    NSDictionary *_pixelBufferPoolAuxAttributes;
    NSMutableSet *_prefetchedSurfaceIDs;
    int _pixelBufferPoolCreateError;
    BWMemoryPool *_memoryPool;
    BOOL _providesBackPressure;
    NSObject<OS_dispatch_semaphore> *_backPressureSemaphore;
}


@property (readonly, nonatomic) NSUInteger capacity;
@property (readonly, nonatomic) *__CVPixelBufferPool cvPixelBufferPool;
@property (readonly, nonatomic) *__CFDictionary cvPixelBufferPoolAuxAttributes;
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int pixelFormat;


+(void)initialize;
-(BOOL)prefetch:(int)arg0 lastEmittedSurfaceID:(unsigned int)arg1 ;
-(id)description;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 additionalPixelBufferAttributes:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 clientProvidesPool:(BOOL)arg3 memoryPool:(id)arg4 providesBackPressure:(BOOL)arg5 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 memoryPool:(id)arg3 ;
-(int)preallocate;
-(struct __CVBuffer *)newPixelBuffer;
-(void)dealloc;
-(void)enumerateSurfacesUsingBlock:(id)arg0 ;
-(void)flush;
-(void)flushToMinimumCapacity:(NSUInteger)arg0 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)preallocateWithCompletionHandler:(id)arg0 ;
-(void)prefetchWithCompletionHandler:(id)arg0 ;
-(void)setCVPixelBufferPool:(struct __CVPixelBufferPool *)arg0 attributes:(struct __CFDictionary *)arg1 ;


@end


#endif