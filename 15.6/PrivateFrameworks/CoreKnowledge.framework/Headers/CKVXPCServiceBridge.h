// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVXPCSERVICEBRIDGE_H
#define CKVXPCSERVICEBRIDGE_H

@class Protocol, NSXPCInterface, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVXPCServiceBridge : NSObject {
    Protocol *_serviceProtocol;
    NSXPCInterface *_serviceInterface;
    NSString *_machServiceName;
    NSUInteger _options;
    NSXPCConnection *_serviceConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id *_remoteObjectProxy;
}




-(id)_getOrCreateXPCServiceConnection;
-(id)init;
-(id)initWithServiceProtocol:(id)arg0 machServiceName:(id)arg1 ;
-(id)service;
-(void)_clearXPCServiceConnection;
-(void)dealloc;


@end


#endif