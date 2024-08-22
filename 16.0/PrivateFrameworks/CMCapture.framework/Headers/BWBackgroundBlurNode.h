// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBACKGROUNDBLURNODE_H
#define BWBACKGROUNDBLURNODE_H

@class PTEffect, NSString;
@protocol BWFigVideoCaptureDevicePortraitEffectStudioLightQualityChangedDelegate;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWStats.h"
#import "BWDeviceOrientationMonitor.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWBackgroundBlurNode : BWNode <BWFigVideoCaptureDevicePortraitEffectStudioLightQualityChangedDelegate>

 {
    *opaqueCMFormatDescription _outputFormatDescription;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    PTEffect *_ptEffect;
    NSInteger _effectQuality;
    BOOL _stillImageCaptureEnabled;
    *OpaqueVTPixelTransferSession _stillImagePixelTransferSession;
    ? _stillCaptureQueue;
    unsigned int _stillCaptureEnqueueIndex;
    os_unfair_lock_s _bufferServicingLock;
    BWStats *_backgroundBlurProcessingTimeStats;
    int _numberOfFramesThatCouldNotBeBlurred;
    int _maxThermalSystemPressurelLevel;
    BOOL _previousEffectBypassed;
    int _maxLossyCompressionLevel;
    BOOL _fastSwitchEnabled;
    NSUInteger _availablePTEffects;
    NSUInteger _previousPTEffect;
    BOOL _isContinuityCapture;
    BOOL _upstreamDeviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
}


@property (nonatomic) NSUInteger activeBlurEffect; // ivar: _activeBlurEffect
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL effectBypassed; // ivar: _effectBypassed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeInput *stillImageInput; // ivar: _stillImageInput
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly) Class superclass;
@property (readonly, nonatomic) BWNodeInput *videoInput; // ivar: _videoInput
@property (readonly, nonatomic) BWNodeOutput *videoOutput; // ivar: _videoOutput


+(void)initialize;
-(id)initWithStillImageCaptureEnabled:(BOOL)arg0 maxLossyCompressionLevel:(int)arg1 fastSwitchEnabled:(BOOL)arg2 availableEffects:(NSUInteger)arg3 activeEffect:(NSUInteger)arg4 isHighQualitySupported:(BOOL)arg5 isRunningForContinuityCapture:(BOOL)arg6 upstreamDeviceOrientationCorrectionEnabled:(BOOL)arg7 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didChangePortraitEffectStudioLightQuality:(NSInteger)arg0 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif