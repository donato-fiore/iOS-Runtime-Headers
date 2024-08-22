// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXSERVERCONNECTION_H
#define IXSERVERCONNECTION_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol IXClientDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IXServerConnection : NSObject <IXClientDelegateProtocol>



@property (readonly, nonatomic) NSMutableDictionary *coordinatorInstances; // ivar: _coordinatorInstances
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) NSMutableDictionary *promiseInstances; // ivar: _promiseInstances
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)retrySynchronousIPC:(id)arg0 ;
+(id)sharedConnection;
-(BOOL)_onQueue_createXPCConnectionIfNecessary;
-(id)_onQueue_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg0 ;
-(void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg0 ;
-(void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg0 ;
-(void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg0 ;
-(void)_client_coordinatorShouldPauseWithUUID:(id)arg0 ;
-(void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg0 ;
-(void)_client_coordinatorShouldResumeWithUUID:(id)arg0 ;
-(void)_client_coordinatorWithUUID:(id)arg0 configuredPromiseDidBeginFulfillment:(NSUInteger)arg1 ;
-(void)_client_coordinatorWithUUID:(id)arg0 didCancelWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)_client_coordinatorWithUUID:(id)arg0 didUpdateProgress:(CGFloat)arg1 forPhase:(NSUInteger)arg2 overallProgress:(CGFloat)arg3 ;
-(void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg0 ;
-(void)_client_promiseWithUUID:(id)arg0 didCancelWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)_onQueue_doCleanupForCoordinatorWithUUID:(id)arg0 ;
-(void)_onQueue_doCleanupForPromiseWithUUID:(id)arg0 ;
-(void)_onQueue_reSetupObserversAfter:(id)arg0 ;
-(void)_onQueue_scanForAndRemoveEmptyHashTables;
-(void)registerAppInstallCoordinatorForUpdates:(id)arg0 notifyDaemon:(BOOL)arg1 ;
-(void)registerDataPromiseForUpdates:(id)arg0 notifyDaemon:(BOOL)arg1 ;
-(void)unregisterForUpdatesForAppInstallCoordinatorWithUUID:(id)arg0 ;
-(void)unregisterForUpdatesForDataPromiseWithUUID:(id)arg0 ;


@end


#endif