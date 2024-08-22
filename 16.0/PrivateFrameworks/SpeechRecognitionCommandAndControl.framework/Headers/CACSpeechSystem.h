// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACSPEECHSYSTEM_H
#define CACSPEECHSYSTEM_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface CACSpeechSystem : NSObject {
    *__RXRecognitionSystem _recognitionSystemRef;
    *__CFLocale _currentLocaleRef;
    *__RXVocabulary _currentRXVocabularyRef;
    NSTimer *_setLeadingContextStringDelayTimer;
    NSTimer *_setAdditionalContextStringsDelayTimer;
}


@property (readonly) BOOL supportsSpellingMode; // ivar: _supportsSpellingMode


+(BOOL)isSpeechSystemServerRunning;
+(id)rxContextDictionaryForLanguageModel:(id)arg0 ;
+(id)speechSystem;
+(id)valueFromRXContextKey:(id)arg0 rxLanguageObject:(struct __RXLanguageObject *)arg1 ;
+(void)closeSpeechSystem;
+(void)initialize;
+(void)recognizeString:(id)arg0 ;
+(void)startPreventingDisplayDimming;
+(void)stopPreventingDisplayDimming;
-(id)initLocaleIdentifer:(id)arg0 microphoneIdentifier:(id)arg1 ;
-(id)recognitionLocaleIdentifier;
-(id)resultLanguageModelFromRXLanguageObject:(struct __RXLanguageObject *)arg0 ;
-(struct __CFLocale *)currentLocaleRef;
-(struct __RXLanguageObject *)createRXLanguageObjectRefFromCACLanguageModel:(id)arg0 ;
-(struct __RXLanguageObject *)createRXLanguageObjectRefFromCACLanguageModel:(id)arg0 ignoreBuiltInLMTable:(BOOL)arg1 ;
-(struct __RXRecognitionSystem *)recognitionSystemRef;
-(struct __RXVocabulary *)currentRXVocabularyRef;
-(void)_close;
-(void)rxRecognitionSystemReset;
-(void)setAdditionalContextStrings:(id)arg0 ;
-(void)setLeadingContextString:(id)arg0 ;
-(void)setRxRecognitionSystemResetMode:(int)arg0 ;


@end


#endif