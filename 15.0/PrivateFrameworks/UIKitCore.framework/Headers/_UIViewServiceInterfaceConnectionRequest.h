// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICEINTERFACECONNECTIONREQUEST_H
#define _UIVIEWSERVICEINTERFACECONNECTIONREQUEST_H

@class NSString, NSError, BKSProcessAssertion, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIRemoteViewService.h"
#import "_UIAsyncInvocation.h"

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    id *_connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    BOOL _serviceSessionConnectionResumed;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}




+(id)_connectToViewServiceWithBundleIdentifier:(id)arg0 service:(id)arg1 connectionHandler:(id)arg2 ;
+(id)connectToViewService:(id)arg0 connectionHandler:(id)arg1 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg0 connectionHandler:(id)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)retain;
-(int)__automatic_invalidation_logic;
-(void)_cancelUnconditionallyThen:(id)arg0 ;
-(void)_cancelWithError:(id)arg0 ;
-(void)_createAndEstablishConnection;
-(void)_createPlugInProcessAssertion;
-(void)_createProcessAssertion;
-(void)_createProcessAssertionForPID:(int)arg0 orBundleIdentifier:(id)arg1 acquiredHandler:(id)arg2 ;
-(void)_didConnectToService;
-(void)_establishConnection;
-(void)_launchService;
-(void)dealloc;
-(void)release;


@end


#endif