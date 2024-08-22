// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGPIXELBUFFERMETALRENDERDESTINATION_H
#define PXGPIXELBUFFERMETALRENDERDESTINATION_H

@class MTLRenderPassDescriptor, NSString;
@protocol PXGMetalRenderDestination, PXGMetalRenderDestinationDelegate, MTLTexture, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXGPixelBufferMetalRenderDestination : NSObject <PXGMetalRenderDestination>

 {
    *__CVMetalTextureCache _textureCache;
    *__CVBuffer _cvMetalTexture;
    *__CVBuffer _pixelBuffer;
    *__CVPixelBufferPool _pixelBufferPool;
}


@property (readonly, nonatomic) BOOL canSetColorSpace;
@property (readonly, nonatomic) NSUInteger colorPixelFormat; // ivar: _colorPixelFormat
@property (nonatomic) *CGColorSpace colorspace; // ivar: _colorspace
@property (retain, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor; // ivar: _currentRenderPassDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGMetalRenderDestinationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger depthStencilPixelFormat;
@property (retain, nonatomic) NSObject<MTLTexture> *depthStencilTexture; // ivar: _depthStencilTexture
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (readonly, nonatomic) NSUInteger destinationColorSpaceName;
@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (readonly, nonatomic) unsigned int pixelBufferFormatType; // ivar: _pixelBufferFormatType
@property (readonly, nonatomic) CGRect renderBoundsInPoints; // ivar: _renderBoundsInPoints
@property (copy, nonatomic) id *renderCompletionBlock; // ivar: _renderCompletionBlock
@property (readonly, nonatomic) CGSize renderSize; // ivar: _renderSize
@property (retain, nonatomic) NSObject<MTLTexture> *renderTexture; // ivar: _renderTexture
@property (readonly, nonatomic) NSInteger sampleCount;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)initWithCVPixelBufferPool:(struct __CVPixelBufferPool *)arg0 scale:(CGFloat)arg1 ;
-(void)_createRenderPassDescriptor;
-(void)_createResourceForRenderingFrame;
-(void)_initializeDepthStencilTexture;
-(void)_initializeMetalProperties;
-(void)_initializePixelBufferProperties;
-(void)_releaseResourcesForRenderingFrame;
-(void)dealloc;
-(void)notifyDidCompleteRenderForFrameID:(NSInteger)arg0 ;
-(void)releaseCachedResources;
-(void)renderImmediately;
-(void)setNeedsRender;


@end


#endif