// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSXPCCONNECTION_H
#define IDSXPCCONNECTION_H

@class NSXPCConnection, NSString, NSMutableDictionary;
@protocol NSXPCConnectionDelegate, OS_dispatch_queue, NSXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "IDSXPCConnection.h"

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forSyncMessaging; // ivar: _forSyncMessaging
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSMutableDictionary *pendingTransactions; // ivar: _pendingTransactions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<NSXPCProxyCreating> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) IDSXPCConnection *rootConnection; // ivar: _rootConnection
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncOntoMain; // ivar: _syncOntoMain


+(id)errorForMissingEntitlement:(id)arg0 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(id)_initWithQueue:(id)arg0 syncOntoMain:(BOOL)arg1 takingOverAndResumingConnection:(id)arg2 forSyncMessaging:(BOOL)arg3 ;
-(id)initForSyncMessagingWithQueue:(id)arg0 takingOverAndResumingConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 remoteObject:(id)arg1 ;
-(id)initWithQueue:(id)arg0 syncOntoMain:(BOOL)arg1 takingOverAndResumingConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg0 takingOverAndResumingConnection:(id)arg1 ;
-(id)initWithRemoteObject:(id)arg0 rootConnection:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)remoteObjectProxyWithTimeoutInSeconds:(CGFloat)arg0 errorHandler:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_cleanupAllPendingTransactions;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif