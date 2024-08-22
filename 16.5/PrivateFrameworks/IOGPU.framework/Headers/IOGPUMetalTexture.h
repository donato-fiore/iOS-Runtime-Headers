// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALTEXTURE_H
#define IOGPUMETALTEXTURE_H



#import "IOGPUMetalResource.h"
#import "IOGPUMetalTexture.h"
#import "IOGPUMetalBuffer.h"

@interface IOGPUMetalTexture : IOGPUMetalResource {
    IOGPUMetalTexture *_parentTexture;
    IOGPUMetalBuffer *_buffer;
    unsigned int _swizzle;
    BOOL _writeSwizzleEnabled;
    IOGPUMetalBuffer *_primaryBuffer;
    short _primaryHeapIndex;
    short _primaryBufferIndex;
    NSUInteger _primaryBufferOffset;
    NSUInteger _length;
    NSUInteger _bufferOffset;
    NSUInteger _bufferBytesPerRow;
    *void _pointer;
    id *_deallocator;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) BOOL allowGPUOptimizedContents; // ivar: _allowGPUOptimizedContents
@property (readonly) NSUInteger arrayLength; // ivar: _arrayLength
@property (readonly) IOGPUMetalBuffer *buffer;
@property (readonly) NSUInteger bufferBytesPerRow;
@property (readonly) NSUInteger bufferOffset;
@property (readonly) NSInteger compressionFeedback;
@property (readonly) NSUInteger depth; // ivar: _depth
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly; // ivar: _framebufferOnly
@property (readonly, nonatomic) NSUInteger gpuHandle;
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
@property (readonly) IOGPUMetalTexture *parentTexture;
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly) IOGPUMetalResource *rootResource;
@property (readonly) BOOL rootResourceIsSuballocatedBuffer; // ivar: _rootResourceIsSuballocatedBuffer
@property (readonly) NSUInteger rotation; // ivar: _rotation
@property (readonly) NSUInteger sampleCount; // ivar: _sampleCount
@property (readonly, getter=isShareable) BOOL shareable; // ivar: _shareable
@property ? swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) NSUInteger textureType; // ivar: _textureType
@property (readonly) NSUInteger uniqueIdentifier;
@property (readonly) NSUInteger usage; // ivar: _usage
@property (readonly) NSUInteger width; // ivar: _width


+(void)initNewTextureDataWithDevice:(id)arg0 descriptor:(id)arg1 sysMemSize:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOGPUNewResourceArgs *)arg6 ;
-(?)copyFromPixels:(?)arg0 rowBytes:(?)arg1 imageBytes:(?)arg2 toSlice:(?)arg3 mipmapLevel:(?)arg4 originsize;
-(?)copyFromSlice:(?)arg0 mipmapLevel:(?)arg1 origin:(?)arg2 size:(?)arg3 toPixels:(?)arg4 rowBytesimageBytes;
-(?)getBytes:(?)arg0 bytesPerRow:(?)arg1 fromRegionmipmapLevel;
-(?)initWithTexture:(?)arg0 pixelFormat:(?)arg1 textureType:(?)arg2 levels:(?)arg3 slicesswizzle;
-(?)initWithTextureInternal:(?)arg0 pixelFormat:(?)arg1 textureType:(?)arg2 levels:(?)arg3 slices:(?)arg4 swizzlecompressedView;
-(?)replaceRegion:(?)arg0 mipmapLevel:(?)arg1 withBytesbytesPerRow;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithCompressedTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 level:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned int)arg3 field:(unsigned int)arg4 args:(struct IOGPUNewResourceArgs *)arg5 argsSize:(unsigned int)arg6 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 sysMemPointer:(*void)arg2 sysMemSize:(NSUInteger)arg3 sysMemLength:(NSUInteger)arg4 sysMemRowBytes:(NSUInteger)arg5 args:(struct IOGPUNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 deallocator:(id)arg8 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 sysMemSize:(NSUInteger)arg2 sysMemRowBytes:(NSUInteger)arg3 vidMemSize:(NSUInteger)arg4 vidMemRowBytes:(NSUInteger)arg5 args:(struct IOGPUNewResourceArgs *)arg6 argsSize:(unsigned int)arg7 ;
-(id)initWithTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 ;
-(id)initWithTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(struct _NSRange )arg3 slices:(struct _NSRange )arg4 ;


@end


#endif