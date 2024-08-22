// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBCONNECTIONLISTENER_H
#define RBCONNECTIONLISTENER_H

@class NSMapTable, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, RBStateCapturing, OS_dispatch_queue, OS_xpc_object, RBDaemonContextProviding, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_lock_connectionToClientMap;
    NSMapTable *_lock_identifierToClientMap;
    NSMutableArray *_lock_readyClients;
    id<RBDaemonContextProviding> *_context;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(id)captureState;
-(id)init;


@end


#endif