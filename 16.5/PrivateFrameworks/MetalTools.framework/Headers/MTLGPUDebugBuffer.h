// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGPUDEBUGBUFFER_H
#define MTLGPUDEBUGBUFFER_H

@class NSString;
@protocol MTLGPUDebugResource, MTLBuffer, MTLDevice, MTLHeap;


#import "MTLToolsBuffer.h"

@interface MTLGPUDebugBuffer : MTLToolsBuffer <MTLGPUDebugResource>

 {
    NSUInteger _bufferIndex;
    NSUInteger _offset;
    NSUInteger _length;
    *void _descriptorHeap;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLBuffer> *baseObject;
@property (nonatomic) NSUInteger bufferIndex;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (readonly, nonatomic) BOOL isTracked;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSUInteger offset;
@property (readonly) NSUInteger protectionOptions;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger underlyingGPUAddress;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(*void)contents;
-(NSUInteger)handleForOffset:(NSUInteger)arg0 ;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 ;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 ;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 track:(BOOL)arg4 ;
-(id)initWithBuffer:(id)arg0 heap:(id)arg1 device:(id)arg2 ;
-(id)initWithBuffer:(id)arg0 heap:(id)arg1 device:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 track:(BOOL)arg5 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif