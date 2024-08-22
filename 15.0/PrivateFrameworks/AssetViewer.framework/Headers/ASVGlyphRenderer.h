// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVGLYPHRENDERER_H
#define ASVGLYPHRENDERER_H

@class CALayer, NSString;
@protocol ASVGlyphStateDelegate, MTLDevice, MTLLibrary, MTLComputePipelineState, MTLRenderPipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "ASVGlyphState.h"
#import "ASVAnimTime.h"
#import "ASVQuaternionSpring.h"
#import "ASVSpringDouble3.h"
#import "ASVStateSpring.h"
#import "ASVBasicSpring.h"
#import "ASVMetalSplineData.h"
#import "ASVDotsRenderer.h"
#import "ASVDeviceController.h"

@interface ASVGlyphRenderer : NSObject <ASVGlyphStateDelegate>

 {
    id<MTLDevice> *_device;
    NSUInteger _pixelFormat;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLComputePipelineState> *_computePipelineState;
    id<MTLRenderPipelineState> *_postTessellationPipelineState;
    id<MTLTexture> *_msaaTex;
    int _sampleCount;
    CALayer *_layer;
    float _edgeFactor;
    float _insideFactor;
    ASVGlyphState *_state;
    float _strokeWeight;
    ASVAnimTime *_time;
    ASVQuaternionSpring *_rotationSpring;
    ASVSpringDouble3 *_scaleSpring;
    ASVSpringDouble3 *_translationSpring;
    ASVStateSpring *_cubeResolveSpring;
    ASVStateSpring *_planeResolveSpring;
    ASVStateSpring *_alphaSpring;
    ASVBasicSpring *_orientationSpring;
    ? _rotation;
    ? _angularVelocity;
    ? _R;
    ? _MVP;
    ? _mvp_ortho;
    ? _mvp_persp;
    ASVMetalSplineData *_splineData;
    ASVDotsRenderer *_dotsRenderer;
    ASVDeviceController *_deviceController;
    CGSize _lastDrawableSize;
    BOOL _dirty_tesselation_factors;
}


@property (nonatomic) float a_vel; // ivar: _a_vel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float rotationAngleY; // ivar: _rotationAngleY
@property (readonly, nonatomic) ASVGlyphState *state;
@property (readonly) Class superclass;


-(id)initWithLayer:(id)arg0 device:(id)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(int)arg3 deviceMaskImage:(id)arg4 ;
-(void)computeRotation:(CGFloat)arg0 ;
-(void)computeTesselationFactorsForCommandBuffer:(id)arg0 ;
-(void)drawWithTimeDelta:(CGFloat)arg0 drawable:(id)arg1 commandBuffer:(id)arg2 ;
-(void)generateTexturesWithSize:(struct CGSize )arg0 ;
-(void)quaternionTargetChanged;
-(void)renderPostTessellationInDrawable:(id)arg0 withCommandBuffer:(id)arg1 ;
-(void)resetData;
-(void)resizeIfNeeded:(id)arg0 ;
-(void)scaleTargetChanged;
-(void)setOrientationAngle:(float)arg0 ;
-(void)snapStateChanged;
-(void)stepSprings:(CGFloat)arg0 ;
-(void)translationTargetChanged;
-(void)updateAngularVelocity;


@end


#endif