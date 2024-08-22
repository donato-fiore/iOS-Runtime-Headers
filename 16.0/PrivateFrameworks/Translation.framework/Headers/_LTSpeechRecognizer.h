// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSPEECHRECOGNIZER_H
#define _LTSPEECHRECOGNIZER_H

@class _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognitionResultPackage, NSString, NSLocale, NSURL;
@protocol _EARSpeechRecognitionResultStream, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LTSpeechRecognizer : NSObject <_EARSpeechRecognitionResultStream>

 {
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_buffer;
    BOOL _detectedSpeechEndpoint;
    _EARSpeechRecognitionResultPackage *_finalResult;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *language; // ivar: _language
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (copy, nonatomic) id *recognitionHandler; // ivar: _recognitionHandler
@property (readonly) Class superclass;


-(id)initWithModelURL:(id)arg0 language:(id)arg1 modelVersion:(id)arg2 ;
-(void)_recognizedResult:(id)arg0 error:(id)arg1 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancelRecognition;
-(void)endAudio;
-(void)speechRecognizer:(id)arg0 didFinishRecognitionWithError:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResultPackage:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizePartialResult:(id)arg1 ;
-(void)startRecognitionWithAutoStop:(BOOL)arg0 resultHandler:(id)arg1 ;
-(void)triggerServerSideEndPointer;


@end


#endif