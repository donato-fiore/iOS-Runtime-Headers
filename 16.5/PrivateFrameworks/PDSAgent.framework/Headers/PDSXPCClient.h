// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSXPCCLIENT_H
#define PDSXPCCLIENT_H

@protocol PDSXPCHandshake, PDSXPCDaemonConnection, PDSRemote, PDSDaemonListenerVendor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDSXPCClient : NSObject <PDSXPCHandshake>



@property (retain, nonatomic) NSObject<PDSXPCDaemonConnection> *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<PDSRemote> *daemonListener; // ivar: _daemonListener
@property (retain, nonatomic) NSObject<PDSDaemonListenerVendor> *daemonListenerVendor; // ivar: _daemonListenerVendor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)_hasToolEntitlement;
-(id)initWithConnection:(id)arg0 interfaceVendor:(id)arg1 daemonListenerVendor:(id)arg2 queue:(id)arg3 ;
-(void)connectInternalWithCompletion:(id)arg0 ;
-(void)connectWithClientID:(id)arg0 completion:(id)arg1 ;
-(void)resume;


@end


#endif