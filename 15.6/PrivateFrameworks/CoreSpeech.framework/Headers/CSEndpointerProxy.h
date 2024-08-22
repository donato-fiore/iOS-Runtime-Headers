// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSENDPOINTERPROXY_H
#define CSENDPOINTERPROXY_H

@class NSString, CSAudioRecordContext;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer, CSEndpointAnalyzerImpl;

#import <Foundation/Foundation.h>


@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer>



@property (weak, nonatomic) NSObject<CSEndpointAnalyzerImpl> *activeEndpointer; // ivar: _activeEndpointer
@property (nonatomic) CGFloat automaticEndpointingSuspensionEndTime;
@property (nonatomic) CGFloat bypassSamples;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endWaitTime;
@property (nonatomic) NSInteger endpointMode;
@property (nonatomic) NSInteger endpointStyle;
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerDelegate> *endpointerDelegate; // ivar: _endpointerDelegate
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerImplDelegate> *endpointerImplDelegate; // ivar: _endpointerImplDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CSEndpointAnalyzerImpl> *hybridEndpointer; // ivar: _hybridEndpointer
@property (nonatomic) CGFloat interspeechWaitTime;
@property (readonly, nonatomic) CGFloat lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) CGFloat lastStartOfVoiceActivityTime;
@property (retain, nonatomic) NSString *mhId;
@property (nonatomic) CGFloat minimumDurationForEndpointer;
@property (retain, nonatomic) NSObject<CSEndpointAnalyzerImpl> *nnvadEndpointer; // ivar: _nnvadEndpointer
@property (retain, nonatomic) CSAudioRecordContext *recordContext; // ivar: _recordContext
@property (nonatomic) BOOL recordingDidStop; // ivar: _recordingDidStop
@property (nonatomic) BOOL saveSamplesSeenInReset;
@property (nonatomic) CGFloat startWaitTime;
@property (readonly) Class superclass;


-(BOOL)isWatchRTSTriggered;
-(CGFloat)elapsedTimeWithNoSpeech;
-(CGFloat)trailingSilenceDurationAtEndpoint;
-(NSInteger)fetchCurrentEndpointerOperationMode;
-(NSUInteger)endPointAnalyzerType;
-(id)endpointerModelVersion;
-(id)init;
-(id)initForSidekick;
-(void)_setupNNVADEndpointer;
-(void)endpointer:(id)arg0 detectedTwoShotAtTime:(CGFloat)arg1 ;
-(void)endpointer:(id)arg0 didDetectHardEndpointAtTime:(CGFloat)arg1 withMetrics:(id)arg2 ;
-(void)endpointer:(id)arg0 didDetectStartpointAtTime:(CGFloat)arg1 ;
-(void)endpointer:(id)arg0 reportEndpointBufferHostTime:(NSUInteger)arg1 firstBufferHostTime:(NSUInteger)arg2 ;
-(void)logAnchorMachAbsTime:(NSUInteger)arg0 numSamplesProcessedBeforeAnchorTime:(NSUInteger)arg1 isAnchorTimeBuffered:(BOOL)arg2 ;
-(void)logHybridEndpointFeaturesWithEvent:(id)arg0 locale:(id)arg1 ;
-(void)preheat;
-(void)processASRFeatures:(id)arg0 fromServer:(BOOL)arg1 ;
-(void)processAudioSamplesAsynchronously:(id)arg0 ;
-(void)processFirstAudioPacketTimestamp:(id)arg0 firstAudioSampleSensorTimestamp:(NSUInteger)arg1 ;
-(void)processOSDFeatures:(id)arg0 withFrameDurationMs:(CGFloat)arg1 ;
-(void)processServerEndpointFeatures:(id)arg0 ;
-(void)processTaskString:(id)arg0 ;
-(void)recordingStoppedForReason:(NSInteger)arg0 ;
-(void)reset;
-(void)resetForNewRequestWithSampleRate:(NSUInteger)arg0 recordContext:(id)arg1 recordOption:(id)arg2 voiceTriggerInfo:(id)arg3 ;
-(void)resetForVoiceTriggerTwoShotWithSampleRate:(NSUInteger)arg0 ;
-(void)setActiveChannel:(NSUInteger)arg0 ;
-(void)setEndpointerOperationMode:(NSInteger)arg0 ;
-(void)setRequestMHUUID:(id)arg0 ;
-(void)shouldAcceptEagerResultForDuration:(CGFloat)arg0 resultsCompletionHandler:(id)arg1 ;
-(void)stopEndpointer;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg0 ;
-(void)updateEndpointerThreshold:(float)arg0 ;


@end


#endif