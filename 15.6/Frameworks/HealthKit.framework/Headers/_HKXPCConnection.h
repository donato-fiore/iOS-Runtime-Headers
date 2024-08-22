// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKXPCCONNECTION_H
#define _HKXPCCONNECTION_H

@class NSXPCConnection, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface _HKXPCConnection : NSObject {
    NSXPCConnection *_underlyingConnection;
}


@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (weak, nonatomic) NSObject<_HKXPCExportable> *exportedObject; // ivar: _exportedObject
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)_loggingPrefix;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithUnderlyingConnection:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)resumeWithExportedInterface:(id)arg0 remoteInterface:(id)arg1 ;
-(void)unitTest_interrupt;


@end


#endif