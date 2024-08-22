// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDTYPER_H
#define TIKEYBOARDTYPER_H

@class TIKeyboardCandidate, TIAutocorrectionList, TIKeyboardCandidateResultSet, NSString, TIKeyboardInputManager, TIInputMode, UIKBTree, NSLocale, NSArray;
@protocol ACTUserActionStreamDelegate, TIKeyboardInputManagerFactory, ACTUserActionStreaming;

#import <Foundation/Foundation.h>

#import "TIErrorGenerator.h"
#import "ACTKeyboardController.h"
#import "TIKeyboardTyperUserModel.h"
#import "TITestUserPersona.h"

@interface TIKeyboardTyper : NSObject <ACTUserActionStreamDelegate>

 {
    NSUInteger _touchPathID;
}


@property (nonatomic) BOOL asyncPredictions;
@property (nonatomic) NSUInteger autocapitalizationType;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (nonatomic) NSUInteger autocorrectionType;
@property (readonly, nonatomic, getter=isAutoshifted) BOOL autoshifted;
@property (readonly, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TIErrorGenerator *errorGenerator;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inPartialCandidateSelection;
@property (readonly, nonatomic) TIKeyboardInputManager *inputManager;
@property (retain, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (copy, nonatomic) NSString *inputModeIdentifier;
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput;
@property (nonatomic) CGFloat interTouchTimestampInterval; // ivar: _interTouchTimestampInterval
@property (retain, nonatomic) UIKBTree *keyboard;
@property (readonly, nonatomic) ACTKeyboardController *keyboardController; // ivar: _keyboardController
@property (nonatomic) NSObject<TIKeyboardInputManagerFactory> *keyboardInputManagerFactory;
@property (readonly, nonatomic) UIKBTree *keyplane;
@property (nonatomic) BOOL lastInputWasSelection;
@property (nonatomic) CGFloat lastTimestamp; // ivar: _lastTimestamp
@property (nonatomic) NSUInteger learnWordContextIndex; // ivar: _learnWordContextIndex
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL logDocumentContext; // ivar: _logDocumentContext
@property (nonatomic) BOOL longPredictionListEnabled;
@property (readonly, nonatomic) NSString *markedText;
@property (nonatomic) NSInteger maxPredictions; // ivar: _maxPredictions
@property (nonatomic) int maxPredictionsReported; // ivar: _maxPredictionsReported
@property (nonatomic) BOOL nextKeyIsMultitap;
@property (readonly, nonatomic) NSArray *predictionBarCandidates;
@property (readonly, nonatomic) NSArray *predictions;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (nonatomic) _NSRange selectedRange;
@property (readonly, nonatomic, getter=isShifted) BOOL shifted;
@property (nonatomic) BOOL shouldDecomposeInputString; // ivar: _shouldDecomposeInputString
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL usePartialCandidates;
@property (readonly, nonatomic) NSObject<ACTUserActionStreaming> *userActionStream; // ivar: _userActionStream
@property (retain, nonatomic) TIKeyboardTyperUserModel *userModel;
@property (retain, nonatomic) TITestUserPersona *userPersona; // ivar: _userPersona
@property (nonatomic) BOOL usesAutocapitalization;
@property (nonatomic) BOOL usesAutocorrection;
@property (nonatomic) BOOL usesPrediction;
@property (nonatomic) BOOL usesTransliteration;
@property (nonatomic) BOOL warnIfSelectingPopupVariant; // ivar: _warnIfSelectingPopupVariant
@property (nonatomic) BOOL wordLearningEnabled;


-(BOOL)attemptToTapPredictionWithString:(id)arg0 ;
-(BOOL)changeToNearestAlphabeticPlane;
-(BOOL)changeToNearestKeyplaneWithString:(id)arg0 ;
-(BOOL)hasPrediction:(id)arg0 ;
-(NSInteger)performTouchDownAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(NSInteger)performTouchDragAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(NSUInteger)cursorLocationInMarkedText;
-(id)_keyplaneCloserToKeyWithString:(id)arg0 ;
-(id)_logStringForTouchedKey:(id)arg0 ;
-(id)_performGestureKeyInput:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 ;
-(id)_performTapAtLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 fingerID:(int)arg2 secondaryString:(BOOL)arg3 ;
-(id)_performTapAtLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 intendedKey:(id)arg2 touchedKey:(id)arg3 secondaryString:(BOOL)arg4 touchError:(id)arg5 typingLog:(id)arg6 ;
-(id)_performTouchEvent:(id)arg0 typingLog:(id)arg1 ;
-(id)_performVariantKey:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 ;
-(id)candidateBarCandidates;
-(id)candidatesForString:(id)arg0 ;
-(id)displayStringOverrideForKey:(id)arg0 ;
-(id)document;
-(id)externalStringToInternal:(id)arg0 ;
-(id)init;
-(id)initWithInputMode:(id)arg0 ;
-(id)inputSegmentsForString:(id)arg0 ;
-(id)internalStringToExternal:(id)arg0 ;
-(id)keyContainingPoint:(struct CGPoint )arg0 inKeyplane:(id)arg1 ;
-(id)keyToAccessKeyplaneCloserToKeyString:(id)arg0 ;
-(id)keyWithString:(id)arg0 inKeyplane:(id)arg1 ;
-(id)keyWithString:(id)arg0 inKeyplane:(id)arg1 includeSecondaryStrings:(BOOL)arg2 ;
-(id)performTapAtKey:(id)arg0 biasedTowards:(id)arg1 biasWeight:(float)arg2 ;
-(id)performTapAtLocation:(struct CGPoint )arg0 ;
-(id)performTouchUpAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(id)performTouchUpAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 secondaryString:(BOOL)arg5 ;
-(id)shiftKeyToAccessKeyplaneCloserToKeyString:(id)arg0 ;
-(id)splitDigraphsInString:(id)arg0 ;
-(id)tokensForString:(id)arg0 ;
-(id)transliteratedTokensForString:(id)arg0 ;
-(struct CGPoint )pointForAttemptedTapOnKey:(id)arg0 withError:(id)arg1 ;
-(void)_bumpTouchPathID;
-(void)_finishKeystrokeAndRecordPredictionsInTypingLog:(id)arg0 touchedKey:(id)arg1 insertedKey:(id)arg2 typingLog:(id)arg3 ;
-(void)_performAcceptCandidate:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 ;
-(void)_performAcceptCandidate:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 predictiveCandidate:(BOOL)arg3 ;
-(void)_performAcceptCandidate:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 predictiveCandidate:(BOOL)arg3 intendedTransliteration:(id)arg4 ;
-(void)_performAcceptPredictiveCandidate:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 ;
-(void)_performRejectCandidate:(id)arg0 timestamp:(CGFloat)arg1 typingLog:(id)arg2 ;
-(void)_skipTapTimestamp:(CGFloat)arg0 intendedKey:(id)arg1 typingLog:(id)arg2 ;
-(void)acceptAutocorrection;
-(void)acceptCandidate:(id)arg0 ;
-(void)acceptCandidateInputEvent:(id)arg0 fromCandidateBar:(BOOL)arg1 ;
-(void)acceptCandidateViaKeyboard:(id)arg0 ;
-(void)acceptPredictiveCandidate:(id)arg0 ;
-(void)adjustCursorByOffset:(NSInteger)arg0 ;
-(void)adjustPhraseBoundaryByOffset:(NSInteger)arg0 granularity:(int)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)attemptGestureKeyInput:(id)arg0 ;
-(void)attemptTapOnKeyWithString:(id)arg0 ;
-(void)attemptTapOnKeyWithString:(id)arg0 withErrorGenerator:(id)arg1 typingLog:(id)arg2 ;
-(void)attemptToDelete;
-(void)attemptToDeleteWithCount:(unsigned int)arg0 ;
-(void)attemptToShift;
-(void)attemptToStrokeWord:(id)arg0 ;
-(void)attemptToStrokeWord:(id)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 typingLog:(id)arg3 callback:(id)arg4 ;
-(void)attemptToStrokeWord:(id)arg0 startTime:(CGFloat)arg1 typingLog:(id)arg2 callback:(id)arg3 ;
-(void)attemptToStrokeWord:(id)arg0 typingLog:(id)arg1 ;
-(void)attemptToStrokeWord:(id)arg0 typingLog:(id)arg1 callback:(id)arg2 ;
-(void)attemptToStrokeWord:(id)arg0 withCallback:(id)arg1 ;
-(void)attemptToStrokeWord:(id)arg0 withStartTime:(CGFloat)arg1 ;
-(void)attemptToStrokeWord:(id)arg0 withStartTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)attemptToTapKeys:(id)arg0 ;
-(void)attemptToTapMoreKey;
-(void)attemptToTapPredictionWithLiteral:(id)arg0 ;
-(void)attemptToTypeIntended:(id)arg0 expected:(id)arg1 typingLog:(id)arg2 ;
-(void)attemptToTypeText:(id)arg0 ;
-(void)attemptToTypeText:(id)arg0 typingLog:(id)arg1 ;
-(void)attemptToTypeWithLog:(id)arg0 ;
-(void)attemptVariantKey:(id)arg0 ;
-(void)commitText;
-(void)dealloc;
-(void)generateAutocorrectionsWithShiftState:(int)arg0 ;
-(void)generateCandidates;
-(void)insertText:(id)arg0 ;
-(void)learnWord:(id)arg0 withCount:(NSUInteger)arg1 ;
-(void)linkWithUserActionStream:(id)arg0 ;
-(void)performStrokeForPath:(id)arg0 typingLog:(id)arg1 callback:(id)arg2 ;
-(void)performTouchCancelAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)performTouchEndRestAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)performTouchRestAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)rejectAutocorrection;
-(void)reset;
-(void)syncToDocumentState:(id)arg0 ;
-(void)syncToEmptyDocument;
-(void)tearDown;


@end


#endif