// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICEINTERFACE_H
#define _UIVIEWSERVICEINTERFACE_H

@class NSError, NSString, BKSProcessAssertion, NSXPCConnection;
@protocol NSXPCConnectionDelegate;

#import <Foundation/Foundation.h>

#import "_UIAsyncInvocation.h"
#import "_UIRemoteViewService.h"

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate>

 {
    os_unfair_lock_s _terminationStateLock;
    NSError *_terminationError;
    id *_terminationHandler;
    uint8_t _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? serviceAuditToken;
@property (readonly, nonatomic) int servicePID;
@property (readonly) Class superclass;


+(id)connectToViewService:(id)arg0 deputyInterfaces:(id)arg1 connectionHandler:(id)arg2 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg0 deputyInterfaces:(id)arg1 connectionHandler:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)_initWithConnectionInfo:(struct ? )arg0 service:(id)arg1 deputyInterfaces:(id)arg2 ;
-(id)_initWithConnectionInfo:(struct ? )arg0 serviceBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 ;
-(id)_initWithConnectionInfo:(struct ? )arg0 serviceBundleIdentifier:(id)arg1 service:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_terminateWithError:(id)arg0 ;
-(id)connectToDeputyWithInterface:(id)arg0 fromExportedHostingObject:(id)arg1 connectionHandler:(id)arg2 ;
-(id)disconnect;
-(id)retain;
-(int)__automatic_invalidation_logic;
-(void)_terminateUnconditionallyThen:(id)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)release;
-(void)setTerminationHandler:(id)arg0 ;


@end


#endif