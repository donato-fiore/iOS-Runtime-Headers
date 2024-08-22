// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSTEXTURE_H
#define MTLTOOLSTEXTURE_H

@class NSString;
@protocol MTLTextureImplementation, MTLBuffer, MTLDevice, MTLHeap, MTLTexture, MTLResource;


#import "MTLToolsResource.h"

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (readonly) BOOL allowGPUOptimizedContents;
@property (readonly) NSUInteger arrayLength;
@property (readonly) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly) NSUInteger bufferBytesPerRow;
@property (readonly) NSUInteger bufferOffset;
@property (readonly) NSInteger compressionFeedback;
@property (readonly, nonatomic) NSUInteger compressionFootprint;
@property (readonly) NSInteger compressionType;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUInteger depth;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger firstMipmapInTail;
@property (readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (readonly) NSUInteger height;
@property (readonly) *__IOSurface iosurface;
@property (readonly) NSUInteger iosurfacePlane;
@property (readonly) BOOL isCompressed;
@property (readonly) BOOL isDrawable;
@property (readonly) BOOL isSparse;
@property (copy) NSString *label;
@property (readonly) NSUInteger mipmapLevelCount;
@property (readonly) NSUInteger numFaces;
@property (readonly) NSUInteger parentRelativeLevel;
@property (readonly) NSUInteger parentRelativeSlice;
@property (readonly) NSObject<MTLTexture> *parentTexture; // ivar: _parentTexture
@property (readonly) NSUInteger pixelFormat;
@property (readonly) NSUInteger protectionOptions;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSObject<MTLResource> *rootResource;
@property (readonly) NSUInteger rotation;
@property (readonly) NSUInteger sampleCount;
@property (readonly, getter=isShareable) BOOL shareable;
@property (readonly) NSUInteger sparseSurfaceDefaultValue;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? swizzle;
@property (readonly) unsigned int swizzleKey;
@property (readonly) NSUInteger tailSizeInBytes;
@property (readonly) NSUInteger textureType;
@property (readonly) NSUInteger unfilteredResourceOptions;
@property (readonly) NSUInteger uniqueIdentifier;
@property (readonly) NSUInteger usage;
@property (readonly) NSUInteger width;


-(BOOL)canGenerateMipmapLevels;
-(NSUInteger)tailSize;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 buffer:(id)arg2 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 parentTexture:(id)arg2 ;
-(id)newCompressedTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 level:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(id)newSharedTextureHandle;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 resourceIndex:(NSUInteger)arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 resourceIndex:(NSUInteger)arg5 ;
-(id)realRootResource;
-(void)copyFromPixels:(*void)arg0 rowBytes:(NSUInteger)arg1 imageBytes:(NSUInteger)arg2 toSlice:(NSUInteger)arg3 mipmapLevel:(NSUInteger)arg4 origin:(struct ? )arg5 size:(struct ? )arg6 ;
-(void)copyFromSlice:(NSUInteger)arg0 mipmapLevel:(NSUInteger)arg1 origin:(struct ? )arg2 size:(struct ? )arg3 toPixels:(*void)arg4 rowBytes:(NSUInteger)arg5 imageBytes:(NSUInteger)arg6 ;
-(void)dealloc;
-(void)generateMipmapLevel:(NSUInteger)arg0 slice:(NSUInteger)arg1 ;
-(void)getBytes:(*void)arg0 bytesPerRow:(NSUInteger)arg1 bytesPerImage:(NSUInteger)arg2 fromRegion:(struct ? )arg3 mipmapLevel:(NSUInteger)arg4 slice:(NSUInteger)arg5 ;
-(void)getBytes:(*void)arg0 bytesPerRow:(NSUInteger)arg1 fromRegion:(struct ? )arg2 mipmapLevel:(NSUInteger)arg3 ;
-(void)replaceRegion:(struct ? )arg0 mipmapLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2 withBytes:(*void)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)replaceRegion:(struct ? )arg0 mipmapLevel:(NSUInteger)arg1 withBytes:(*void)arg2 bytesPerRow:(NSUInteger)arg3 ;


@end


#endif