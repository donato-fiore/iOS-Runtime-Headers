// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPIXELTRANSFERNODE_H
#define BWPIXELTRANSFERNODE_H

@class NSArray, HDRProcessor, NSString;
@protocol BWNodeBackPressureSource, OS_dispatch_semaphore;


#import "BWNode.h"
#import "BWDeviceOrientationMonitor.h"
#import "BWPixelBufferPool.h"
#import "BWLimitedGMErrorLogger.h"

@interface BWPixelTransferNode : BWNode <BWNodeBackPressureSource>

 {
    int _cropMode;
    int _liveCropMode;
    CGRect _inputCropRect;
    CGRect _liveInputCropRect;
    BOOL _haveLiveInputCropRect;
    BOOL _passesBuffersThroughWhenPossible;
    BOOL _livePassesBuffersThroughWhenPossible;
    BOOL _appliesUprightExifOrientationTransformToInput;
    BOOL _liveAppliesUprightExifOrientationTransformToInput;
    int _rotationDegrees;
    int _liveRotationDegrees;
    BOOL _flipHorizontal;
    BOOL _liveFlipHorizontal;
    BOOL _flipVertical;
    BOOL _liveFlipVertical;
    BOOL _liveZeroFillBuffers;
    BOOL _deviceOrientationCorrectionEnabled;
    BOOL _liveDeviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    int _prevLiveDeviceOrientationCorrectionDegrees;
    BOOL _lowSpeed;
    BOOL _liveLowSpeed;
    BOOL _updatesSampleBufferMetadataForIrisVIS;
    BOOL _liveUpdatesSampleBufferMetadataForIrisVIS;
    NSUInteger _outputWidth;
    NSUInteger _outputHeight;
    unsigned int _outputPixelFormat;
    NSArray *_preferredOutputPixelFormats;
    int _outputColorSpaceProperties;
    ? _validOutputDimensions;
    ? _liveValidOutputDimensions;
    int _maxOutputLossyCompressionLevel;
    int _maxInputLossyCompressionLevel;
    *OpaqueVTPixelRotationSession _rotationSession;
    int _rotationSessionRotationDegrees;
    BOOL _rotationSessionFlipHorizontal;
    BOOL _rotationSessionFlipVertical;
    BOOL _rotationSessionZeroFillBuffers;
    BOOL _rotationSessionLowSpeed;
    BOOL _rotationSessionEnablesHistogram;
    int _rotationSessionColorSpaceProperties;
    int _lastInputUprightExifOrientation;
    *OpaqueVTPixelTransferSession _transferSession;
    BWPixelBufferPool *_intermediateBufferPool;
    ? _intermediatePoolDimensions;
    *opaqueCMFormatDescription _outputFormatDescription;
    BOOL _makeCurrentConfigurationLiveOnNextRenderCallback;
    NSObject<OS_dispatch_semaphore> *_emitSampleBufferSemaphore;
    BOOL _expectsMarkerBuffers;
    BOOL _liveExpectsMarkerBuffers;
    BOOL _appliesPrimaryCaptureRect;
    BOOL _generatesHistogram;
    int _conversionMethodForStillImagesDuringHDRVideo;
    BOOL _allows422To420Conversion;
    BOOL _isConverting10BitVideoRangeTo8BitFullRangeEncouraged;
    *__CVBuffer _intermediatePixelBufferForStillHDRToSDRConversion;
    HDRProcessor *_HDRProcessingProcessor;
    *__IOSurfaceAccelerator _msrScalerForHDRProcessing;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    BOOL _doGMLogging;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property BOOL firstFrameProcessed; // ivar: _firstFrameProcessed
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)allows422To420Conversion;
-(BOOL)appliesPrimaryCaptureRect;
-(BOOL)appliesUprightExifOrientationTransformToInput;
-(BOOL)deviceOrientationCorrectionEnabled;
-(BOOL)expectsMarkerBuffers;
-(BOOL)flipHorizontal;
-(BOOL)flipVertical;
-(BOOL)generatesHistogram;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)isConverting10BitVideoRangeTo8BitFullRangeEncouraged;
-(BOOL)lowSpeed;
-(BOOL)passesBuffersThroughWhenPossible;
-(BOOL)updatesSampleBufferMetadataForIrisVIS;
-(NSUInteger)outputHeight;
-(NSUInteger)outputWidth;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(id)preferredOutputPixelFormats;
-(int)conversionMethodForStillImagesDuringHDRVideos;
-(int)cropMode;
-(int)maxInputLossyCompressionLevel;
-(int)maxLossyCompressionLevel;
-(int)maxOutputLossyCompressionLevel;
-(int)outputColorSpaceProperties;
-(int)rotationDegrees;
-(struct ? )validOutputDimensions;
-(struct CGRect )inputCropRect;
-(unsigned int)outputPixelFormat;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAllows422To420Conversion:(BOOL)arg0 ;
-(void)setAppliesPrimaryCaptureRect:(BOOL)arg0 ;
-(void)setAppliesUprightExifOrientationTransformToInput:(BOOL)arg0 ;
-(void)setConversionMethodForStillImagesDuringHDRVideos:(int)arg0 ;
-(void)setConverting10BitVideoRangeTo8BitFullRangeEncouraged:(BOOL)arg0 ;
-(void)setCropMode:(int)arg0 ;
-(void)setDeviceOrientationCorrectionEnabled:(BOOL)arg0 ;
-(void)setExpectsMarkerBuffers:(BOOL)arg0 ;
-(void)setFlipHorizontal:(BOOL)arg0 ;
-(void)setFlipVertical:(BOOL)arg0 ;
-(void)setGeneratesHistogram:(BOOL)arg0 ;
-(void)setInputCropRect:(struct CGRect )arg0 ;
-(void)setLowSpeed:(BOOL)arg0 ;
-(void)setMaxInputLossyCompressionLevel:(int)arg0 ;
-(void)setMaxLossyCompressionLevel:(int)arg0 ;
-(void)setMaxOutputLossyCompressionLevel:(int)arg0 ;
-(void)setOutputColorSpaceProperties:(int)arg0 ;
-(void)setOutputHeight:(NSUInteger)arg0 ;
-(void)setOutputPixelFormat:(unsigned int)arg0 ;
-(void)setOutputWidth:(NSUInteger)arg0 ;
-(void)setPassesBuffersThroughWhenPossible:(BOOL)arg0 ;
-(void)setPreferredOutputPixelFormats:(id)arg0 ;
-(void)setRotationDegrees:(int)arg0 ;
-(void)setUpdatesSampleBufferMetadataForIrisVIS:(BOOL)arg0 ;
-(void)setValidOutputDimensions:(struct ? )arg0 ;


@end


#endif