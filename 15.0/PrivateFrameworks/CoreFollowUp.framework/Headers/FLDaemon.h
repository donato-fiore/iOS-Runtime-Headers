// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLDAEMON_H
#define FLDAEMON_H

@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}


@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // ivar: _daemonXPCEndpoint


+(id)daemonWithErrorHandler:(id)arg0 ;
+(id)sharedInstance;
-(id)connection;
-(id)daemonWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)remoteObjectInterface;
-(id)synchronousDaemonWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidateConnection;


@end


#endif