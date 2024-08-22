// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEFERREDCONTAINERPIXELBUFFERPOOL_H
#define BWDEFERREDCONTAINERPIXELBUFFERPOOL_H



#import "BWPixelBufferPool.h"
#import "BWVideoFormat.h"

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool

@property (readonly, nonatomic) *__CVPixelBufferPool cvPixelBufferPool;
@property (readonly, nonatomic) *__CFDictionary cvPixelBufferPoolAuxAttributes;
@property (readonly, nonatomic) BWVideoFormat *videoFormat; // ivar: _videoFormat


+(void)initialize;
-(id)initWithAttributes:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 clientProvidesPool:(BOOL)arg3 memoryPool:(id)arg4 providesBackPressure:(BOOL)arg5 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 memoryPool:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 memoryPool:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
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
-(void)setCapacity:(NSUInteger)arg0 ;


@end


#endif