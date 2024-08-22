// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TPSXPCCONNECTION_H
#define _TPSXPCCONNECTION_H

@class NSXPCConnection, NSString;
@protocol _TPSXPCExportable;

#import <Foundation/Foundation.h>


@interface _TPSXPCConnection : NSObject {
    NSXPCConnection *_underlyingConnection;
}


@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (weak, nonatomic) NSObject<_TPSXPCExportable> *exportedObject; // ivar: _exportedObject
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithUnderlyingConnection:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;


@end


#endif