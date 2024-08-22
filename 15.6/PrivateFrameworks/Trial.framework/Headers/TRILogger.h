// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRILOGGER_H
#define TRILOGGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TRIClient.h"

@interface TRILogger : NSObject {
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    TRIClient *_client;
    NSArray *_logHandlers;
}




-(NSUInteger)_incrementedLogEventCount;
-(id)init;
-(id)initWithClient:(id)arg0 projectId:(int)arg1 logHandlers:(id)arg2 ;
-(id)initWithProjectId:(int)arg0 ;
-(id)initWithProjectId:(int)arg0 logHandlers:(id)arg1 ;
-(id)messageWithOneofField:(id)arg0 withName:(id)arg1 ;
-(void)_dispatchLogEvent:(id)arg0 ;
-(void)logEvent:(id)arg0 ;
-(void)logWithMLRuntimeDimensions:(id)arg0 metrics:(id)arg1 factorState:(id)arg2 ;
-(void)logWithNamespaceName:(id)arg0 metrics:(id)arg1 dimensions:(id)arg2 ;
-(void)logWithProjectNameAndTrackingId:(id)arg0 metrics:(id)arg1 dimensions:(id)arg2 trialSystemTelemetry:(id)arg3 ;
-(void)logWithTrackingId:(id)arg0 logLevel:(NSInteger)arg1 message:(id)arg2 ;
-(void)logWithTrackingId:(id)arg0 logLevel:(NSInteger)arg1 message:(id)arg2 args:(char *)arg3 ;
-(void)logWithTrackingId:(id)arg0 message:(id)arg1 ;
-(void)logWithTrackingId:(id)arg0 metric:(id)arg1 ;
-(void)logWithTrackingId:(id)arg0 metric:(id)arg1 dimensions:(id)arg2 ;
-(void)logWithTrackingId:(id)arg0 metrics:(id)arg1 dimensions:(id)arg2 ;
-(void)logWithTrackingId:(id)arg0 metrics:(id)arg1 dimensions:(id)arg2 trialSystemTelemetry:(id)arg3 ;


@end


#endif