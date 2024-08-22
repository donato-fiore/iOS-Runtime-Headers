// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPINGEFFORTANALYZER_H
#define TITYPINGEFFORTANALYZER_H

@class NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"
#import "TITypingSessionAligned.h"

@interface TITypingEffortAnalyzer : NSObject <TITypingSessionAnalyzing>

 {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    BOOL _emojiPlaneActive;
    BOOL _emojiSearchActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCursorMovement; // ivar: _hasCursorMovement
@property (readonly, nonatomic) BOOL hasEmojiInput; // ivar: _hasEmojiInput
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(BOOL)hasEmojiInKeyboardInputs:(id)arg0 ;
-(BOOL)isEmojiSearchCandidateSelection:(id)arg0 ;
-(BOOL)isFlickInput:(id)arg0 ;
-(BOOL)isPopupVariantInput:(id)arg0 inputMode:(id)arg1 ;
-(BOOL)isTenKeyInputMode:(id)arg0 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)countActions;
-(id)countOutput;
-(id)init;
-(id)keyStringWithCode:(NSInteger)arg0 fromLayout:(id)arg1 ;
-(int)countComposedCharactersInText:(id)arg0 ;
-(void)addActionsForArrowKey:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addActionsForCursorEvent:(id)arg0 lastAction:(id)arg1 nextAction:(id)arg2 toActionSummary:(id)arg3 emojiSearchMode:(BOOL)arg4 ;
-(void)addActionsForCut:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addActionsForDeleteWord:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addActionsForDocumentStateChange:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addActionsForPaste:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addActionsForWordEntry:(id)arg0 toActionSummary:(id)arg1 emojiSearchMode:(BOOL)arg2 ;
-(void)addCountsForAlignedEntry:(id)arg0 toOutputSummary:(id)arg1 ;
-(void)addCountsForEmojiInputs:(id)arg0 toOutputSummary:(id)arg1 ;
-(void)addCountsForPropertyWithName:(id)arg0 andEmojiSearchPropertyName:(id)arg1 contributesToTotal:(BOOL)arg2 toActionSummary:(id)arg3 emojiSearchMode:(BOOL)arg4 ;
-(void)addCountsForWord:(id)arg0 toOutputSummary:(id)arg1 ;
-(void)addKeyboardInputActionsForKeyboardInputs:(id)arg0 inputMode:(id)arg1 toActionSummary:(id)arg2 andKeyboardInputTouches:(id)arg3 emojiSearchMode:(BOOL)arg4 ;
-(void)addPathAndCandidateBarActionsForWordEntry:(id)arg0 toActionSummary:(id)arg1 andPathTouches:(id)arg2 emojiSearchMode:(BOOL)arg3 ;
-(void)addPathWeightActionsForTouches:(id)arg0 withLayout:(id)arg1 forWord:(id)arg2 toActionSummary:(id)arg3 emojiSearchMode:(BOOL)arg4 ;
-(void)addSpecialKeyActionsForFirstTouch:(id)arg0 andLastTouch:(id)arg1 fromLayout:(id)arg2 toActionSummary:(id)arg3 emojiSearchMode:(BOOL)arg4 ;
-(void)addTouchRelatedActionsForTouches:(id)arg0 layouts:(id)arg1 acceptedCandidate:(id)arg2 toActionSummary:(id)arg3 keyboardInputTouches:(id)arg4 pathTouches:(id)arg5 emojiSearchMode:(BOOL)arg6 ;
-(void)dispatchEventWithActionSummary:(id)arg0 outputSummary:(id)arg1 ;
-(void)registerEventSpec;


@end


#endif