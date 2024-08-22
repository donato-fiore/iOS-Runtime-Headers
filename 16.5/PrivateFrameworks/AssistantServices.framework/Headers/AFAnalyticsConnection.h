// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFANALYTICSCONNECTION_H
#define AFANALYTICSCONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFAnalyticsServiceDelegate, AFAnalyticsService, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSUInteger _numberOfEventsBeingSent;
    NSObject<OS_dispatch_group> *_group;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL needsCleanUpConnection; // ivar: _needsCleanUpConnection
@property (readonly) Class superclass;


-(id)_connection;
-(id)init;
-(void)_cleanUpConnection;
-(void)_cleanUpConnectionIfNeeded;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_didFinishSendingEvents:(id)arg0 ;
-(void)_handleFailureCallbackForEvents:(id)arg0 error:(id)arg1 numberOfRetries:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_handleSuccessCallbackForEvents:(id)arg0 completion:(id)arg1 ;
-(void)_idleTimerFired;
-(void)_sendEvents:(id)arg0 numberOfRetries:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_startIdleTimer;
-(void)_stopIdleTimer;
-(void)_willStartSendingEvents:(id)arg0 ;
-(void)beginEventsGrouping;
-(void)boostQueuedEvents:(id)arg0 ;
-(void)dealloc;
-(void)endEventsGrouping;
-(void)flushStagedEventsWithReply:(id)arg0 ;
-(void)logInstrumentationOfType:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 turnIdentifier:(id)arg2 ;
-(void)stageEvents:(id)arg0 completion:(id)arg1 ;
-(void)stageUEIEventData:(id)arg0 timestamp:(NSUInteger)arg1 ;


@end


#endif