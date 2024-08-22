// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLMOTIONBLUREFFECT_H
#define TSDGLMOTIONBLUREFFECT_H

@class TSDGLState;
@protocol TSDGLDataBuffer, TSDAnimationRandomGenerator;

#import <Foundation/Foundation.h>

#import "TSDGLFrameBuffer.h"
#import "TSDGLShader.h"

@interface TSDGLMotionBlurEffect : NSObject {
    CGSize _framebufferSize;
    CGSize _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    id<TSDGLDataBuffer> *_colorFBODataBuffer;
    id<TSDGLDataBuffer> *_velocityFBODataBuffer;
    id<TSDGLDataBuffer> *_velocitySquashedFBODataBuffer;
    id<TSDGLDataBuffer> *_FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport;
    id<TSDAnimationRandomGenerator> *_randomGenerator;
}


@property (retain, nonatomic) TSDGLState *GLState; // ivar: _GLState
@property (nonatomic) NSInteger debugDrawMode; // ivar: _debugDrawMode
@property (nonatomic) CGFloat framebufferScale; // ivar: _framebufferScale
@property (nonatomic) BOOL isSingleObject; // ivar: _isSingleObject
@property (nonatomic) CGFloat motionBlurStrength; // ivar: _motionBlurStrength


-(id)description;
-(id)initWithFramebufferSize:(struct CGSize )arg0 slideSize:(struct CGSize )arg1 randomGenerator:(id)arg2 ;
-(struct CGSize )p_squashedVelocityFramebufferSize;
-(struct CGSize )p_velocityFramebufferSize;
-(struct CGSize )p_velocityFramebufferTextureScale;
-(struct CGSize )velocityScaleForColorFBO:(BOOL)arg0 ;
-(void)bindColorAndVelocityFramebuffer;
-(void)bindColorFramebuffer;
-(void)bindVelocityFramebuffer;
-(void)dealloc;
-(void)drawResultWithCurrentGLFramebuffer:(int)arg0 ;
-(void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg0 ;
-(void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg0 ;
-(void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg0 ;
-(void)p_setupShaders;
-(void)p_setupVelocityFramebufferIfNecessary;
-(void)p_updateMaxVelocityInShadersWithScale:(CGFloat)arg0 isColorFBO:(BOOL)arg1 ;
-(void)setupMotionBlurEffectIfNecessary;
-(void)teardown;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg0 ;
-(void)updateVelocityScaleInShader:(id)arg0 ;


@end


#endif