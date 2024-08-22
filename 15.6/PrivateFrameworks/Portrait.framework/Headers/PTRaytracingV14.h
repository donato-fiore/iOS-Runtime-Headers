// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV14_H
#define PTRAYTRACINGV14_H

@class NSDictionary, NSString;
@protocol RenderingIntegration, MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary;

#import <Foundation/Foundation.h>

#import "PTRaytracingV14RenderState.h"
#import "PTColor.h"
#import "PTPyramidRGB.h"
#import "PTRenderDebugLayer.h"
#import "PTRaytracingUtils.h"
#import "PTUtil.h"

@interface PTRaytracingV14 : NSObject <RenderingIntegration>

 {
    PTRaytracingV14RenderState *_renderState;
    NSDictionary *_config;
    PTColor *_portraitColor;
    PTPyramidRGB *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    NSInteger _debugRendering;
    PTRaytracingUtils *_raytracingUtils;
    PTUtil *_util;
    CGSize _disparitySize;
    CGSize _colorSize;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    BOOL _injectedRGBAPyramid;
    BOOL _bicubicUpscale;
    PTFocusEdge _focusEdge;
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