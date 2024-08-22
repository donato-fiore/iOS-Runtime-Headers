// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNCAPTUREDEVICESOURCE_H
#define SCNCAPTUREDEVICESOURCE_H

@class AVCaptureDevice, AVCaptureSession, NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, MTLTexture;


#import "SCNTextureSource.h"

@interface SCNCaptureDeviceSource : SCNTextureSource <AVCaptureVideoDataOutputSampleBufferDelegate>

 {
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    *__CVMetalTextureCache _textureCache;
    *__CVBuffer _pixelBuffer;
    id<MTLTexture> *_mtlTexture;
    BOOL _isFront;
    NSUInteger _width;
    NSUInteger _height;
}


@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)discardVideoData;


@end


#endif