// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLIOSCRATCHBUFFERALLOCATOR_H
#define _MTLIOSCRATCHBUFFERALLOCATOR_H

@class NSString;
@protocol MTLIOScratchBufferAllocator, MTLDevice, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator>

 {
    NSUInteger _currentSize;
    _opaque_pthread_mutex_t _pool_lock;
    id<MTLDevice> *_device;
    MTLIOScratchBufferPrivateQueue _activeq;
    MTLIOScratchBufferPrivateQueue _poolq;
    MTLIOScratchBufferPrivateQueue _volatileq;
    NSUInteger _age_to_purge;
    NSObject<OS_dispatch_queue> *_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_pool_cleanup_source;
    os_unfair_lock_s _pool_cleanup_lock;
    BOOL _pool_cleanup_scheduled;
    BOOL _pool_cleanup_requested;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateScratchBuffersPurgeability;
-(id)initWithDevice:(id)arg0 ;
-(id)newScratchBufferWithMinimumSize:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)kickCleanupQueue;
-(void)returnActiveScratchBuffersToPool;
-(void)returnPriv:(struct MTLIOScratchBufferPrivate *)arg0 ;
-(void)updateScratchBuffersPurgeabilityHandler;


@end


#endif