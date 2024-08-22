// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSINTERNALTELEMETRY_H
#define SIRIANALYTICSINTERNALTELEMETRY_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsInternalTelemetry : NSObject



-(void)_trackLogicalClock:(id)arg0 isDerivativeClock:(BOOL)arg1 ;
-(void)trackEmittedEvents:(id)arg0 ;
-(void)trackEventEmitted:(id)arg0 ;
-(void)trackLogicalClock:(id)arg0 ;
-(void)trackMessageStreamProcessed:(NSInteger)arg0 timeToFirstMessage:(NSInteger)arg1 messageCount:(NSUInteger)arg2 processingReason:(id)arg3 failureReason:(id)arg4 ;


@end


#endif