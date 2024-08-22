// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIHAPTICSUSAGEANALYZER_H
#define TIHAPTICSUSAGEANALYZER_H

@class NSString;
@protocol TITypingSessionAnalyzing;

#import <Foundation/Foundation.h>


@interface TIHapticsUsageAnalyzer : NSObject <TITypingSessionAnalyzing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bucketForTime:(CGFloat)arg0 ;
+(id)idleTimeBuckets;
-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)init;
-(void)dispatchIdleEventType:(id)arg0 idleTime:(CGFloat)arg1 session:(id)arg2 ;
-(void)dispatchSessionEventWithActiveTime:(CGFloat)arg0 visibleTime:(CGFloat)arg1 session:(id)arg2 ;
-(void)registerEventSpec;


@end


#endif