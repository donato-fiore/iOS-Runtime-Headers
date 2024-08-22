// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTSERVERSPEECHSESSION_H
#define _LTSERVERSPEECHSESSION_H

@class NSError, NSString, NSUUID;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationEngine;

#import <Foundation/Foundation.h>

#import "_LTTranslationContext.h"
#import "_LTSpeechDataQueue.h"
#import "_LTSpeechActivityDetector.h"
#import "_LTHybridEndpointer.h"
#import "_LTLanguageDetector.h"

@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _expectFinalLidResult;
    BOOL _sentFinalLidResult;
    BOOL _translationFinished;
    atomic<bool> _speechActivityDetected;
    NSError *_translationError;
    _LTTranslationContext *_context;
    _LTSpeechDataQueue *_cache;
    _LTSpeechActivityDetector *_speechDetector;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _LTHybridEndpointer *endpointer; // ivar: _endpointer
@property (retain, nonatomic) NSObject<_LTTranslationEngine> *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _LTLanguageDetector *languageDetector; // ivar: _languageDetector
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


-(id)initWithEngine:(id)arg0 delegate:(id)arg1 ;
-(void)_startSpeechTranslationWithContext:(id)arg0 ;
-(void)_translateSpeechAudioData:(id)arg0 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancel;
-(void)delegateTranslationDidFinishWithError:(id)arg0 ;
-(void)endAudio;
-(void)hybridEndpointerFoundEndpoint;
-(void)languageDetectionCompleted;
-(void)languageDetectionResult:(id)arg0 ;
-(void)serverEndpointerFeatures:(id)arg0 locale:(id)arg1 ;
-(void)speechActivityDetected;
-(void)speechRecognitionResult:(id)arg0 ;
-(void)startSpeechTranslationWithContext:(id)arg0 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif