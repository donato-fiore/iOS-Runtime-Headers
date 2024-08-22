// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUXPCAGENT_H
#define CUXPCAGENT_H

@class NSXPCConnection, NSMutableSet, NSXPCListener, NSString, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUXPCAgent : NSObject <NSXPCListenerDelegate>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
    NSMutableSet *_xpcCnxSet;
    NSXPCListener *_xpcListener;
}


@property (copy, nonatomic) id *connectionEndedHandler; // ivar: _connectionEndedHandler
@property (copy, nonatomic) id *connectionStartedHandler; // ivar: _connectionStartedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (readonly) Class superclass;


-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_connectionInvalidated:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif