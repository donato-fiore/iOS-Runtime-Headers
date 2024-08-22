// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOGPUMETALCOMMANDBUFFER_H
#define IOGPUMETALCOMMANDBUFFER_H

@class MTLCommandBuffer, NSMutableSet;
@protocol OS_dispatch_semaphore, MTLDevice;



@interface IOGPUMetalCommandBuffer : MTLCommandBuffer {
    *NSUInteger _submitToHardwareTimeStampPointer;
    NSUInteger _protectionOptions;
    *void _scheduledCallbackBlockPtr;
    *void _completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}


@property (readonly) *IOGPUMetalCommandBufferResourceInfo commandBufferResourceInfo;
@property (readonly) *IOGPUMetalCommandBufferStorage commandBufferStorage; // ivar: _storage
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) *IOGPUResourceList ioGPUResourceList;


-(*void)_reserveKernelCommandBufferSpace:(NSUInteger)arg0 ;
-(NSUInteger)protectionOptions;
-(id)akPrivateResourceList;
-(id)akResourceList;
-(id)initWithQueue:(id)arg0 retainedReferences:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg0 retainedReferences:(BOOL)arg1 synchronousDebugMode:(BOOL)arg2 ;
-(struct IOGPUSegmentListHeader *)getSegmentListHeader;
-(void)_debugBytes:(char *)arg0 length:(NSUInteger)arg1 output_type:(unsigned int)arg2 ;
-(void)_encodePurgedResources;
-(void)addPurgedHeap:(id)arg0 ;
-(void)addPurgedResource:(id)arg0 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned int)arg0 ;
-(void)allocDebugBuffer;
-(void)allocateSidebandBuffer:(unsigned int)arg0 ;
-(void)beginSegment:(*void)arg0 ;
-(void)commit;
-(void)commitAndReset;
-(void)commitEncoder;
-(void)dealloc;
-(void)didCompleteWithStartTime:(NSUInteger)arg0 endTime:(NSUInteger)arg1 error:(id)arg2 ;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeSubmitSleepMS:(unsigned int)arg0 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)endCurrentSegment;
-(void)getCurrentKernelCommandBufferPointer:(**void)arg0 end:(**void)arg1 ;
-(void)getCurrentKernelCommandBufferStart:(**void)arg0 current:(**void)arg1 end:(**void)arg2 ;
-(void)getDebugBufferPointerStart:(**void)arg0 end:(**void)arg1 ;
-(void)getSegmentListPointerStart:(**void)arg0 current:(**void)arg1 end:(**void)arg2 ;
-(void)growDebugBuffer:(unsigned int)arg0 ;
-(void)growKernelCommandBuffer:(NSUInteger)arg0 ;
-(void)growSegmentList;
-(void)growSidebandBuffer:(unsigned int)arg0 ;
-(void)kernelCommandCollectTimeStamp;
-(void)kprintfBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setCurrentCommandEncoder:(id)arg0 ;
-(void)setCurrentKernelCommandBufferPointer:(*void)arg0 ;
-(void)setCurrentSegmentListPointer:(*void)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setProtectionOptions:(NSUInteger)arg0 ;
-(void)validate;


@end


#endif