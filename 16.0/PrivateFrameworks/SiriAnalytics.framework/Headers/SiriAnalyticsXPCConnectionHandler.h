// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSXPCCONNECTIONHANDLER_H
#define SIRIANALYTICSXPCCONNECTIONHANDLER_H

@class NSXPCConnection, NSString;
@protocol SiriAnalyticsXPCService, OS_dispatch_queue, SiriAnalyticsXPCConnectionHandlerDelegate;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsXPCConnectionEntitlements.h"

@interface SiriAnalyticsXPCConnectionHandler : NSObject <SiriAnalyticsXPCService>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCConnectionHandlerDelegate> *_delegate;
    ? _auditToken;
    SiriAnalyticsXPCConnectionEntitlements *_entitlements;
}


@property (readonly) ? auditToken;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 entitlementsKey:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)mapToAnnotatedMessage:(id)arg0 ;
-(void)publishLargeMessage:(id)arg0 completion:(id)arg1 ;
-(void)publishMessages:(id)arg0 completion:(id)arg1 ;
-(void)resetLogicalClockWithCompletion:(id)arg0 ;
-(void)resolveMessages:(id)arg0 completion:(id)arg1 ;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)vendSandboxExtensionWithResource:(int)arg0 readonly:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif