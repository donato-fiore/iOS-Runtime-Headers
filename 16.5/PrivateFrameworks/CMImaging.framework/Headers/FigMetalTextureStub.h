// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGMETALTEXTURESTUB_H
#define FIGMETALTEXTURESTUB_H

@class NSString;
@protocol MTLTexture, MTLBuffer, MTLDevice, MTLHeap, MTLResource;

#import <Foundation/Foundation.h>


@interface FigMetalTextureStub : NSObject <MTLTexture>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) BOOL allowGPUOptimizedContents;
@property (readonly) NSUInteger arrayLength; // ivar: _arrayLength
@property (readonly) NSObject<MTLBuffer> *buffer;
@property (readonly) NSUInteger bufferBytesPerRow;
@property (readonly) NSUInteger bufferOffset;
@property (readonly) NSInteger compressionType;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUInteger depth; // ivar: _depth
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger firstMipmapInTail;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (nonatomic) NSUInteger height; // ivar: _height
@property (readonly) *__IOSurface iosurface;
@property (readonly) NSUInteger iosurfacePlane;
@property (readonly) BOOL isSparse;
@property (copy) NSString *label; // ivar: _label
@property (readonly) NSUInteger mipmapLevelCount; // ivar: _mipmapLevelCount
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly) NSUInteger parentRelativeLevel;
@property (readonly) NSUInteger parentRelativeSlice;
@property (readonly) NSObject<MTLTexture> *parentTexture;
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSObject<MTLResource> *rootResource;
@property (readonly) NSUInteger sampleCount; // ivar: _sampleCount
@property (readonly, getter=isShareable) BOOL shareable;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? swizzle;
@property (readonly) NSUInteger tailSizeInBytes;
@property (readonly) NSUInteger textureType; // ivar: _textureType
@property (nonatomic) NSUInteger usage; // ivar: _usage
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)initWithDescriptor:(id)arg0 ;


@end


#endif