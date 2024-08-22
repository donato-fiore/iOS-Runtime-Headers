// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIREVISIONRATEANALYZER_H
#define TIREVISIONRATEANALYZER_H

@class NSString, NSNumber;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>


@interface TIRevisionRateAnalyzer : NSObject <TITypingSessionAnalyzing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCursorMovement; // ivar: _hasCursorMovement
@property (nonatomic) BOOL hasEmojiInput; // ivar: _hasEmojiInput
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *sessionAlignmentConfidence; // ivar: _sessionAlignmentConfidence
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)_createEventSpec;
-(id)getSessionFields;
-(id)init;
-(void)_dispatchEventPayloads:(id)arg0 analyticsService:(id)arg1 typingSession:(id)arg2 ;
-(void)_registerAnalyticsEventSpecWithAnalyticsService;


@end


#endif