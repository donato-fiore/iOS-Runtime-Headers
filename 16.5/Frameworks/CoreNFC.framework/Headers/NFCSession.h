// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFCSESSION_H
#define NFCSESSION_H

@class NSLock, NSXPCConnection, NSXPCInterface, NSString;
@protocol OS_dispatch_queue, NFCSessionCallbacks;

#import <Foundation/Foundation.h>


@interface NFCSession : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_machServiceName;
    id *_exportedObject;
    id<NFCSessionCallbacks> *_delegate;
}




-(BOOL)_connectIfNeeded;
-(id)_connection;
-(id)_connectionLock;
-(id)_exportedObjectClassName;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObjectInterface:(id)arg2 exportedObject:(id)arg3 delegate:(id)arg4 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_invalidate;
-(void)_setConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif