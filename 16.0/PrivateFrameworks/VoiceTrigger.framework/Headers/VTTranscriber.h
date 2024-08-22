// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTTRANSCRIBER_H
#define VTTRANSCRIBER_H

@class NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSString;
@protocol _EARSpeechRecognitionResultStream, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    id *_callback;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isTriggerFollowedByWords; // ivar: _isTriggerFollowedByWords
@property (readonly) Class superclass;
@property (readonly) CGFloat triggerConfidence; // ivar: _triggerConfidence


-(CGFloat)_getConfidence:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 triggerTokens:(id)arg1 useKeywordSpotting:(BOOL)arg2 ;
-(id)recognizedTokens;
-(void)endAudio;
-(void)recognizeWavData:(*short)arg0 length:(int)arg1 ;
-(void)reset;
-(void)runRecognitionWithCallback:(id)arg0 ;
-(void)speechRecognizer:(id)arg0 didFinishRecognitionWithError:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizePartialResult:(id)arg1 ;


@end


#endif