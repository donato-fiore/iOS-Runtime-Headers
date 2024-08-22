// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTREAMINGRAYTRACINGSDOFRENDERER_H
#define BWSTREAMINGRAYTRACINGSDOFRENDERER_H

@class FigMetalContext, PTRenderPipeline, PTRenderRequest, MTLTextureDescriptor, NSString;
@protocol BWFilterRenderer, PTRenderState;

#import <Foundation/Foundation.h>

#import "BWFigVideoCaptureDevice.h"

@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer>

 {
    FigMetalContext *_metalContext;
    PTRenderPipeline *_ptRenderPipeline;
    PTRenderRequest *_ptRenderRequest;
    MTLTextureDescriptor *_texDesc;
    MTLTextureDescriptor *_texDescUV;
    MTLTextureDescriptor *_texDescDisparity;
    BWFigVideoCaptureDevice *_captureDevice;
    id<PTRenderState> *_ptRenderState;
    BOOL _isFullRange;
    BOOL _renderStateIsConfigured;
    NSInteger _YCbCrColorDepth;
    ? _alignment;
}


@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) short type;


+(void)initialize;
-(id)getPTTexture:(struct __CVBuffer *)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 ;
-(int)createTextureDescriptorsWithColorVideoFormat:(id)arg0 depthVideoFormat:(id)arg1 ;
-(int)prepareForRenderingWithParameters:(id)arg0 inputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 completionHandler:(id)arg5 ;


@end


#endif