// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBSPEECHRECOGNIZERTASKIMPL_H
#define WEBSPEECHRECOGNIZERTASKIMPL_H

@class NSString;
@protocol SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface WebSpeechRecognizerTaskImpl : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate>

 {
    ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> _identifier;
    BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;
    BOOL _doMultipleRecognitions;
    NSUInteger _maxAlternatives;
    RetainPtr<SFSpeechRecognizer> _recognizer;
    RetainPtr<SFSpeechAudioBufferRecognitionRequest> _request;
    WeakObjCPtr<SFSpeechRecognitionTask> _task;
    BOOL _hasSentSpeechStart;
    BOOL _hasSentSpeechEnd;
    BOOL _hasSentEnd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> )arg0 locale:(id)arg1 doMultipleRecognitions:(BOOL)arg2 reportInterimResults:(BOOL)arg3 maxAlternatives:(NSUInteger)arg4 delegateCallback:(id)arg5 ;
-(void)abort;
-(void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)callbackWithTranscriptions:(id)arg0 isFinal:(BOOL)arg1 ;
-(void)sendEndIfNeeded;
-(void)sendSpeechEndIfNeeded;
-(void)sendSpeechStartIfNeeded;
-(void)speechRecognitionTask:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didHypothesizeTranscription:(id)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg0 ;
-(void)speechRecognizer:(id)arg0 availabilityDidChange:(BOOL)arg1 ;
-(void)stop;


@end


#endif