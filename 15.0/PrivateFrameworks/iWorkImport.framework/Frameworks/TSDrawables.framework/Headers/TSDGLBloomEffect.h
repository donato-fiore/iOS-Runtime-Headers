// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLBLOOMEFFECT_H
#define TSDGLBLOOMEFFECT_H

@protocol TSDGLDataBuffer;

#import <Foundation/Foundation.h>

#import "TSDGLFrameBuffer.h"
#import "TSDGLShader.h"

@interface TSDGLBloomEffect : NSObject {
    CGSize _effectSize;
    CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    id<TSDGLDataBuffer> *_dataBuffer;
    id<TSDGLDataBuffer> *_blurTransferDataBuffer;
    id<TSDGLDataBuffer> *_blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect;
    BOOL _oldViewportRectInitialized;
}




-(id)initWithEffectSize:(struct CGSize )arg0 blurScale:(CGFloat)arg1 ;
-(void)bindFramebuffer;
-(void)dealloc;
-(void)drawBloomEffectWithMVPMatrix:(struct CATransform3D )arg0 bloomAmount:(CGFloat)arg1 currentGLFramebuffer:(int)arg2 GLState:(id)arg3 ;
-(void)p_blurColorBufferWithPreviousFramebuffer:(int)arg0 GLState:(id)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)teardown;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg0 ;


@end


#endif