// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSPEECHRECOGNITIONDELEGATETASK_H
#define _SFSPEECHRECOGNITIONDELEGATETASK_H

@protocol _SFSpeechRecognitionTaskDelegatePrivate;


#import "SFSpeechRecognitionTask.h"
#import "SFSpeechRecognitionResult.h"
#import "_SFSpeechRecognitionDelegateTask.h"

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask {
    id<_SFSpeechRecognitionTaskDelegatePrivate> *_delegate;
    SFSpeechRecognitionResult *_recognitionResultToReportAfterFinalSearchResults;
    _SFSpeechRecognitionDelegateTask *_selfReference;
    BOOL _waitForVoiceSearchResult;
    BOOL _hasSentRealSearchResults;
}




-(id)_initWithRequest:(id)arg0 queue:(id)arg1 languageCode:(id)arg2 taskHint:(NSInteger)arg3 delegate:(id)arg4 ;
-(void)_handleDidFinishRecognition:(id)arg0 ;
-(void)_handleDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)_handleDidRecognizePartialResult:(id)arg0 ;
-(void)_handleSpeechRecordingDidCancel;
-(void)_tellDelegateDidFinishSuccessfully:(BOOL)arg0 ;
-(void)dictationConnection:(id)arg0 didProcessAudioDuration:(CGFloat)arg1 ;
-(void)dictationConnection:(id)arg0 didReceiveSearchResults:(id)arg1 recognizedText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg0 didRecognizePackage:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizeTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)dictationConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg0 ;
-(void)localSpeechRecognitionClient:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 didProcessAudioDuration:(CGFloat)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 didRecognizePartialResult:(id)arg1 rawPartialResult:(id)arg2 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg0 ;


@end


#endif