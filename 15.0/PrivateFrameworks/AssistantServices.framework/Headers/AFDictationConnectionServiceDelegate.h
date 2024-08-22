// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDICTATIONCONNECTIONSERVICEDELEGATE_H
#define AFDICTATIONCONNECTIONSERVICEDELEGATE_H

@class NSString;
@protocol AFDictationServiceDelegate;

#import <Foundation/Foundation.h>

#import "AFDictationConnection.h"

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate>

 {
    AFDictationConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDictationConnection:(id)arg0 ;
-(void)languageDetectorFailedWithError:(id)arg0 ;
-(void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg0 ;
-(void)speechDidDetectLanguage:(id)arg0 confidenceScores:(id)arg1 isConfident:(BOOL)arg2 ;
-(void)speechDidFinishWritingAudioFile:(id)arg0 error:(id)arg1 ;
-(void)speechDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)speechDidReceiveSearchResults:(id)arg0 recognitionText:(id)arg1 stable:(BOOL)arg2 final:(BOOL)arg3 ;
-(void)speechDidRecognizeMultilingualSpeech:(id)arg0 ;
-(void)speechDidRecognizePackage:(id)arg0 ;
-(void)speechDidRecognizePartialResult:(id)arg0 ;
-(void)speechDidRecognizePhrases:(id)arg0 utterances:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3 audioAnalytics:(id)arg4 ;
-(void)speechDidRecognizeTokens:(id)arg0 usingSpeechModel:(id)arg1 ;
-(void)speechDidRecognizeTranscriptionObjects:(id)arg0 usingSpeechModel:(id)arg1 ;
-(void)speechRecognitionDidFinishWithError:(id)arg0 ;
-(void)speechRecordingDidBeginWithOptions:(id)arg0 sessionUUID:(id)arg1 sessionRequestUUID:(id)arg2 ;
-(void)speechRecordingDidCancel;
-(void)speechRecordingDidEnd;
-(void)speechRecordingDidFail:(id)arg0 ;
-(void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg0 ;


@end


#endif