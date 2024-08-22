// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIAUTOCORRECTIONACCURACYANALYZER_H
#define TIAUTOCORRECTIONACCURACYANALYZER_H

@class NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing>



@property (retain, nonatomic) TITypingSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(BOOL)analyzeWordEntryAligned:(id)arg0 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)init;
-(void)registerEventSpec;


@end


#endif