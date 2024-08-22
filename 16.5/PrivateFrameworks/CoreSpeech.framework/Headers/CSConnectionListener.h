// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONNECTIONLISTENER_H
#define CSCONNECTIONLISTENER_H

@class NSXPCListener, NSXPCInterface, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, CSConnectionServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSConnectionListener : NSObject <NSXPCListenerDelegate, CSConnectionServiceDelegate>

 {
    NSXPCListener *_listener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    id *_proxyObject;
}


@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachService:(id)arg0 withServiceInterface:(id)arg1 withServiceObject:(id)arg2 withDelegateInterface:(id)arg3 ;
-(id)initWithMachService:(id)arg0 withServiceInterface:(id)arg1 withServiceObject:(id)arg2 withDelegateInterface:(id)arg3 queue:(id)arg4 ;
-(void)dealloc;
-(void)notifyClientsWithBlock:(id)arg0 ;
-(void)resumeConnection;


@end


#endif