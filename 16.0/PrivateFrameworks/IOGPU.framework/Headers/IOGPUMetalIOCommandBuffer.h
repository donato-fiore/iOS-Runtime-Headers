// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMETALIOCOMMANDBUFFER_H
#define IOGPUMETALIOCOMMANDBUFFER_H

@class MTLIOCommandBuffer, IOGPUMetalDevice<MTLDevice>, IOGPUMetalCommandBuffer<MTLCommandBuffer>, IOGPUMetalCommandEncoder<MTLBlitCommandEncoder>, NSMutableArray;
@protocol OS_dispatch_group;


#import "IOGPUMetalIOCommandQueue.h"
#import "IOGPUMetalDeviceShmem.h"

@interface IOGPUMetalIOCommandBuffer : MTLIOCommandBuffer {
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMetalIOCommandQueue *_queue;
    IOGPUMetalDeviceShmem *_ioKernelCommandShmem;
    char * _ioKernelCommandShmemStart;
    char * _ioKernelCommandShmemCurrent;
    char * _ioKernelCommandShmemEnd;
    *IOGPUIOKernelCommandListHeader _commandListHeader;
    IOGPUMetalCommandBuffer<MTLCommandBuffer> *_gpuCommandBuffer;
    IOGPUMetalCommandEncoder<MTLBlitCommandEncoder> *_gpuBlitEncoder;
    NSMutableArray *_stagingBuffers;
    NSObject<OS_dispatch_group> *_ioCompletionGroup;
    uint8_t _notificationCount;
    unsigned int _commandBufferID;
    NSUInteger _globalTraceObjectID;
    BOOL _hasFollowOnGPUWork;
    BOOL _committed;
    BOOL _tryCancel;
}




-(*void)getCommandBufferBytes:(unsigned int)arg0 ;
-(?)loadTexture:(?)arg0 slice:(?)arg1 level:(?)arg2 size:(?)arg3 bytesPerRow:(?)arg4 bytesPerImage:(?)arg5 dstOrigin:(?)arg6 handlehandleOffset;
-(?)loadTexture:(?)arg0 slice:(?)arg1 level:(?)arg2 size:(?)arg3 sourceBytesPerRow:(?)arg4 sourceBytesPerImage:(?)arg5 destinationOrigin:(?)arg6 sourceHandlesourceHandleOffset;
-(BOOL)hasFollowOnWork;
-(BOOL)isCommitted;
-(NSUInteger)globalTraceObjectID;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 resourceList:(id)arg1 retained:(BOOL)arg2 ;
-(void)addBarrier;
-(void)barrier;
-(void)barrierComplete:(NSInteger)arg0 ;
-(void)commit;
-(void)createCommandList;
-(void)dealloc;
-(void)didCompleteWithStatus:(NSInteger)arg0 ;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)enqueue;
-(void)growKernelCommandBuffer:(unsigned int)arg0 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 handle:(id)arg3 handleOffset:(NSUInteger)arg4 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(NSUInteger)arg4 ;
-(void)loadBytes:(*void)arg0 size:(NSUInteger)arg1 sourceHandle:(id)arg2 sourceHandleOffset:(NSUInteger)arg3 ;
-(void)setLabel:(id)arg0 ;
-(void)signalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)tryCancel;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;


@end


#endif