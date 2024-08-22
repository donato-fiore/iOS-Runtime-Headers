// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NISERVERCONNECTION_H
#define NISERVERCONNECTION_H

@class NSXPCConnection, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NIServerConnection : NSObject {
    NSXPCConnection *_connection;
    NSUInteger _options;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) id *exportedObject; // ivar: _exportedObject
@property (copy) id *interruptionHandler;
@property (copy) id *invalidationHandler;
@property (readonly) NSUUID *sessionID; // ivar: _sessionID


-(id)initWithSessionID:(id)arg0 queue:(id)arg1 exportedObject:(id)arg2 options:(NSUInteger)arg3 ;
-(id)remoteObjectProxy;
-(id)synchronousRemoteObjectProxy;
-(struct ? )auditTokenForConnection;
-(void)dealloc;
-(void)invalidate;
-(void)resume;


@end


#endif