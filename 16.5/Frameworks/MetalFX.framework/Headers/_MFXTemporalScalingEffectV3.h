// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFXTEMPORALSCALINGEFFECTV3_H
#define _MFXTEMPORALSCALINGEFFECTV3_H

@class MTLFXTemporalScaler, MPSGraphTensorData, NSString;
@protocol MTLFXTemporalScalerSPI, MTLDevice, MTLTexture, MTLCommandQueue, MTLEvent, MTLSharedEvent, OS_dispatch_queue, MTLFence;



@interface _MFXTemporalScalingEffectV3 : MTLFXTemporalScaler <MTLFXTemporalScalerSPI>

 {
    id<MTLDevice> *_device;
    ? _jitterOffset;
    ? _motionVectorScale;
    BOOL _autoExposureEnabled;
    id<MTLTexture> *_history;
    MPSGraphMPSGraphExecutableWrapper _net_wrapper;
    *BRNet_v3_Filter _filter;
    MPSGraphTensorData *_input_TensorData;
    MPSGraphTensorData *_output_TensorData;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLEvent> *_inputEvent;
    id<MTLEvent> *_outputEvent;
    id<MTLEvent> *_midProcessingStartEvent;
    id<MTLEvent> *_midProcessingDoneEvent;
    id<MTLSharedEvent> *_framePowerOnSharedEvent;
    id<MTLSharedEvent> *_frameSharedEvent;
    NSUInteger _inputEventValue;
    NSUInteger _outputEventValue;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}


@property (retain, nonatomic) NSObject<MTLTexture> *colorTexture; // ivar: _colorTexture
@property (readonly, nonatomic) NSUInteger colorTextureFormat; // ivar: _colorTextureFormat
@property (readonly, nonatomic) NSUInteger colorTextureUsage; // ivar: _colorTextureUsage
@property (nonatomic) ? currentViewToClipMatrix; // ivar: _currentViewToClipMatrix
@property (nonatomic) ? currentWorldToViewMatrix; // ivar: _currentWorldToViewMatrix
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MTLTexture> *debugTexture; // ivar: _debugTexture
@property (nonatomic, getter=isDepthReversed) BOOL depthReversed; // ivar: _reversedDepth
@property (retain, nonatomic) NSObject<MTLTexture> *depthTexture; // ivar: _depthTexture
@property (readonly, nonatomic) NSUInteger depthTextureFormat; // ivar: _depthTextureFormat
@property (readonly, nonatomic) NSUInteger depthTextureUsage; // ivar: _depthTextureUsage
@property (readonly, copy) NSString *description;
@property (nonatomic) float exposure;
@property (retain, nonatomic) NSObject<MTLTexture> *exposureTexture; // ivar: _exposureTexture
@property (retain, nonatomic) NSObject<MTLFence> *fence; // ivar: _fence
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inputContentHeight; // ivar: _inputContentHeight
@property (readonly, nonatomic) float inputContentMaxScale; // ivar: _inputContentMaxScale
@property (readonly, nonatomic) float inputContentMinScale; // ivar: _inputContentMinScale
@property (nonatomic) NSUInteger inputContentWidth; // ivar: _inputContentWidth
@property (readonly, nonatomic) NSUInteger inputHeight; // ivar: _inputHeight
@property (readonly, nonatomic) NSUInteger inputWidth; // ivar: _inputWidth
@property (nonatomic) float jitterOffsetX;
@property (nonatomic) float jitterOffsetY;
@property (retain, nonatomic) NSObject<MTLTexture> *motionTexture; // ivar: _motionTexture
@property (readonly, nonatomic) NSUInteger motionTextureFormat; // ivar: _motionTextureFormat
@property (readonly, nonatomic) NSUInteger motionTextureUsage; // ivar: _motionTextureUsage
@property (nonatomic) float motionVectorScaleX;
@property (nonatomic) float motionVectorScaleY;
@property (readonly, nonatomic) NSUInteger outputHeight; // ivar: _outputHeight
@property (retain, nonatomic) NSObject<MTLTexture> *outputTexture; // ivar: _outputTexture
@property (readonly, nonatomic) NSUInteger outputTextureFormat; // ivar: _outputTextureFormat
@property (readonly, nonatomic) NSUInteger outputTextureUsage; // ivar: _outputTextureUsage
@property (readonly, nonatomic) NSUInteger outputWidth; // ivar: _outputWidth
@property (nonatomic) float preExposure; // ivar: _preExposure
@property (nonatomic) CGPoint previousJitterOffset; // ivar: _previousJitterOffset
@property (nonatomic) ? previousViewToClipMatrix; // ivar: _previousViewToClipMatrix
@property (nonatomic) ? previousWorldToViewMatrix; // ivar: _previousWorldToViewMatrix
@property (nonatomic) BOOL reset; // ivar: _reset
@property (readonly) Class superclass;


-(BOOL)reversedDepth;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(struct CGPoint )jitterOffset;
-(struct CGPoint )motionVectorScale;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 ;
-(void)encodeToCommandQueue:(id)arg0 ;
-(void)setJitterOffset:(struct CGPoint )arg0 ;
-(void)setMotionVectorScale:(struct CGPoint )arg0 ;
-(void)setReversedDepth:(BOOL)arg0 ;


@end


#endif