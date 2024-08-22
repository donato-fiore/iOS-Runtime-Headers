// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPINGSESSIONBENCHMARKANALYZER_H
#define TITYPINGSESSIONBENCHMARKANALYZER_H

@class NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"
#import "TITypingSessionAligned.h"

@interface TITypingSessionBenchmarkAnalyzer : NSObject <TITypingSessionAnalyzing>

 {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    NSUInteger _typingSessionConfidence;
    CGFloat _sessionAlignmentConfidence;
    int _sessionWords;
    int _alignedWords;
    int _sessionWordsWithText;
    int _alignedWordsWithText;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)init;
-(void)dispatchEvent;
-(void)registerEventSpec;


@end


#endif