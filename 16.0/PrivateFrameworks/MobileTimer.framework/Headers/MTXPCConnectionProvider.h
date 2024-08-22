// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTXPCCONNECTIONPROVIDER_H
#define MTXPCCONNECTIONPROVIDER_H

@class NSXPCConnection, NSDate;
@protocol NAScheduler;

#import <Foundation/Foundation.h>

#import "MTXPCConnectionInfo.h"

@interface MTXPCConnectionProvider : NSObject {
    NSXPCConnection *_connection;
    BOOL _alive;
}


@property (retain, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, nonatomic) os_unfair_lock_s connectionLock; // ivar: _connectionLock
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) MTXPCConnectionInfo *info; // ivar: _info
@property (retain, nonatomic) NSDate *lastLifecycleNotification; // ivar: _lastLifecycleNotification
@property (copy, nonatomic) id *reconnectHandler; // ivar: _reconnectHandler


+(id)providerWithConnectionInfo:(id)arg0 errorHandler:(id)arg1 ;
+(id)providerWithConnectionInfo:(id)arg0 reconnectHandler:(id)arg1 ;
-(id)_asyncRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_connectionRebuildingIfNecessary;
// -(id)_remoteObjectProxyWithXPCConnectionProvider:(id)arg0 remoteObjectProxyProvider:(unk)arg1 errorHandler:(id)arg2  ;
-(id)_retryConnection;
-(id)_syncRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)connection;
-(id)description;
// -(id)initWithConnectionInfo:(id)arg0 errorHandler:(id)arg1 reconnectHandler:(unk)arg2  ;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(void)_retryConnectionWithRecover:(BOOL)arg0 ;
-(void)dealloc;
-(void)didReceiveLifecycleNotification;
-(void)invalidate;
-(void)performRemoteBlock:(id)arg0 ;
// -(void)performRemoteBlock:(id)arg0 withErrorHandler:(unk)arg1  ;
// -(void)performRemoteBlock:(id)arg0 withErrorHandler:(unk)arg1 isSynchronous:(id)arg2  ;


@end


#endif