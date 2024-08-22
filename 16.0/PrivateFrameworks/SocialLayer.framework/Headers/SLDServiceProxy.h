// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDSERVICEPROXY_H
#define SLDSERVICEPROXY_H

@class NSXPCConnection;
@protocol SLDActiveCallService, OS_dispatch_queue, SLDCollaborationAttributionViewService, SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>


@interface SLDServiceProxy : NSObject

@property (readonly, nonatomic) NSObject<SLDActiveCallService> *activeCallService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) NSObject<SLDCollaborationAttributionViewService> *collaborationAttributionViewService;
@property (retain, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (nonatomic) BOOL connectionActive; // ivar: _connectionActive
@property (nonatomic) NSUInteger connectionRetryCount; // ivar: _connectionRetryCount
@property (weak, nonatomic) NSObject<SLDServiceProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyConcurrentQueue; // ivar: _propertyConcurrentQueue
@property (nonatomic) Class serviceClass; // ivar: _serviceClass
@property (nonatomic) BOOL shouldAutoReconnect; // ivar: _shouldAutoReconnect
@property (nonatomic) BOOL waitingForConnection; // ivar: _waitingForConnection


+(id)proxyForServiceClass:(Class)arg0 targetSerialQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithServiceClass:(Class)arg0 targetSerialQueue:(id)arg1 delegate:(id)arg2 ;
-(id)remoteService;
-(id)synchronousRemoteService;
-(id)synchronousRemoteServiceWithErrorHandler:(id)arg0 ;
-(int)remoteProcessID;
-(void)_atomicConfigureWithNewConnection:(id)arg0 ;
-(void)_establishNewConnection;
-(void)_invalidateAndDestroyConnection;
-(void)_notifyDelegateProxyDidConnect;
-(void)_receivedServiceConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif