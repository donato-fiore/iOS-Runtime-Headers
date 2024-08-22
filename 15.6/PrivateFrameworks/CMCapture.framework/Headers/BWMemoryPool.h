// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMEMORYPOOL_H
#define BWMEMORYPOOL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWMemoryPool : NSObject {
    NSUInteger _defaultCacheBufferSize;
    NSUInteger _writeCombineCacheBufferSize;
    NSObject<OS_dispatch_queue> *_queue;
    *__IOSurface _writeCombineCacheBuffer;
    *__IOSurface _defaultCacheBuffer;
}




+(void)initialize;
-(id)initWithDefaultCacheMemoryPoolSize:(NSInteger)arg0 writeCombineCacheMemoryPoolSize:(NSInteger)arg1 ;
-(id)newMTLBufferWithLength:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(int)addMemoryPoolToPropertiesForCaptureDevice:(id)arg0 ;
-(int)addMemoryPoolToPropertiesForCaptureStream:(id)arg0 ;
-(int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)arg0 ;
-(void)_discardMemory;
-(void)_ensureMemoryPool;
-(void)addMemoryPoolToPixelBufferAttributes:(id)arg0 ;
-(void)dealloc;
-(void)discardMemory;
-(void)discardMemoryWithCompletionHandler:(id)arg0 ;
-(void)ensureMemoryAsync;
-(void)ensureMemorySync;


@end


#endif