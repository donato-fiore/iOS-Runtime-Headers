// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSXPCSERVICECONNECTIONPROXY_H
#define BSXPCSERVICECONNECTIONPROXY_H

@class BSObjCProtocol, RBSTarget, NSArray, RBSAssertion;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnection.h"

@interface BSXPCServiceConnectionProxy : NSObject {
    BSXPCServiceConnection *_connection;
    BSObjCProtocol *_remoteProtocol;
    NSObject<OS_xpc_object> *_underlyingConnection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> *_replyQueue;
    RBSTarget *_target;
    NSArray *_attributes;
    id *_assertionProvider;
    RBSAssertion *_lock_assertion;
    os_unfair_lock_s _lock;
    unsigned int _lock_messagesCount;
}




-(void)dealloc;


@end


#endif