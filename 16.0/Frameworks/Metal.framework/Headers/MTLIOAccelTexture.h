// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIOACCELTEXTURE_H
#define MTLIOACCELTEXTURE_H

@protocol MTLBuffer, MTLTexture, MTLResource;


#import "MTLIOAccelResource.h"
#import "MTLIOAccelTexture.h"
#import "MTLIOAccelBuffer.h"

@interface MTLIOAccelTexture : MTLIOAccelResource {
    MTLIOAccelTexture *_parentTexture;
    MTLIOAccelBuffer *_buffer;
    unsigned int _swizzle;
    BOOL _writeSwizzleEnabled;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    NSUInteger _masterBufferOffset;
    NSUInteger _length;
    NSUInteger _bufferOffset;
    NSUInteger _bufferBytesPerRow;
    *void _pointer;
    id *_deallocator;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) BOOL allowGPUOptimizedContents; // ivar: _allowGPUOptimizedContents
@property (readonly) NSUInteger arrayLength; // ivar: _arrayLength
@property (readonly) NSObject<MTLBuffer> *buffer;
@property (readonly) NSUInteger bufferBytesPerRow;
@property (readonly) NSUInteger bufferOffset;
@property (readonly) NSInteger compressionFeedback;
@property (readonly) NSUInteger depth; // ivar: _depth
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly; // ivar: _framebufferOnly
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger height; // ivar: _height
@property (readonly) *__IOSurface iosurface; // ivar: _iosurface
@property (readonly) NSUInteger iosurfacePlane; // ivar: _iosurfacePlane
@property (readonly) BOOL isCompressed; // ivar: _isCompressed
@property (readonly) BOOL isDrawable; // ivar: _isDrawable
@property (readonly) NSUInteger mipmapLevelCount; // ivar: _mipmapLevelCount
@property (readonly) NSUInteger numFaces; // ivar: _numFaces
@property (readonly) NSUInteger parentRelativeLevel; // ivar: _parentRelativeLevel
@property (readonly) NSUInteger parentRelativeSlice; // ivar: _parentRelativeSlice
@property (readonly) NSObject<MTLTexture> *parentTexture;
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly) NSObject<MTLResource> *rootResource;
@property (readonly) BOOL rootResourceIsSuballocatedBuffer; // ivar: _rootResourceIsSuballocatedBuffer
@property (readonly) NSUInteger rotation; // ivar: _rotation
@property (readonly) NSUInteger sampleCount; // ivar: _sampleCount
@property (readonly, getter=isShareable) BOOL shareable; // ivar: _shareable
@property (readonly) ? swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) NSUInteger textureType; // ivar: _textureType
@property (readonly) NSUInteger uniqueIdentifier;
@property (readonly) NSUInteger usage; // ivar: _usage
@property (readonly) NSUInteger width; // ivar: _width


+(void)initNewTextureDataWithDevice:(id)arg0 descriptor:(id)arg1 sysMemSize:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 ;
-(BOOL)isAliasable;
-(BOOL)isSparse;
-(NSUInteger)gpuHandle;
-(NSUInteger)hazardTrackingMode;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 sysMemOffset:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 sysMemOffset:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 isStrideTexture:(BOOL)arg8 ;
-(id)initWithCompressedTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 level:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned int)arg3 field:(unsigned int)arg4 args:(struct IOAccelNewResourceArgs *)arg5 argsSize:(unsigned int)arg6 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 sysMemPointer:(*void)arg2 sysMemSize:(NSUInteger)arg3 sysMemLength:(NSUInteger)arg4 sysMemRowBytes:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 deallocator:(id)arg8 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 sysMemSize:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 ;
-(id)initWithHeap:(id)arg0 resource:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 device:(id)arg4 descriptor:(id)arg5 ;
-(id)initWithMasterBuffer:(id)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 descriptor:(id)arg5 sysMemRowBytes:(NSUInteger)arg6 vidMemSize:(NSUInteger)arg7 vidMemRowBytes:(NSUInteger)arg8 args:(struct IOAccelNewResourceArgs *)arg9 argsSize:(unsigned int)arg10 ;
-(id)initWithTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 ;
-(id)initWithTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(struct _NSRange )arg3 slices:(struct _NSRange )arg4 ;
-(id)initWithTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(struct _NSRange )arg3 slices:(struct _NSRange )arg4 swizzle:(struct ? )arg5 ;
-(id)initWithTextureInternal:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(struct _NSRange )arg3 slices:(struct _NSRange )arg4 swizzle:(struct ? )arg5 compressedView:(BOOL)arg6 ;
-(id)newSharedTextureHandle;
-(struct __CFArray *)copyAnnotations;
-(void)copyFromPixels:(*void)arg0 rowBytes:(NSUInteger)arg1 imageBytes:(NSUInteger)arg2 toSlice:(NSUInteger)arg3 mipmapLevel:(NSUInteger)arg4 origin:(struct ? )arg5 size:(struct ? )arg6 ;
-(void)copyFromSlice:(NSUInteger)arg0 mipmapLevel:(NSUInteger)arg1 origin:(struct ? )arg2 size:(struct ? )arg3 toPixels:(*void)arg4 rowBytes:(NSUInteger)arg5 imageBytes:(NSUInteger)arg6 ;
-(void)dealloc;
-(void)getBytes:(*void)arg0 bytesPerRow:(NSUInteger)arg1 fromRegion:(struct ? )arg2 mipmapLevel:(NSUInteger)arg3 ;
-(void)makeAliasable;
-(void)replaceRegion:(struct ? )arg0 mipmapLevel:(NSUInteger)arg1 withBytes:(*void)arg2 bytesPerRow:(NSUInteger)arg3 ;


@end


#endif