// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIREMOTERENDERERXPCCONNECTION_H
#define PBUIREMOTERENDERERXPCCONNECTION_H

@class NSString, NSXPCListenerEndpoint, NSXPCConnection;
@protocol PBUIRemoteRendererConnection;

#import <Foundation/Foundation.h>


@interface PBUIRemoteRendererXPCConnection : NSObject <PBUIRemoteRendererConnection>

 {
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    os_unfair_recursive_lock_s _connectionLock;
    NSXPCConnection *_lock_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultConnection;
-(id)connectionActivateIfNeededWithError:(*id)arg0 ;
-(id)initToEndpoint:(id)arg0 ;
-(id)initToServiceName:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif