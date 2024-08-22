// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSPEECHRECOGNITIONBLOCKTASK_H
#define _SFSPEECHRECOGNITIONBLOCKTASK_H



#import "SFSpeechRecognitionTask.h"

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {
    id *_resultHandler;
    BOOL _hasFiredFinalResult;
}




-(id)_initWithRequest:(id)arg0 queue:(id)arg1 languageCode:(id)arg2 taskHint:(NSInteger)arg3 resultHandler:(id)arg4 ;
-(void)_finalizeResultHandler;
-(void)_fireResultHandlerWithResult:(id)arg0 error:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizePackage:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizeTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)dictationConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)localSpeechRecognitionClient:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 didProcessAudioDuration:(CGFloat)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 didRecognizePartialResult:(id)arg1 rawPartialResult:(id)arg2 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg0 ;


@end


#endif