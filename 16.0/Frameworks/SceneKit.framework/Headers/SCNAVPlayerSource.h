// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNAVPLAYERSOURCE_H
#define SCNAVPLAYERSOURCE_H

@class AVPlayer, AVPlayerItemVideoOutput;
@protocol MTLTexture;


#import "SCNTextureSource.h"

@interface SCNAVPlayerSource : SCNTextureSource {
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    *__CVMetalTextureCache _textureCache;
    *__CVBuffer _pixelBuffer;
    id<MTLTexture> *_mtlTexture;
    NSUInteger _texturePixelFormat;
    unsigned char _videoSourceFormat;
    NSUInteger _width;
    NSUInteger _height;
}


@property (retain, nonatomic) AVPlayer *player;


-(id)init;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)discardVideoData;
-(void)registerPlayer:(id)arg0 ;
-(void)setVideoSourceFormat:(unsigned char)arg0 ;
-(void)unregisterPlayer:(id)arg0 ;


@end


#endif