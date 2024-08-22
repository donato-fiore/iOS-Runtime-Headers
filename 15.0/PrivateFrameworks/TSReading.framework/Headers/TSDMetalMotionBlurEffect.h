// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMETALMOTIONBLUREFFECT_H
#define TSDMETALMOTIONBLUREFFECT_H

@class MTLRenderPassDescriptor;
@protocol MTLTexture, TSDMTLDataBuffer, TSDAnimationRandomGenerator, MTLCommandBuffer;

#import <Foundation/Foundation.h>

#import "TSDMetalShader.h"
#import "TSDMetalContext.h"

@interface TSDMetalMotionBlurEffect : NSObject {
    CGSize _framebufferSize;
    CGSize _slideSize;
    id<MTLTexture> *_combinedTextureColor1;
    id<MTLTexture> *_combinedTextureColor2;
    id<MTLTexture> *_combinedTextureVelocity;
    TSDMetalShader *_defaultTextureShader;
    TSDMetalShader *_colorAndVelocityShader;
    TSDMetalShader *_colorAndVelocityBlendingShader;
    TSDMetalShader *_velocityVisualizerShader;
    TSDMetalShader *_velocityCollectionShader;
    TSDMetalShader *_velocityTileMaxVerticalShader;
    TSDMetalShader *_velocityTileMaxHorizontalShader;
    TSDMetalShader *_velocityNeighborMaxHorizontalShader;
    TSDMetalShader *_velocityNeighborMaxVerticalShader;
    id<MTLTexture> *_colorTexture1;
    id<MTLTexture> *_colorTexture2;
    id<TSDMTLDataBuffer> *_colorFBODataBuffer;
    id<MTLTexture> *_velocityTexture1;
    id<MTLTexture> *_velocityTexture2;
    id<MTLTexture> *_velocityTextureSquashed;
    id<TSDMTLDataBuffer> *_velocityFBODataBuffer;
    id<TSDMTLDataBuffer> *_velocitySquashedFBODataBuffer;
    id<TSDMTLDataBuffer> *_FBODataBuffer;
    id<TSDMTLDataBuffer> *_FBODataBufferFlipped;
    MTLRenderPassDescriptor *_colorAndVelocityPassDescriptor;
    MTLRenderPassDescriptor *_tileHorizontalPassDescriptor;
    MTLRenderPassDescriptor *_tileVerticalPassDescriptor;
    MTLRenderPassDescriptor *_neighborHorizontalPassDescriptor;
    MTLRenderPassDescriptor *_neighborVerticalPassDescriptor;
    MTLRenderPassDescriptor *_combined1PassDescriptor;
    id<TSDAnimationRandomGenerator> *_randomGenerator;
    id<MTLCommandBuffer> *_currentCommandBuffer;
    TSDMetalContext *_metalContext;
}


@property (nonatomic) NSInteger debugDrawMode; // ivar: _debugDrawMode
@property (nonatomic) CGFloat framebufferScale; // ivar: _framebufferScale
@property (nonatomic) BOOL isSingleObject; // ivar: _isSingleObject
@property (nonatomic) CGFloat motionBlurStrength; // ivar: _motionBlurStrength


-(id)bindColorAndVelocityWithMetalContext:(id)arg0 shouldFillBackground:(BOOL)arg1 ;
-(id)colorAndVelocityBlendingShader;
-(id)colorAndVelocityShader;
-(id)initWithFramebufferSize:(struct CGSize )arg0 slideSize:(struct CGSize )arg1 randomGenerator:(id)arg2 metalContext:(id)arg3 ;
-(struct CATransform3D )adjustTransformForMotionBlurBuffer:(struct CATransform3D )arg0 ;
-(struct CGSize )p_squashedVelocityFramebufferSize;
-(struct CGSize )p_updateMaxVelocityInShadersWithScale:(CGFloat)arg0 isColorFBO:(BOOL)arg1 ;
-(struct CGSize )p_velocityFramebufferSize;
-(struct CGSize )p_velocityFramebufferTextureScale;
-(struct CGSize )velocityScale;
-(struct CGSize )velocityScaleForColorFBO:(BOOL)arg0 ;
-(void)drawResultWithWorkingRenderEncoder:(id)arg0 destinationRenderEncoder:(id)arg1 ;
-(void)drawResultWithWorkingRenderEncoder:(id)arg0 destinationRenderEncoder:(id)arg1 opacity:(CGFloat)arg2 ;
-(void)p_blitIntoColorFramebuffer;
-(void)p_blitIntoVelocityTexture;
-(void)p_debugDrawModeColorBufferWithEncoder:(id)arg0 ;
-(void)p_debugDrawModeVelocityBufferDilatedWithEncoder:(id)arg0 ;
-(void)p_debugDrawModeVelocityBufferWithEncoder:(id)arg0 ;
-(void)p_dilateVelocityTexture;
-(void)p_drawWithEncoder:(id)arg0 opacity:(CGFloat)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupRenderPasses;
-(void)p_setupShaders;
-(void)p_setupTextures;
-(void)setupMotionBlurEffectIfNecessary;


@end


#endif