// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWUBPROCESSORINPUT_H
#define BWUBPROCESSORINPUT_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BWNoiseReductionAndFusionProcessorInput, BWUBProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageCaptureStreamSettings.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageSettings.h"

@interface BWUBProcessorInput : BWStillImageProcessorInput <BWNoiseReductionAndFusionProcessorInput>

 {
    NSMutableArray *_frames;
    BOOL _keepFrames;
    int _receivedFrames;
    BOOL _receivedAllFrames;
    *opaqueCMSampleBuffer _referenceFrame;
    *opaqueCMSampleBuffer _errorRecoveryFrame;
    int _adaptiveBracketingStopFrameCount;
    NSMutableDictionary *_oisRecenteringLoggingData;
}


@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BWUBProcessorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emitErrorRecoveryFrame; // ivar: _emitErrorRecoveryFrame
@property (readonly, nonatomic) *opaqueCMSampleBuffer errorRecoveryFrame;
@property (readonly, nonatomic) *opaqueCMSampleBuffer evMinusReferenceFrame;
@property (nonatomic) int fusionMode; // ivar: _fusionMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL keepFrames;
@property (readonly, nonatomic) NSMutableDictionary *oisRecenteringLoggingData;
@property (readonly, nonatomic) *opaqueCMSampleBuffer originalImage;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) BOOL receivedAllFrames;
@property (readonly, nonatomic) int receivedFrames;
@property (readonly, nonatomic) *opaqueCMSampleBuffer referenceFrame;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) BWStillImageSettings *stillImageSettings;
@property (readonly) Class superclass;


-(id)adaptiveBracketingParameters;
-(id)frames;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)stopAdaptiveBracketingNow;
-(void)stopAdaptiveBracketingWithGroup:(int)arg0 ;
-(void)updateAdaptiveBracketingFrameParametersIfNeededUsingFrame:(struct opaqueCMSampleBuffer *)arg0 err:(int)arg1 ;


@end


#endif