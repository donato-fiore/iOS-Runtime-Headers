// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSERVERCONNECTION_H
#define ARSERVERCONNECTION_H

@class NSXPCConnection, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSXPCProxyCreating, ARServerConnectionDelegate;

#import <Foundation/Foundation.h>

#import "ARWeakReference.h"

@interface ARServerConnection : NSObject <NSXPCProxyCreating>

 {
    id *_connectionCreationBlock;
    ARWeakReference *_exportedObjectWeakReference;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<ARServerConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (weak, nonatomic) id *exportedObject;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface


-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithServiceName:(id)arg0 options:(NSUInteger)arg1 queue:(id)arg2 ;
-(id)interruptionHandler:(SEL)arg0 ;
-(id)invalidationHandler:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)serverConnectionInterrupted;
-(void)serverConnectionInvalidated;
-(void)setInterruptionHandler:(id)arg0 ;
-(void)setInvalidationHandler:(id)arg0 ;


@end


#endif