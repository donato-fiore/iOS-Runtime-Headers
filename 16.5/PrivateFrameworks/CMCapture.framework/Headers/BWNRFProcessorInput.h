// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNRFPROCESSORINPUT_H
#define BWNRFPROCESSORINPUT_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BWNoiseReductionAndFusionProcessorInput, BWNRFProcessorInputDelegate;


#import "BWStillImageProcessorControllerInput.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageCaptureStreamSettings.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageSettings.h"

@interface BWNRFProcessorInput : BWStillImageProcessorControllerInput <BWNoiseReductionAndFusionProcessorInput>

 {
    NSMutableArray *_frames;
    *__CVBuffer _gainMapPixelBuffer;
    BOOL _keepFrames;
    int _receivedFrames;
    BOOL _receivedAllFrames;
    *opaqueCMSampleBuffer _referenceFrame;
    *opaqueCMSampleBuffer _errorRecoveryFrame;
    int _adaptiveBracketingStopFrameCount;
    NSMutableDictionary *_oisRecenteringLoggingData;
    int _ispMotionHighPassFilterConvergenceFlags;
}


@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BWNRFProcessorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emitErrorRecoveryFrame; // ivar: _emitErrorRecoveryFrame
@property (readonly, nonatomic) *opaqueCMSampleBuffer errorRecoveryFrame;
@property (readonly, nonatomic) *opaqueCMSampleBuffer evMinusReferenceFrame;
@property (readonly, nonatomic) int expectedFrameCount;
@property (nonatomic) int fusionMode; // ivar: _fusionMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) int ispMotionHighPassFilterConvergenceFlags;
@property (nonatomic) BOOL keepFrames;
@property (readonly, nonatomic) NSMutableDictionary *oisRecenteringLoggingData;
@property (readonly, nonatomic) *opaqueCMSampleBuffer originalImage;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) BOOL receivedAllFrames;
@property (readonly, nonatomic) int receivedFrames;
@property (readonly, nonatomic) *opaqueCMSampleBuffer referenceFrame;
@property (nonatomic) unsigned int remainingProcessingCount; // ivar: _remainingProcessingCount
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) BWStillImageSettings *stillImageSettings;
@property (readonly) Class superclass;


-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)setProcessedRawErrorRecoveryFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)stopAdaptiveBracketingWithGroup:(int)arg0 ;


@end


#endif