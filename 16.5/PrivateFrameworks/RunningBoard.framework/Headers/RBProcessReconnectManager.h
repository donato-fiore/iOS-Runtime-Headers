// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBPROCESSRECONNECTMANAGER_H
#define RBPROCESSRECONNECTMANAGER_H

@class NSMutableSet;
@protocol RBDaemonContextProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBProcess.h"

@interface RBProcessReconnectManager : NSObject {
    id<RBDaemonContextProviding> *_daemonContext;
    RBProcess *_originatorProcess;
    NSMutableSet *_currentAssertionIdentifiers;
    NSMutableSet *_pendingProcesses;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
}




-(id)debugDescription;
-(id)init;
-(id)initWithDaemonContext:(id)arg0 originatorProcess:(id)arg1 ;
-(void)didInvalidateAssertion:(id)arg0 ;
-(void)reconnectProcesses:(id)arg0 ;


@end


#endif