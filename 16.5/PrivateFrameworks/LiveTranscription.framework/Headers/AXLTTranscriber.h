// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTTRANSCRIBER_H
#define AXLTTRANSCRIBER_H

@class NSString, NSTimer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;
@protocol SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate;

#import <Foundation/Foundation.h>

#import "AXLTTranscription.h"
#import "AXLTLanguageAssetManager.h"

@interface AXLTTranscriber : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate>



@property (retain) NSString *appName; // ivar: _appName
@property (retain) NSTimer *audioBufferTimeoutTimer; // ivar: _audioBufferTimeoutTimer
@property (copy) id *completionCallback; // ivar: _completionCallback
@property (retain, nonatomic) AXLTTranscription *currentTranscription; // ivar: _currentTranscription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger downloadState; // ivar: _downloadState
@property (readonly) NSUInteger hash;
@property BOOL isInUse; // ivar: _isInUse
@property (retain) AXLTLanguageAssetManager *languageAssetManager; // ivar: _languageAssetManager
@property int pid; // ivar: _pid
@property (retain, nonatomic) SFSpeechAudioBufferRecognitionRequest *recognitionRequest; // ivar: _recognitionRequest
@property (retain, nonatomic) SFSpeechRecognitionTask *recognitionTask; // ivar: _recognitionTask
@property (retain, nonatomic) SFSpeechRecognizer *recognizer; // ivar: _recognizer
@property (readonly) Class superclass;
@property (copy) id *transcriptionCallback; // ivar: _transcriptionCallback


+(id)sharedInstance;
-(BOOL)isTranscribingForPID:(int)arg0 ;
-(float)_coalsecingTime;
-(id)init;
-(void)_downloadAndInstallSpeechRecognizer;
-(void)_handleAssetDownloadError:(id)arg0 ;
-(void)_restartTranscription;
-(void)appendAudioPCMBuffer:(id)arg0 forPID:(int)arg1 ;
-(void)dealloc;
-(void)resumeTranscriptionForPID:(int)arg0 ;
-(void)speechRecognitionDidDetectSpeech:(id)arg0 ;
-(void)speechRecognitionTask:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didHypothesizeTranscription:(id)arg1 ;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg0 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg0 ;
// -(void)startTranscriptionForPID:(int)arg0 appName:(id)arg1 callback:(id)arg2 completionCallback:(unk)arg3  ;
-(void)stopTranscriptionForPID:(int)arg0 ;


@end


#endif