// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACSPEECHRECOGNIZER_H
#define CACSPEECHRECOGNIZER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CACLanguageModel.h"

@interface CACSpeechRecognizer : NSObject {
    BOOL _waitingForResponse;
    BOOL _avoidMessagingRXDuringCancel;
    BOOL _isListening;
    BOOL _requestCloseMatchResults;
    BOOL _spellingMode;
    BOOL _numberMode;
    *__RXRecognizer _recognizer;
    CACLanguageModel *_languageModel;
    id *_delegate;
}


@property (retain) NSString *name; // ivar: _name
@property BOOL numberMode;
@property (nonatomic) BOOL preventRecognizedTextFeedback; // ivar: _preventRecognizedTextFeedback
@property NSUInteger recognizerFlags; // ivar: _recognizerFlags
@property BOOL requestCloseMatchResults;
@property (readonly) *__RXLanguageObject rxLanguageModel; // ivar: _rxLanguageModel
@property BOOL spellingMode;


-(BOOL)isListening;
-(BOOL)isSpeechRecognizerOpen;
-(id)languageModel;
-(void)closeSpeechRecognizer;
-(void)dealloc;
-(void)openSpeechRecognizer;
-(void)registerSpeechCorrectionFromText:(id)arg0 toText:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setCommandInfo:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setLanguageModel:(id)arg0 ;
-(void)startListening;
-(void)stopListening;


@end


#endif