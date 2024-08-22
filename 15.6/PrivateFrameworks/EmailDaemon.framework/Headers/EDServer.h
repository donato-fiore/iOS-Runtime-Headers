// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSERVER_H
#define EDSERVER_H

@class EFLocked, NSString, NSXPCListener, NSArray, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, EDServerRemoteClientsProvider, EFLoggable, EDReconciliationQueryProvider;

#import <Foundation/Foundation.h>

#import "EDDaemonInterfaceFactory.h"

@interface EDServer : NSObject <NSXPCListenerDelegate, EDServerRemoteClientsProvider, EFLoggable, EDReconciliationQueryProvider>



@property (readonly, nonatomic) EFLocked *connectedClients; // ivar: _connectedClients
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory; // ivar: _daemonInterfaceFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, copy, nonatomic) NSArray *remoteClients;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDaemonInterfaceFactory:(id)arg0 ;
-(id)initWithDaemonInterfaceFactory:(id)arg0 listener:(id)arg1 ;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(void)addRemoteClient:(id)arg0 ;
-(void)removeRemoteClient:(id)arg0 ;
-(void)start;
-(void)test_tearDown;


@end


#endif