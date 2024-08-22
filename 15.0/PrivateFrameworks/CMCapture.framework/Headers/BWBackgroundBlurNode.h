// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWBACKGROUNDBLURNODE_H
#define BWBACKGROUNDBLURNODE_H

@class PTEffect, NSString;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWStats.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWBackgroundBlurNode : BWNode {
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
}


@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (nonatomic) BOOL effectBypassed; // ivar: _effectBypassed
@property (readonly, nonatomic) BWNodeInput *stillImageInput; // ivar: _stillImageInput
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly, nonatomic) BWNodeInput *videoInput; // ivar: _videoInput
@property (readonly, nonatomic) BWNodeOutput *videoOutput; // ivar: _videoOutput


+(void)initialize;
-(id)_supportedInputPixelFormats;
-(id)_supportedOutputPixelFormats;
-(id)initWithStillImageCaptureEnabled:(BOOL)arg0 maxLossyCompressionLevel:(int)arg1 fastSwitchEnabled:(BOOL)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct __CVBuffer *)_createMatchingPixelBufferFromSavedVideoBuffersWithTargetPts:(struct ? )arg0 ;
-(struct __CVBuffer *)_newStillImageOutputPixelBufferFromVideoPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_reportBackgroundBlurCoreAnalyticsData;
-(void)_savePixelBufferForStillImageCaptureRequests:(struct __CVBuffer *)arg0 withPts:(struct ? )arg1 ;
-(void)_updateOutputRequirements;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif