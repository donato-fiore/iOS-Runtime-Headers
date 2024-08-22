// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIFAVONIUSTYPINGSESSIONANALYZER_H
#define TIFAVONIUSTYPINGSESSIONANALYZER_H

@class NSArray, NSDictionary, NSString, TIKeyboardState;
@protocol TITypingSessionAnalyzing, TIUserModeling;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing>

 {
    NSArray *_activeInputModes;
    NSDictionary *_testingParameters;
}


@property (retain, nonatomic) TITypingSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastMessage; // ivar: _lastMessage
@property (nonatomic) CGFloat lastMessageEndTime; // ivar: _lastMessageEndTime
@property (weak, nonatomic) TIKeyboardState *lastMessageKeyboardState; // ivar: _lastMessageKeyboardState
@property (nonatomic) CGFloat lastMessageStartTime; // ivar: _lastMessageStartTime
@property (nonatomic) int lastMessageWordsEntered; // ivar: _lastMessageWordsEntered
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<TIUserModeling> *userModel; // ivar: _userModel


+(id)favoniusTypingSessionAnalyzerForUserModel:(id)arg0 ;
-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(BOOL)isPathable:(id)arg0 context:(id)arg1 ;
-(BOOL)updatePQTCountersForCandidate:(id)arg0 withText:(id)arg1 andContext:(id)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)deleteLengthMetrics:(id)arg0 nextWordEntryCandText:(id)arg1 ;
-(id)initWithUserModel:(id)arg0 ;
-(int)durationInMillisecondsFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)addDoubleToTransientCounter:(CGFloat)arg0 forKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3 ;
-(void)addIntegerToTransientCounter:(int)arg0 forKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3 ;
-(void)handleDeleteWord:(id)arg0 nextAction:(id)arg1 ;
-(void)handlePath:(id)arg0 ;
-(void)handleWordEntry:(id)arg0 ;
-(void)incrementTransientCounterForKey:(id)arg0 andContext:(id)arg1 andCandidateString:(id)arg2 ;
-(void)logPathedCandidate:(id)arg0 forKey:(id)arg1 isCompletion:(BOOL)arg2 ;
-(void)reportLastMessage;
-(void)trackMessagesForAction:(id)arg0 ;
-(void)updateDurationCounterForWord:(id)arg0 forTypingContext:(id)arg1 ;
-(void)updateSourceCountersForCandidate:(id)arg0 withText:(id)arg1 andContext:(id)arg2 hasPQTSource:(BOOL)arg3 ;


@end


#endif