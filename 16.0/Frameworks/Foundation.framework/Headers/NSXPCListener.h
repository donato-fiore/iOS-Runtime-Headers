// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSXPCLISTENER_H
#define NSXPCLISTENER_H

@protocol OS_dispatch_queue, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSXPCListenerEndpoint.h"

@interface NSXPCListener : NSObject {
    NSObject<OS_xpc_object>""remote"@"OS_xpc_remote_connection" _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    uint8_t _delegate;
    NSString *_serviceName;
    NSUInteger _state;
    unsigned char _remote;
}


@property (weak) NSObject<NSXPCListenerDelegate> *delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;


+(id)_UUID;
+(id)anonymousListener;
+(id)serviceListener;
+(void)enableTransactions;
-(id)__initWithoutRemoteConnection;
-(id)_initShared;
-(id)_initWithRemoteName:(id)arg0 ;
-(id)_queue;
-(id)_xpcConnection;
-(id)description;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)serviceName;
-(void)__receiveRemoteConnection:(id)arg0 ;
-(void)_setQueue:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)stop;
-(void)suspend;


@end


#endif