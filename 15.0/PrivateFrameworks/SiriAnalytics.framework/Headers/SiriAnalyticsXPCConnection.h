// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSXPCCONNECTION_H
#define SIRIANALYTICSXPCCONNECTION_H

@class NSString, NSXPCConnection;
@protocol SiriAnalyticsXPCService, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService>

 {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_group> *_xpcPublishingGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentConnection;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)_cleanupConnection;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_idleTimerFired;
-(void)_publishLargeMessage:(id)arg0 completion:(id)arg1 ;
-(void)_publishLargeMessageToRemote:(id)arg0 attempts:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_publishMessages:(id)arg0 completion:(id)arg1 ;
-(void)_publishMessagesToRemote:(id)arg0 attempts:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_resolveMessages:(id)arg0 completion:(id)arg1 ;
-(void)_resolveMessagesAtRemote:(id)arg0 attempts:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_startIdleTimer;
-(void)_stopIdleTimer;
-(void)barrierWithCompletion:(id)arg0 ;
-(void)publishLargeMessage:(id)arg0 completion:(id)arg1 ;
-(void)publishMessages:(id)arg0 completion:(id)arg1 ;
-(void)resolveMessages:(id)arg0 completion:(id)arg1 ;


@end


#endif