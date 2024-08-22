// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMOCKSERVERNSXPCCONNECTION_H
#define NRMOCKSERVERNSXPCCONNECTION_H

@class NSString, NSXPCInterface;
@protocol NRNSXPCConnectionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRMockClientNSXPCConnection.h"
#import "NRMockNSXPCListener.h"

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>

 {
    NRMockClientNSXPCConnection *_clientConnection;
    NRMockNSXPCListener *_listener;
    id *_synchronousRemoteObjectProxy;
    id *_remoteObjectProxy;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain, nonatomic) id *remoteObjectProxy;
@property (readonly) Class superclass;


-(id)initWithListener:(id)arg0 clientConnection:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_setQueue:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)runCompletionBlock:(id)arg0 ;
-(void)suspend;


@end


#endif