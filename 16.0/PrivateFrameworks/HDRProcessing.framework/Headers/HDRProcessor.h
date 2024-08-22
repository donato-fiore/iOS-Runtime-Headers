// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRPROCESSOR_H
#define HDRPROCESSOR_H

@protocol MTLDevice, MTLCommandQueue, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "MSRHDRProcessing.h"
#import "DolbyVisionComposer.h"
#import "SpatialResampler.h"
#import "DolbyVisionDisplayManagement.h"

@interface HDRProcessor : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    NSUInteger chipID;
    MSRHDRProcessing *_msr;
    DolbyVisionComposer *_composer;
    SpatialResampler *_resampler;
    DolbyVisionDisplayManagement *_dm;
    *EDRMetaData_RBSP _parser;
    ? _edrMetaData;
    unsigned int _hardwareType;
    unsigned int _hdrMode;
    NSUInteger _bitDepth;
    float _sdrMaxBrightnessInNits;
    unsigned int _displayType;
    NSUInteger _displayDiagonalSize;
    NSUInteger _maxDisplayBrightnessNits;
    float _minDisplayBrightnessNits;
    float _displayContrastRatio;
    float _displayAveragePixelThreshold;
    float _displayAveragePixelWeightR;
    float _displayAveragePixelWeightG;
    float _displayAveragePixelWeightB;
    float _displaySustainedBrightnessInNits;
    unsigned int _displayCompensationType;
    float _displayCompensationGammaValue;
    int _ambientViewingEnvironmentType;
    unsigned int _inputFormatRaw;
    unsigned int _outputFormatRaw;
    unsigned int _inputFormat;
    unsigned int _outputFormat;
    NSUInteger _videoFullRangeFlag;
    NSUInteger _colourPrimaries;
    NSUInteger _transferFunction;
    NSUInteger _matrixCoeffs;
    NSUInteger _colorSpace;
    NSUInteger _outputColorSpace;
    NSUInteger _outputMatrixCoeffs;
    NSUInteger _outputTransferFunction;
    NSUInteger _maxMasteringNits;
    float _minMasteringNits;
    NSUInteger _numberOfRequestedFrames;
    NSUInteger _numberOfScheduledFrames;
    NSUInteger _numberOfProcessedFrames;
    ? _configurationParameters;
    *__CVPixelBufferPool _420vPool;
    *__CVPixelBufferPool _x420Pool;
    NSObject<OS_dispatch_queue> *_scheduleQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_semaphore> *_scheduleSemaphone;
    *__CFError _error_success;
    NSUInteger logInstanceID;
    BOOL _logOnce;
}


@property float defaultAmbientLightValue; // ivar: _defaultAmbientLightValue
@property float defaultContrastRatioValue; // ivar: _defaultContrastRatioValue
@property float defaultEDRFactorValue; // ivar: _defaultEDRFactorValue
@property float defaultMaxEDRValue; // ivar: _defaultMaxEDRValue
@property *__CFString targetColorPrimaries; // ivar: _targetColorPrimaries
@property CGFloat targetMinNits; // ivar: _targetMinNits
@property CGFloat targetNits; // ivar: _targetNits


+(?)dolbyIOMFBMetadata:(?)arg0 withMinBrightnessmaxBrightness;
+(BOOL)isNSDataNonEmpty:(id)arg0 dataLength:(*NSUInteger)arg1 dataBytes:(*char *)arg2 ;
-(?)checkInputIOSurface:(?)arg0 forInfoFramewithRPUData;
-(?)checkInputOutputIOSurface:(?)arg0 output:(?)arg1 tcControl:(?)arg2 forInfoFramewithRPUData;
-(?)extractFrameMetadataintoTCControl;
-(?)extractHEVCHDRParameterFromInputIOSurfaceForDoviforInfoFrame;
-(?)extractHEVCHDRParameterFromInputIOSurfaceforInfoFrame;
-(?)initWithDeviceconfig;
-(?)processFrameInternalWithLayer0:(?)arg0 layer1:(?)arg1 outout:(?)arg2 metadata:(?)arg3 commandbuffer:(?)arg4 operation:(?)arg5 config:(?)arg6 histogramdata;
-(?)processPixelsWithLayer0:(?)arg0 layer1:(?)arg1 output:(?)arg2 metaData:(?)arg3 tcControl:(?)arg4 hdrControl:(?)arg5 hdr10InfoFramecommandbuffer;
-(?)setCSCMatrixInHDRControlforIndex;
-(?)setHDRControl:(?)arg0 withTCControl:(?)arg1 withRPU:(?)arg2 withDmDatawithOperation;
-(BOOL)allocateResources;
-(BOOL)hasMetalDeviceChanged:(id)arg0 ;
-(NSInteger)ValidateMSRColorConfigInput:(unsigned int)arg0 inputSurface:(struct __IOSurface *)arg1 outputSurface:(struct __IOSurface *)arg2 ;
-(NSInteger)encodeToCommandBuffer:(id)arg0 inputSurfaceLayer0:(struct __IOSurface *)arg1 inputSurfacelayer1:(struct __IOSurface *)arg2 outputSurface:(struct __IOSurface *)arg3 metadata:(id)arg4 ;
-(NSInteger)generateMSRColorConfigWithOperation:(unsigned int)arg0 inputSurface:(struct __IOSurface *)arg1 outputSurface:(struct __IOSurface *)arg2 metadata:(id)arg3 histogram:(struct RgbHistogram_t *)arg4 config:(*id)arg5 ;
-(NSInteger)processFrameWithLayer0:(struct __CVBuffer *)arg0 layer1:(struct __CVBuffer *)arg1 output:(struct __CVBuffer *)arg2 metadata:(id)arg3 commandbuffer:(id)arg4 callback:(id)arg5 ;
-(id)initWithConfig:(struct ? *)arg0 ;
-(unsigned int)selectHDRUsage:(unsigned int)arg0 withRPU:(BOOL)arg1 ;
-(void)checkOutputIOSurface:(struct __IOSurface *)arg0 ;
-(void)dealloc;
-(void)extractCAMetaData:(id)arg0 withRPU:(BOOL)arg1 ;
-(void)extractHEVCHDRParameterFromOutputIOSurface:(struct __IOSurface *)arg0 ;
-(void)getAmbientViewingEnvironmentType:(struct __IOSurface *)arg0 ;
-(void)getDisplayPipelineCompensationType:(id)arg0 gamma:(float)arg1 ;
-(void)releaseResources;


@end


#endif