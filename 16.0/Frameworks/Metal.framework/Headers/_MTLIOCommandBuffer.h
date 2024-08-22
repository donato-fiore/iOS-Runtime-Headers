// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLIOCOMMANDBUFFER_H
#define _MTLIOCOMMANDBUFFER_H

@class MTLObjectWithLabel, NSString, NSError;
@protocol MTLIOCommandBufferSPI, MTLIOScratchBuffer;


#import "MTLResourceList.h"
#import "_MTLIOCommandQueue.h"

@interface _MTLIOCommandBuffer : MTLObjectWithLabel <MTLIOCommandBufferSPI>

 {
    id<MTLIOScratchBuffer> *_currentStagingBuffer;
    NSUInteger _currentStagingBufferRemainingBytes;
    NSUInteger _currentStagingBufferOffset;
    MTLResourceList *_resourceList;
    BOOL _retained;
    BOOL _enqueued;
    NSUInteger _labelTraceID;
    _MTLIOCommandQueue *_queue;
    *MTLIOCommandList commandList;
    *MTLIODispatch _completedDispatchList;
    *MTLIODispatch _completedDispatchListTail;
    BOOL _completedCallbacksDone;
    _opaque_pthread_mutex_t _mutex;
    _opaque_pthread_cond_t _cond;
    unsigned int _pendingCommands;
    vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> _activeScratchBuffers;
    vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> _poolScratchBuffers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error; // ivar: error
@property (readonly, nonatomic) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)isCommitted;
-(id)getReusableScratchBuffer:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 resourceList:(id)arg1 retained:(BOOL)arg2 ;
-(struct MTLIOCommandList *)getCommandList;
-(void)addBarrier;
-(void)addCompletedHandler:(id)arg0 ;
-(void)barrier;
-(void)clearScratchBufferLists;
-(void)commit;
-(void)copyStatusToBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)createCommandListWithResourcePool:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteWithStatus:(NSInteger)arg0 ;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)enqueue;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 handle:(id)arg3 handleOffset:(NSUInteger)arg4 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(NSUInteger)arg4 ;
-(void)loadBytes:(*void)arg0 size:(NSUInteger)arg1 sourceHandle:(id)arg2 sourceHandleOffset:(NSUInteger)arg3 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 dstOrigin:(struct ? )arg6 handle:(id)arg7 handleOffset:(NSUInteger)arg8 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 sourceBytesPerRow:(NSUInteger)arg4 sourceBytesPerImage:(NSUInteger)arg5 destinationOrigin:(struct ? )arg6 sourceHandle:(id)arg7 sourceHandleOffset:(NSUInteger)arg8 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)reuseActiveScratchBuffers;
-(void)signalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)tryCancel;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)waitUntilCompleted;


@end


#endif