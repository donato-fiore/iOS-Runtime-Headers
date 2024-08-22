// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLDSERVICEPROXY_H
#define SLDSERVICEPROXY_H

@class NSXPCConnection;
@protocol SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>


@interface SLDServiceProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (nonatomic) BOOL connectionActive; // ivar: _connectionActive
@property (weak, nonatomic) NSObject<SLDServiceProxyDelegate> *delegate; // ivar: _delegate
@property (nonatomic) Class serviceClass; // ivar: _serviceClass
@property (nonatomic) BOOL shouldAutoReconnect; // ivar: _shouldAutoReconnect
@property (nonatomic) BOOL waitingForConnection; // ivar: _waitingForConnection


+(id)proxyForServiceClass:(Class)arg0 delegate:(id)arg1 ;
-(id)initWithServiceClass:(Class)arg0 delegate:(id)arg1 ;
-(id)remoteService;
-(int)remoteProcessID;
-(void)_establishNewConnection;
-(void)_invalidateAndDestroyConnection;
-(void)_receivedServiceConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif