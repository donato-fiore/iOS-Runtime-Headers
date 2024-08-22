// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNAVPLAYERSOURCE_H
#define SCNAVPLAYERSOURCE_H

@class AVPlayer;


#import "SCNTextureSource.h"

@interface SCNAVPlayerSource : SCNTextureSource {
    AVPlayer *_player;
    ? _data;
    *__CVMetalTextureCache _textureCache;
    NSUInteger _width;
    NSUInteger _height;
}


@property (retain, nonatomic) AVPlayer *player;


-(id)init;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)registerPlayerIfNeeded:(id)arg0 ;
-(void)unregisterPlayer:(id)arg0 ;


@end


#endif