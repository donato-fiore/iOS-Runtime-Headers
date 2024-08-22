// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDAEMONCONNECTION_H
#define CDPDAEMONCONNECTION_H

@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}


@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // ivar: _daemonXPCEndpoint


-(id)connection;
-(id)daemon;
-(id)daemonWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)synchronousDaemonWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif