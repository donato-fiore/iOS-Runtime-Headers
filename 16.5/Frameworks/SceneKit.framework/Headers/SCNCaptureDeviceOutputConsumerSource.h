// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCAPTUREDEVICEOUTPUTCONSUMERSOURCE_H
#define SCNCAPTUREDEVICEOUTPUTCONSUMERSOURCE_H

@class NSString;
@protocol SCNCaptureDeviceOutputConsumer;


#import "SCNTextureSource.h"

@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource <SCNCaptureDeviceOutputConsumer>

 {
    ? _data;
    *__CVMetalTextureCache _textureCache;
    BOOL _videoMirrored;
    BOOL _automaticallyAdjustsVideoMirroring;
    BOOL _containsAlpha;
    NSUInteger _width;
    NSUInteger _height;
}


@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;


-(BOOL)containsAlpha;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 fromDevice:(id)arg1 ;
-(void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 fromDevice:(id)arg1 ;


@end


#endif