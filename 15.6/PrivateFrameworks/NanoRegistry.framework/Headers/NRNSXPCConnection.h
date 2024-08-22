// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRNSXPCCONNECTION_H
#define NRNSXPCCONNECTION_H

@class NSXPCConnection, NSString, NSXPCInterface;
@protocol NRNSXPCConnectionProtocol;

#import <Foundation/Foundation.h>


@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id *exportedObject;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler;
@property (copy, nonatomic) id *invalidationHandler;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain, nonatomic) id *remoteObjectProxy;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_setQueue:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)runCompletionBlock:(id)arg0 ;
-(void)suspend;


@end


#endif