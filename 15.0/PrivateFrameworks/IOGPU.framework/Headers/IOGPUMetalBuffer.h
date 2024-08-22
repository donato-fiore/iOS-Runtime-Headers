// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOGPUMETALBUFFER_H
#define IOGPUMETALBUFFER_H



#import "IOGPUMetalResource.h"
#import "IOGPUMetalBuffer.h"

@interface IOGPUMetalBuffer : IOGPUMetalResource {
    *void _pointer;
    id *_deallocator;
    IOGPUMetalBuffer *_primaryBuffer;
    short _primaryHeapIndex;
    short _primaryBufferIndex;
    NSUInteger _primaryBufferOffset;
    NSUInteger _length;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly, nonatomic) *void contents;
@property (readonly) *__IOSurface iosurface; // ivar: _iosurface
@property (readonly) NSUInteger length;


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 iosurface:(struct __IOSurface *)arg1 args:(struct IOGPUNewResourceArgs *)arg2 argsSize:(unsigned int)arg3 ;
-(id)initWithDevice:(id)arg0 pointer:(*void)arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 sysMemSize:(NSUInteger)arg4 gpuAddress:(NSUInteger)arg5 args:(struct IOGPUNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 deallocator:(id)arg8 ;
-(id)initWithDevice:(id)arg0 pointer:(*void)arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 sysMemSize:(NSUInteger)arg4 vidMemSize:(NSUInteger)arg5 args:(struct IOGPUNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 deallocator:(id)arg8 ;
-(id)initWithHeap:(id)arg0 resource:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 ;
-(id)initWithPrimaryBuffer:(id)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 args:(struct IOGPUNewResourceArgs *)arg5 argsSize:(unsigned int)arg6 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(struct __CFArray *)copyAnnotations;
-(void)addDebugMarker:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didModifyRange:(struct _NSRange )arg0 ;
-(void)removeAllDebugMarkers;


@end


#endif