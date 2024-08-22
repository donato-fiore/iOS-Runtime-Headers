// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMREMOTEOBJECTINTERNAL_H
#define IMREMOTEOBJECTINTERNAL_H

@class Protocol, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMRemoteObjectInternal : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    Protocol *_protocol;
    NSString *_portName;
    NSString *_processName;
    os_unfair_recursive_lock_s _lock;
    int _pid;
    BOOL _willBeTerminated;
    BOOL _postedDeathNote;
}






@end


#endif