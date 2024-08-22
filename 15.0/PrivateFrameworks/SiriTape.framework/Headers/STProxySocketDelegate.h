// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STPROXYSOCKETDELEGATE_H
#define STPROXYSOCKETDELEGATE_H

@class NSURL, NSMutableArray, NSMutableDictionary;
@protocol GCDAsyncSocketDelegate, STAceObjectHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCDAsyncSocket.h"
#import "STServerConnection.h"

@interface STProxySocketDelegate : NSObject <GCDAsyncSocketDelegate>

 {
    NSURL *_serverURL;
    NSURL *_replayURL;
    NSUInteger _port;
    BOOL _usingTLS;
    id<STAceObjectHandler> *_handler;
    GCDAsyncSocket *_serverSocket;
    GCDAsyncSocket *_listenSocket;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSMutableArray *_connectedSockets;
    NSMutableDictionary *_clientConnections;
    STServerConnection *_serverConnection;
}




-(id)initWithActiveServerURL:(id)arg0 handler:(id)arg1 replayFileURL:(id)arg2 ;
-(void)socket:(id)arg0 didAcceptNewSocket:(id)arg1 ;
-(void)socket:(id)arg0 didConnectToHost:(id)arg1 port:(unsigned short)arg2 ;
-(void)socket:(id)arg0 didReadData:(id)arg1 withTag:(NSInteger)arg2 ;
-(void)socketDidDisconnect:(id)arg0 withError:(id)arg1 ;


@end


#endif