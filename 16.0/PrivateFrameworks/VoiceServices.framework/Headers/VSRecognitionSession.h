// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSRECOGNITIONSESSION_H
#define VSRECOGNITIONSESSION_H

@class NSString, NSArray;
@protocol VSRecognitionSessionDelegate;

#import <Foundation/Foundation.h>

#import "VSKeepAlive.h"
#import "VSRecognitionAction.h"
#import "VSSpeechSynthesizer.h"

@interface VSRecognitionSession : NSObject {
    NSString *_modelIdentifier;
    VSKeepAlive *_keepAlive;
    id<VSRecognitionSessionDelegate> *_delegate;
    VSRecognitionAction *_currentAction;
    NSArray *_topLevelKeywords;
    id *_handlingThread;
    VSSpeechSynthesizer *_synthesizer;
    NSString *_languageID;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    CGFloat _levelInterval;
    NSUInteger _keywordPhase;
    ? _sessionFlags;
}




-(BOOL)_actionStarted:(id)arg0 ;
-(BOOL)hasDeferredAction;
-(BOOL)isActivelyRecognizing;
-(BOOL)isBusy;
-(BOOL)isFinished;
-(BOOL)isRecognizing;
-(BOOL)isValid;
-(BOOL)nextActionWillRecognize;
-(BOOL)nextActionWillTerminateSession;
-(BOOL)sensitiveActionsEnabled;
-(BOOL)setBluetoothInputAllowed:(BOOL)arg0 ;
-(BOOL)setDebugDumpEnabled:(BOOL)arg0 ;
-(BOOL)setNextRecognitionAudioInputPath:(id)arg0 ;
-(BOOL)setNextRecognitionRequiresReset:(BOOL)arg0 ;
-(BOOL)setPreferredEngine:(int)arg0 ;
-(NSInteger)keywordCount;
-(float)inputLevel;
-(float)inputLevelDB;
-(id)_beginSpeakingAttributedString:(id)arg0 ;
-(id)_beginSpeakingString:(id)arg0 attributedString:(id)arg1 ;
-(id)_createPhaseSortedKeywordsFromArray:(id)arg0 ;
-(id)_currentRecognizeAction;
-(id)_keywordsForModelIdentifier:(id)arg0 ;
-(id)_recognitionResultHandlingThread;
-(id)_topLevelKeywords;
-(id)beginNextAction;
-(id)beginSpeakingFeedbackString;
-(id)beginSpeakingString:(id)arg0 ;
-(id)cancel;
-(id)cancelMaintainingKeepAlive:(BOOL)arg0 ;
-(id)debugDumpPath;
-(id)displayResultString;
-(id)displayStatusString;
-(id)init;
-(id)initWithModelIdentifier:(id)arg0 ;
-(id)keywordAtIndex:(NSInteger)arg0 ;
-(id)reset;
-(id)spokenFeedbackAttributedString;
-(id)spokenFeedbackString;
-(struct __CFDictionary *)_createKeywordIndex;
-(void)_actionCompleted:(id)arg0 nextAction:(id)arg1 error:(id)arg2 ;
-(void)_init;
-(void)_keywordIndexChanged;
-(void)_notifyDelegateActionStarted;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)arg0 ;
-(void)_notifyDelegateOpenURL:(id)arg0 completion:(id)arg1 ;
-(void)_setAction:(id)arg0 ;
-(void)dealloc;
-(void)recognitionResultHandlingThread:(id)arg0 didHandleResults:(id)arg1 nextAction:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setInputLevelUpdateInterval:(CGFloat)arg0 ;
-(void)setKeywordPhase:(NSUInteger)arg0 ;
-(void)setPerformRecognitionHandlerActions:(BOOL)arg0 ;
-(void)setSensitiveActionsEnabled:(BOOL)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;


@end


#endif