// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNCAPTUREDEVICEOUTPUTCONSUMERSOURCE_H
#define SCNCAPTUREDEVICEOUTPUTCONSUMERSOURCE_H

@class NSString;
@protocol SCNCaptureDeviceOutputConsumer, MTLTexture;


#import "SCNTextureSource.h"

@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource <SCNCaptureDeviceOutputConsumer>

 {
    *__CVMetalTextureCache _textureCache;
    *__CVBuffer _pixelBuffer;
    id<MTLTexture> *_mtlTexture;
    BOOL _containsAlpha;
    BOOL _isFront;
    NSUInteger _width;
    NSUInteger _height;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsAlpha;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)discardVideoData;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 fromDevice:(id)arg1 ;
-(void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 fromDevice:(id)arg1 ;


@end


#endif