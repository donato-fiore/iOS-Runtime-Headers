// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACREMOTEACCOUNTSTORESESSION_H
#define ACREMOTEACCOUNTSTORESESSION_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol NSXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "ACAccountStoreClientSideListener.h"

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>

 {
    NSXPCConnection *_connection;
    os_unfair_lock_s _connectionLock;
    ACAccountStoreClientSideListener *_clientSideListener;
}


@property (copy, nonatomic) NSString *effectiveBundleID; // ivar: _effectiveBundleID
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (nonatomic) BOOL notificationsEnabled; // ivar: _notificationsEnabled


-(id)_connection;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 delegate:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_locked_configureRemoteAccountStoreWithConnection:(id)arg0 ;
-(void)_setConnectionInterrupted;
-(void)_setConnectionInvalidated;
-(void)dealloc;


@end


#endif