// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRISPEECHRECORDINGCONTEXT_H
#define CSSIRISPEECHRECORDINGCONTEXT_H

@class NSString, CSAudioRecordContext, NSDictionary, NSURL, NSMutableSet, NSMutableDictionary, NSUUID;
@protocol OS_dispatch_queue, AFRelinquishableAssertion, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CSAudioRecordDeviceInfo.h"
#import "CSSiriRecordingInfo.h"
#import "CSSiriAudioFileWriter.h"

@interface CSSiriSpeechRecordingContext : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCurrent;
    NSString *_startSpeechId;
    NSString *_selectedResultCandidateId;
    CSAudioRecordContext *_audioRecordContext;
    CSAudioRecordDeviceInfo *_audioRecordDeviceInfo;
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_recordingSettings;
    CSSiriRecordingInfo *_recordingInfo;
    CSSiriAudioFileWriter *_audioFileWriter;
    NSURL *_recordedAudioFileURL;
    id<AFRelinquishableAssertion> *_startRecordingAudioSessionAssertion;
    id<AFRelinquishableAssertion> *_twoShotDetectionAudioSessionAssertion;
    NSObject<OS_dispatch_group> *_recordingAudioGroup;
    BOOL _voiceIdentificationTraining_allowsWithoutResultCandidate;
    NSMutableSet *_voiceIdentificationTraining_allowedResultCandidateIds;
    NSMutableDictionary *_voiceIdentificationTraining_resultCandidateToSharedUserIdMap;
    NSUUID *_turnIdentifier;
    NSString *_voiceIdentificationTraining_withoutResultCandidateSharedUserId;
    BOOL _stopRecordingInstrumented;
}


@property (readonly, copy, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) BOOL wantsRecordedAudioBufferLogs; // ivar: _wantsRecordedAudioBufferLogs


-(id)_createRequestLinkInfo:(id)arg0 component:(int)arg1 ;
-(id)description;
-(id)initWithSessionUUID:(id)arg0 turnIdentifier:(id)arg1 ;
-(void)_didBecomeCurrent;
-(void)_didResignCurrent;
-(void)_donateRecordedAudioForVoiceIdentificationTrainingWithCompletion:(id)arg0 ;
-(void)_finalizeAudioFileWriterWithCompletion:(id)arg0 ;
-(void)_initializeAudioFileWriterWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(void)_instrumentSiriCue:(int)arg0 ;
-(void)_removeRecordedAudio;
-(void)acquireRecordedAudioWithHandler:(id)arg0 ;
-(void)appendRecordedAudioBuffer:(id)arg0 ;
-(void)becomeCurrent;
-(void)beginRecordingAudioWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(void)dealloc;
-(void)didDetectTwoShotWithAudioActivationInfo:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)didStopRecordingWithError:(id)arg0 ;
-(void)emitRequestLinkEventForMHUUID:(id)arg0 ;
-(void)endRecordingAudio;
-(void)getAudioRecordRouteAndDeviceIdentificationWithCompletion:(id)arg0 ;
-(void)instrumentSiriCue:(int)arg0 ;
-(void)instrumentSiriCueForAlertType:(NSInteger)arg0 ;
-(void)instrumentStopRecordingForEndpointType:(int)arg0 ;
-(void)relinquishAudioSessionAssertionsWithContext:(id)arg0 ;
-(void)relinquishAudioSessionAssertionsWithError:(id)arg0 ;
-(void)resignCurrent;
-(void)updateAccessToRecordedAudioForVoiceIdentificationTraining:(BOOL)arg0 forResultCandidateId:(id)arg1 sharedUserId:(id)arg2 ;
-(void)updateAudioRecordContext:(id)arg0 ;
-(void)updateAudioRecordDeviceInfo:(id)arg0 ;
-(void)updateRecordingInfo:(id)arg0 ;
-(void)updateRecordingSettings:(id)arg0 ;
-(void)updateSelectedResultCandidateId:(id)arg0 ;
-(void)updateStartSpeechId:(id)arg0 ;
-(void)updateVoiceTriggerInfo:(id)arg0 ;
-(void)willPrepareAndStartRecordingWithAudioActivationInfo:(id)arg0 ;
-(void)willStopRecordingAtHostTime:(NSUInteger)arg0 ;


@end


#endif