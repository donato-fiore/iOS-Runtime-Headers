// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRAYTRACINGSDOF_H
#define PTRAYTRACINGSDOF_H

@class NSString;
@protocol RenderingIntegration, MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTColor.h"
#import "PTRenderDebugLayer.h"

@interface PTRaytracingSDOF : NSObject <RenderingIntegration>

 {
    PTColor *_portraitColor;
    PTRenderDebugLayer *_debugLayer;
    NSInteger _debugRendering;
    CGSize _disparitySize;
    CGSize _colorSize;
    id<MTLDeviceSPI> *_device;
    PTRandomV1 _randomValues;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLTexture> *_linearRGBA;
    id<MTLTexture> *_raytracedRGBA;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)minimumResourceHeapSize;
-(id)createRenderStateWithQuality:(int)arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 debugRendering:(NSInteger)arg5 verbose:(BOOL)arg6 gpuProfiling:(BOOL)arg7 config:(id)arg8 ;
-(id)intermediateTextures;
-(id)randomPointInCircle;
-(int)computeRays:(float)arg0 fNumber:(float)arg1 disparityMinMax:(struct PTRayV1 *)arg2 rays:(int)arg3 rayCount:(id)arg4 renderState;
-(int)prewarm;
-(int)renderContinuousWithSource:(id)arg0 renderRequest:(id)arg1 ;
-(void)initRandomValues;
-(void)setResourceHeap:(id)arg0 ;


@end


#endif