// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCALOBJECTINTERNAL_H
#define IMLOCALOBJECTINTERNAL_H

@class NSString, NSProtocolChecker, NSArray, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMMessageContext.h"

@interface IMLocalObjectInternal : NSObject {
    IMMessageContext *_currentMessageContext;
    os_unfair_recursive_lock_s _lock;
    id *_target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_portName;
    NSString *_processName;
    NSProtocolChecker *_protocolChecker;
    NSArray *_allowlistedClasses;
    *__CFRunLoopSource _runloopSource;
    NSMutableArray *_componentQueue;
    os_unfair_lock_s _componentQueueLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
    BOOL _wasInterrupted;
}




-(void)dealloc;


@end


#endif