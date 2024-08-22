// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMOCKCLIENTNSXPCCONNECTION_H
#define NRMOCKCLIENTNSXPCCONNECTION_H

@class NSString, NSXPCInterface;
@protocol NRNSXPCConnectionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRMockServerNSXPCConnection.h"

@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>

 {
    NSString *_name;
    NRMockServerNSXPCConnection *_serverConnection;
    id *_synchronousRemoteObjectProxy;
    id *_remoteObjectProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain, nonatomic) id *remoteObjectProxy;
@property (readonly, nonatomic) NRMockServerNSXPCConnection *serverConnection;
@property (readonly) Class superclass;


-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_invalidate;
-(void)invalidate;
-(void)resume;
-(void)runCompletionBlock:(id)arg0 ;
-(void)suspend;


@end


#endif