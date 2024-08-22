// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIOACCELBUFFER_H
#define MTLIOACCELBUFFER_H



#import "MTLIOAccelResource.h"
#import "MTLIOAccelBuffer.h"

@interface MTLIOAccelBuffer : MTLIOAccelResource {
    *void _pointer;
    id *_deallocator;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    NSUInteger _masterBufferOffset;
    NSUInteger _length;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly, nonatomic) *void contents;
@property (readonly) *__IOSurface iosurface; // ivar: _iosurface
@property (readonly) NSUInteger length;


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 iosurface:(struct __IOSurface *)arg1 args:(struct IOAccelNewResourceArgs *)arg2 argsSize:(unsigned int)arg3 ;
-(id)initWithDevice:(id)arg0 pointer:(*void)arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 sysMemSize:(NSUInteger)arg4 vidMemSize:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 deallocator:(id)arg8 ;
-(id)initWithDevice:(id)arg0 pointer:(*void)arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 sysMemSize:(NSUInteger)arg4 vidMemSize:(NSUInteger)arg5 gpuAddress:(NSUInteger)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 deallocator:(id)arg9 ;
-(id)initWithHeap:(id)arg0 resource:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 ;
-(id)initWithMasterBuffer:(id)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 args:(struct IOAccelNewResourceArgs *)arg5 argsSize:(unsigned int)arg6 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(struct __CFArray *)copyAnnotations;
-(struct __IOSurface *)_aneIOSurface;
-(void)addDebugMarker:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didModifyRange:(struct _NSRange )arg0 ;
-(void)removeAllDebugMarkers;


@end


#endif