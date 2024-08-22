// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNTEXTUREDELEGATESOURCE_H
#define SCNTEXTUREDELEGATESOURCE_H



#import "SCNTextureOffscreenRenderingSource.h"

@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource {
    CGFloat _lastUpdate;
    CGFloat _nextUpdateDate;
}


@property (retain, nonatomic) id *delegate; // ivar: _delegate


-(?)cleanup;
-(struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)__updateTextureWithDelegate:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 ;
-(void)dealloc;
-(void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;


@end


#endif