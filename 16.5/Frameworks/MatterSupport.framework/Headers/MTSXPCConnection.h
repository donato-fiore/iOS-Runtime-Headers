// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSXPCCONNECTION_H
#define MTSXPCCONNECTION_H

@class HMFObject, NSString, NSXPCInterface, HMFProcessInfo, NSXPCConnection;
@protocol MTSXPCConnection;



@interface MTSXPCConnection : HMFObject <MTSXPCConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id *exportedObject;
@property (readonly) NSUInteger hash;
@property (copy) id *interruptionHandler;
@property (copy) id *invalidationHandler;
@property (readonly) int processIdentifier;
@property (readonly) HMFProcessInfo *processInfo;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id *remoteObjectProxy;
@property (readonly) Class superclass;
@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)attributeDescriptions;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)invalidate;
-(void)resume;


@end


#endif