// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCOACHINGGLYPHRENDERER_H
#define ARCOACHINGGLYPHRENDERER_H

@class CAMetalLayer, NSString;
@protocol ARCoachingRenderer, ARCoachingGlyphStateDelegate, MTLDevice, MTLTexture, OS_dispatch_queue, MTLComputePipelineState, MTLRenderPipelineState;

#import <Foundation/Foundation.h>

#import "ARCoachingGlyphState.h"
#import "ARCoachingAnimTime.h"
#import "ARCoachingQuaternionSpring.h"
#import "ARCoachingSpringDouble3.h"
#import "ARCoachingStateSpring.h"
#import "ARCoachingBasicSpring.h"
#import "ARCoachingMetalSplineData.h"
#import "ARCoachingDeviceController.h"
#import "ARCoachingDotsRenderer.h"

@interface ARCoachingGlyphRenderer : NSObject <ARCoachingRenderer, ARCoachingGlyphStateDelegate>

 {
    id<MTLDevice> *_device;
    NSUInteger _pixelFormat;
    id<MTLTexture> *_msaaTex;
    int _sampleCount;
    CAMetalLayer *_layer;
    float _edgeFactor;
    float _insideFactor;
    ARCoachingGlyphState *_state;
    float _strokeWeight;
    ARCoachingAnimTime *_time;
    ARCoachingQuaternionSpring *_rotationSpring;
    ARCoachingSpringDouble3 *_scaleSpring;
    ARCoachingSpringDouble3 *_topPlaneTranslationSpring;
    ARCoachingSpringDouble3 *_bottomPlaneTranslationSpring;
    ARCoachingStateSpring *_cubeResolveSpring;
    ARCoachingStateSpring *_planeResolveSpring;
    ARCoachingStateSpring *_verticalResolvingSpring;
    ARCoachingStateSpring *_alphaSpring;
    ARCoachingBasicSpring *_orientationSpring;
    ? _rotation;
    ? _angularVelocity;
    ? _R;
    ? _MVP;
    ? _mvp_ortho;
    ? _mvp_persp;
    ARCoachingMetalSplineData *_splineData;
    ARCoachingDeviceController *_deviceController;
    ARCoachingDeviceController *_parallaxDeviceController;
    CGSize _lastDrawableSize;
    BOOL _dirty_tesselation_factors;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) float a_vel; // ivar: _a_vel
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *computePipelineState; // ivar: _computePipelineState
@property (readonly, nonatomic) CGFloat currentAnimationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ARCoachingDotsRenderer *dotsRenderer; // ivar: _dotsRenderer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLRenderPipelineState> *postTessellationPipelineState; // ivar: _postTessellationPipelineState
@property (nonatomic) float rotationAngleY; // ivar: _rotationAngleY
@property (readonly, nonatomic) ARCoachingGlyphState *state;
@property (readonly) Class superclass;


-(id)initWithLayer:(id)arg0 device:(id)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(int)arg3 deviceMaskImage:(id)arg4 ;
-(void)bottomPlaneTranslationTargetChanged;
-(void)computeRotation:(CGFloat)arg0 ;
-(void)computeTesselationFactorsForCommandBuffer:(id)arg0 ;
-(void)drawWithTimeDelta:(CGFloat)arg0 drawable:(id)arg1 commandBuffer:(id)arg2 ;
-(void)generateTexturesWithSize:(struct CGSize )arg0 ;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)quaternionTargetChanged;
-(void)renderPostTessellationInDrawable:(id)arg0 withCommandBuffer:(id)arg1 ;
-(void)resetAnimationTime:(CGFloat)arg0 ;
-(void)resetData;
-(void)resetSprings;
-(void)resizeIfNeeded:(id)arg0 ;
-(void)restartAnimation;
-(void)scaleTargetChanged;
-(void)setOrientationAngle:(float)arg0 ;
-(void)snapStateChanged;
-(void)stepSprings:(CGFloat)arg0 ;
-(void)topPlaneTranslationTargetChanged;
-(void)updateAngularVelocity;


@end


#endif