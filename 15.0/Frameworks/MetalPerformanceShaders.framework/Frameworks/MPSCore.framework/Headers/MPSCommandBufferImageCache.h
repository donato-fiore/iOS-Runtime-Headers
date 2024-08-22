// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCOMMANDBUFFERIMAGECACHE_H
#define MPSCOMMANDBUFFERIMAGECACHE_H

@protocol MTLCommandBuffer, MPSHeapProvider;

#import <Foundation/Foundation.h>


@interface MPSCommandBufferImageCache : NSObject {
    *void _device;
    NSInteger _debugMode;
    *HeapNode _freeList;
    *CacheFrame _frameList;
    *ResourceNode _retainedResources;
    *MPSAutoCache _userCacheFrame;
    NSUInteger _minimumBin;
    BOOL _needsRetain;
    NSUInteger _totalAllocationBytes;
    NSUInteger _cacheDelay;
    atomic<long> _commandBufferCount;
    BOOL _isMPSCommandBuffer;
}


@property (nonatomic) NSUInteger batchSizeHint; // ivar: _batchSize
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _cmdBuffer
@property (retain, nonatomic) NSObject<MPSHeapProvider> *heapProvider; // ivar: _heapProvider


-(id)debugDescription;
-(id)initWithCommandBuffer:(id)arg0 ;
-(id)newHeapBlock:(NSUInteger)arg0 ;
-(void)addHandlerToCommandBuffer:(id)arg0 ;
-(void)dealloc;
-(void)releaseHeapBlock:(id)arg0 heapProvider:(id)arg1 ;


@end


#endif