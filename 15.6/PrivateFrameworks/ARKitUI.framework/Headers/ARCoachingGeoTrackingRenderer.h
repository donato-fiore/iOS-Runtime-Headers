// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGGEOTRACKINGRENDERER_H
#define ARCOACHINGGEOTRACKINGRENDERER_H

@class CAMetalLayer, NSMutableArray, NSString;
@protocol ARCoachingRenderer, MTLDevice, OS_dispatch_queue, MTLDepthStencilState, MTLRenderPipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "ARCoachingGlyphState.h"
#import "ARCoachingAnimTime.h"
#import "ARCoachingStateSpring.h"
#import "ARCoachingBasicSpring.h"
#import "ARCoachingDeviceController.h"

@interface ARCoachingGeoTrackingRenderer : NSObject <ARCoachingRenderer>

 {
    id<MTLDevice> *_device;
    NSUInteger _pixelFormat;
    ARCoachingGlyphState *_state;
    CAMetalLayer *_layer;
    ARCoachingAnimTime *_time;
    ARCoachingStateSpring *_cubeResolveSpring;
    ARCoachingStateSpring *_verticalResolvingSpring;
    ARCoachingBasicSpring *_orientationSpring;
    ARCoachingDeviceController *_deviceController;
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLDepthStencilState> *_depthState;
    id<MTLRenderPipelineState> *_inflatedHullPipeline;
    id<MTLRenderPipelineState> *_blockColorPipeline;
    id<MTLBuffer> *_contentVertexPositions;
    id<MTLBuffer> *_contentVertexGenerics;
    NSMutableArray *_contentIndexBuffers;
    ? _projectionMatrix;
    ? _contentCameraMVPMatrix;
    float _ftime;
    id<MTLTexture> *_depthTexture;
}


@property (readonly, nonatomic) CGFloat currentAnimationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARCoachingGlyphState *state;
@property (readonly) Class superclass;


-(BOOL)loadOutlineModelWith:(*id)arg0 ;
-(id)initWithLayer:(id)arg0 device:(id)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(int)arg3 deviceMaskImage:(id)arg4 ;
-(void)drawBuildingOutlineWithTimeDelta:(CGFloat)arg0 drawable:(id)arg1 commandBuffer:(id)arg2 ;
-(void)drawDeviceWithTimeDelta:(CGFloat)arg0 drawable:(id)arg1 commandBuffer:(id)arg2 ;
-(void)drawWithTimeDelta:(CGFloat)arg0 drawable:(id)arg1 commandBuffer:(id)arg2 ;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)resetAnimationTime:(CGFloat)arg0 ;
-(void)resizeIfNeeded:(id)arg0 ;
-(void)setOrientationAngle:(float)arg0 ;
-(void)updateFrameStateWithTimeDelta:(CGFloat)arg0 ;


@end


#endif