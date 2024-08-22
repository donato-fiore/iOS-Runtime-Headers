// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINPUTMANAGERBASE_H
#define TIKEYBOARDINPUTMANAGERBASE_H

@class NSString;
@protocol TITypologyPreferences;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"

@interface TIKeyboardInputManagerBase : NSObject

@property (readonly, nonatomic) NSString *currentInputModeIdentifier;
@property (readonly, nonatomic) BOOL hasHandledInput; // ivar: _hasHandledInput
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (retain, nonatomic) NSObject<TITypologyPreferences> *typologyPreferences; // ivar: _typologyPreferences


-(BOOL)isExpensiveToSuspend;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(BOOL)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(NSInteger)deletionCountForString:(id)arg0 ;
-(NSInteger)performHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(id)configurationPropertyList;
-(id)generateRefinementsForCandidate:(id)arg0 ;
-(id)generateReplacementsForString:(id)arg0 keyLayout:(id)arg1 ;
-(id)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(id)handleKeyboardInput:(id)arg0 ;
-(id)humanReadableTrace;
-(id)init;
-(id)initWithInputMode:(id)arg0 keyboardState:(id)arg1 ;
-(id)keyboardConfiguration;
-(id)resourceInputModes;
-(struct _NSRange )smartSelectionRangeForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 tokenizedRanges:(id)arg3 options:(NSUInteger)arg4 ;
-(void)acceptingCandidateWithTrigger:(id)arg0 ;
-(void)addSynthesizedTouchToInput:(id)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)candidateRejected:(id)arg0 ;
-(void)candidatesOfferedFeedback:(id)arg0 keyboardState:(id)arg1 ;
-(void)changingContextWithTrigger:(id)arg0 ;
-(void)clearHumanReadableTrace;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 candidateHandler:(id)arg2 ;
-(void)generateCandidatesWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)lastAcceptedCandidateCorrected;
-(void)logDiscoverabilityEvent:(int)arg0 userInfo:(id)arg1 ;
-(void)prepareForKeyboardActivity;
-(void)prepareForKeyboardInactivity;
-(void)resume;
-(void)runMaintenanceTask;
-(void)setOriginalInput:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)suspend;
-(void)syncToKeyboardState:(id)arg0 ;
-(void)textAccepted:(id)arg0 fromPredictiveInputBar:(BOOL)arg1 withInput:(id)arg2 ;


@end


#endif