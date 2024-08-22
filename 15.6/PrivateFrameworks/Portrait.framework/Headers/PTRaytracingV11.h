// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV11_H
#define PTRAYTRACINGV11_H

@class NSDictionary, NSString;
@protocol RenderingIntegration, MTLDeviceSPI, MTLBuffer, MTLLibrary, MTLPipelineLibrary, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTRaytracingV11RenderState.h"
#import "PTColor.h"
#import "PTPyramidYUV.h"
#import "PTRenderDebugLayer.h"

@interface PTRaytracingV11 : NSObject <RenderingIntegration>

 {
    PTRaytracingV11RenderState *_renderState;
    NSDictionary *_config;
    PTColor *_portraitColor;
    PTPyramidYUV *_yuvPyramid;
    PTRenderDebugLayer *_debugLayer;
    NSInteger _debugRendering;
    CGSize _disparitySize;
    CGSize _colorSize;
    id<MTLDeviceSPI> *_device;
    id<MTLBuffer> *_randomValues;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLTexture> *_raytracedYUVRadius;
    id<MTLTexture> *_guideRGBA;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)minimumResourceHeapSize;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 debugRendering:(NSInteger)arg5 verbose:(BOOL)arg6 gpuProfiling:(BOOL)arg7 config:(id)arg8 quality:(int)arg9 ;
-(int)prewarm;
-(int)renderContinuousWithSource:(id)arg0 renderRequest:(id)arg1 ;
-(void)setResourceHeap:(id)arg0 ;


@end


#endif