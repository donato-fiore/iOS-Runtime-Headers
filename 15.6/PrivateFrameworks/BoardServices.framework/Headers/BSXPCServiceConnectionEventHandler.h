// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSXPCSERVICECONNECTIONEVENTHANDLER_H
#define BSXPCSERVICECONNECTIONEVENTHANDLER_H

@class RBSTarget, NSString, BSXPCCoder;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnection.h"
#import "BSXPCServiceConnectionProxy.h"
#import "BSServiceQuality.h"
#import "BSServiceInterface.h"

@interface BSXPCServiceConnectionEventHandler : NSObject {
    RBSTarget *_assertionTarget;
    os_unfair_lock_s _lock;
    BOOL _nonLaunchingAware;
    BSXPCServiceConnection *_lock_connection;
    NSObject<OS_xpc_object> *_lock_activeXPCConnection;
    NSObject<OS_dispatch_queue> *_lock_xpcConnectionTargetQueue;
    BSXPCServiceConnectionProxy *_lock_remoteTarget;
    id *_interfaceTarget;
    id *_connectionHandler;
    id *_noMoreChildrenHandler;
    id *_messageHandler;
    id *_errorHandler;
    id *_activationHandler;
    id *_interruptionHandler;
    id *_invalidationHandler;
    id *_context;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> *_targetDispatchingQueue;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    BSXPCCoder *_initiatingContext;
}




-(id)init;


@end


#endif