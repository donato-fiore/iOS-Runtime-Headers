// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPINGSESSIONALIGNMENTCONFIDENCEANALYZER_H
#define TITYPINGSESSIONALIGNMENTCONFIDENCEANALYZER_H

@class NSMutableDictionary, NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"
#import "TITypingSessionAligned.h"

@interface TITypingSessionAlignmentConfidenceAnalyzer : NSObject <TITypingSessionAnalyzing>

 {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    NSMutableDictionary *_payload;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)_generateCountsOfWordsForAlignmentConfidences;
-(id)_generateFeatureUsageMetricsForContext:(id)arg0 ;
-(id)_generateMetadataForTypingSessionFromContext:(id)arg0 ;
-(id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)arg0 ;
-(id)init;
-(void)dispatchEventWithPayload:(id)arg0 ;
-(void)registerEventSpec;


@end


#endif