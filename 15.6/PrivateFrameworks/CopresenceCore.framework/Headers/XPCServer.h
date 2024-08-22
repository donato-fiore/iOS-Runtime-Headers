// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XPCSERVER_H
#define XPCSERVER_H

@class NSXPCListener, NSMutableArray, NSXPCInterface, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, OS_os_log, XPCServerDelegate;

#import <Foundation/Foundation.h>


@interface XPCServer : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_xpcConnectionListenerQueue;
    NSObject<OS_os_log> *_log;
}


@property (retain, nonatomic) NSXPCInterface *clientXPCInterface; // ivar: _clientXPCInterface
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<XPCServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) NSXPCInterface *serverXPCInterface; // ivar: _serverXPCInterface
@property (retain, nonatomic) id *serviceProvider; // ivar: _serviceProvider
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)processNameHashForConnection:(id)arg0 ;
-(NSUInteger)processNameHashForCurrentConnection;
-(id)_clientForConnection:(id)arg0 ;
-(id)_processNameForConnection:(id)arg0 ;
-(id)bundleIdForConnection:(id)arg0 ;
-(id)bundleIdForCurrentConnection;
-(id)clients;
-(id)connections;
-(id)initWithListener:(id)arg0 machServiceName:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)processNameForCurrentConnection;
-(id)remoteProxies;
-(id)remoteProxyByProcessHash:(NSUInteger)arg0 ;
-(id)remoteProxyForBundleId:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)connectionDidConnect:(id)arg0 ;
-(void)connectionDidDisconnect:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif