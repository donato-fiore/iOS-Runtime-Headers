// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TICANDIDATEBARUSAGEANALYZER_H
#define TICANDIDATEBARUSAGEANALYZER_H

@class NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"

@interface TICandidateBarUsageAnalyzer : NSObject <TITypingSessionAnalyzing>

 {
    TITypingSession *_currentSession;
    BOOL _predictionEnabled;
    BOOL _continuousPathEnabled;
    BOOL _autocorrectionEnabled;
    BOOL _hwAutocorrectionEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)init;
-(id)stringFromInputMethod:(NSUInteger)arg0 ;
-(id)stringFromSelectionType:(NSUInteger)arg0 ;
-(void)analyzeWordEntry:(id)arg0 ;
-(void)dispatchEventWithInputMethod:(NSUInteger)arg0 typingEngineType:(unsigned int)arg1 selectionType:(NSUInteger)arg2 keyboardState:(id)arg3 ;
-(void)registerEventSpec;


@end


#endif