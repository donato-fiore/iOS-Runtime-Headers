// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCWHISKYCONTROLLER_H
#define MPCWHISKYCONTROLLER_H

@class NSDate, NSString, MSVTimer;
@protocol MPCPlaybackEngineEventObserving, MPCVocalAttenuationPolicyControllerDelegate, OS_dispatch_queue, MPCVocalAttenuationModelProvider, MPCVocalAttenuationProcessor;


#import "MPCSingleTrackAudioProcessor.h"
#import "MPCWhiskyControllerDisabledState.h"
#import "MPCVocalAttenuationPolicyController.h"
#import "MPCRecordingSession.h"

@interface MPCWhiskyController : MPCSingleTrackAudioProcessor <MPCPlaybackEngineEventObserving, MPCVocalAttenuationPolicyControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_setupQueue;
    float _vocalLevel;
    BOOL _processIsBackgrounded;
    NSDate *_shutdownSequenceStartDate;
    float _minVocalLevel;
    float _maxVocalLevel;
    float _defaultVocalLevel;
    MPCWhiskyControllerDisabledState *_disabledState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSObject<MPCVocalAttenuationModelProvider> *modelProvider; // ivar: _modelProvider
@property (readonly, nonatomic) MPCVocalAttenuationPolicyController *policyController; // ivar: _policyController
@property (readonly, nonatomic) NSObject<MPCVocalAttenuationProcessor> *processor; // ivar: _processor
@property (readonly, nonatomic) MPCRecordingSession *recordingSession; // ivar: _recordingSession
@property (readonly, nonatomic) CGFloat renderingTimeLimit;
@property (retain, nonatomic) MSVTimer *shutdownTimer; // ivar: _shutdownTimer
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)shouldAttachAudioTapToItem:(id)arg0 ;
-(float)_processorLevelForVocalLevel:(float)arg0 ;
-(float)_vocalLevelForProcessorLevel:(float)arg0 ;
-(id)blockingPolicy;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 modelProvider:(id)arg1 processor:(id)arg2 ;
-(unsigned int)creationFlags;
-(void)_emitStatisticsEvent;
-(void)_loadModel;
-(void)_startShutdownSequenceIfRelevant;
-(void)_stopShutdownSequenceIfRelevant;
-(void)_tearDownTapData;
-(void)_updateState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 willChangeToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)engineDidResetMediaServices:(id)arg0 ;
-(void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg0 ;
-(void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg0 maxFrames:(NSInteger)arg1 processingFormat:(struct AudioStreamBasicDescription *)arg2 ;
-(void)processTap:(struct opaqueMTAudioProcessingTap *)arg0 sampleIndex:(NSInteger)arg1 numberFrames:(NSInteger)arg2 flags:(unsigned int)arg3 audioBufferList:(struct AudioBufferList *)arg4 numberFramesOut:(*NSInteger)arg5 flagsOut:(*unsigned int)arg6 ;
-(void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg0 ;
-(void)vocalAttenuationPolicyControllerDidChange:(id)arg0 ;


@end


#endif