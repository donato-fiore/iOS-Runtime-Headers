// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINPUTMANAGERSTUB_H
#define TIKEYBOARDINPUTMANAGERSTUB_H

@class NSString;
@protocol TIKeyboardInputManager;

#import <Foundation/Foundation.h>


@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serverInterface;
+(void)setArrayClassesForSelectorsInInterface:(id)arg0 ;
-(id)keyboardConfiguration;
-(void)addSupplementalLexicon:(id)arg0 completionHandler:(id)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)candidateRejected:(id)arg0 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 requestToken:(id)arg2 completionHandler:(id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateCandidatesWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)generateRefinementsForCandidate:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateReplacementsForString:(id)arg0 keyLayout:(id)arg1 continuation:(id)arg2 ;
-(void)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleKeyboardInput:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)lastAcceptedCandidateCorrected;
-(void)logDiscoverabilityEvent:(int)arg0 userInfo:(id)arg1 ;
-(void)performHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 continuation:(id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg0 keyboardState:(id)arg1 continuation:(id)arg2 ;
-(void)removeSupplementalLexiconWithIdentifier:(NSUInteger)arg0 ;
-(void)setOriginalInput:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)skipHitTestForTouchEvents:(id)arg0 keyboardState:(id)arg1 ;
-(void)smartSelectionForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 tokenizedRanges:(id)arg3 options:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)textAccepted:(id)arg0 ;
-(void)textAccepted:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeTypologyLogWithCompletionHandler:(id)arg0 ;


@end


#endif