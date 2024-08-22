// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPBROADCASTEXTENSIONPROXY_H
#define RPBROADCASTEXTENSIONPROXY_H

@class NSExtension, NSXPCConnection, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol;

#import <Foundation/Foundation.h>


@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol>



@property (copy, nonatomic) id *broadcastURLHandler; // ivar: _broadcastURLHandler
@property (retain, nonatomic) NSExtension *broadcastUploadExtension; // ivar: _broadcastUploadExtension
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *connectionReadyHandler; // ivar: _connectionReadyHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (copy, nonatomic) id *serviceInfoHandler; // ivar: _serviceInfoHandler
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithBroadcastUploadExtension:(id)arg0 ;
-(id)initWithBroadcastUploadListenerEndpoint:(id)arg0 ;
-(void)establishConnectionWithHandler:(id)arg0 ;
-(void)finishBroadcastWithError:(id)arg0 ;
-(void)invalidateConnection;
-(void)ping;
-(void)processPayload:(id)arg0 completion:(id)arg1 ;
-(void)setupNewConnection:(id)arg0 ;
-(void)updateBroadcastURL:(id)arg0 ;
-(void)updateServiceInfo:(id)arg0 ;


@end


#endif