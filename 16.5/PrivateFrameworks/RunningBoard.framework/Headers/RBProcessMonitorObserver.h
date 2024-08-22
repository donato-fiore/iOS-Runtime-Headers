// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBPROCESSMONITOROBSERVER_H
#define RBPROCESSMONITOROBSERVER_H

@class NSMutableArray, NSSet, NSMutableDictionary, RBSProcessStateDescriptor, RBSProcessHandle, NSString;
@protocol RBProcessMonitorObserving, RBProcessMonitoring, RBProcessMonitorObserverConnection, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBProcess.h"
#import "RBProcessMap.h"

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving>

 {
    id<RBProcessMonitoring> *_monitor;
    RBProcess *_process;
    id<RBProcessMonitorObserverConnection> *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    os_unfair_lock_s _lock;
    unsigned int _qos;
    RBProcessMap *_pendingProcessState;
    NSMutableArray *_pendingExitEvents;
    NSSet *_pendingPreventLaunchPredicates;
    NSMutableDictionary *_configurations;
    RBSProcessStateDescriptor *_stateDescriptor;
    RBSProcessHandle *_lastMatchedHandle;
    BOOL _extantStateUpdate;
    BOOL _extantEventUpdate;
    BOOL _didClearState;
    CGFloat _lastSend;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(id)captureState;
-(id)initWithMonitor:(id)arg0 forProcess:(id)arg1 connection:(id)arg2 ;
-(void)_checkForBadActorWithPendingStates:(id)arg0 ;
-(void)_lock_addAllConfiguredStatesToPending;
-(void)_lock_addConfigurationStatesToPending:(id)arg0 ;
-(void)_lock_clearPendingNonterminalStates;
-(void)_lock_rebuildConfiguration;
-(void)_lock_sendPendingStateUpdates;
-(void)addConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)didObserveProcessExit:(id)arg0 ;
-(void)didResolvePreventLaunchPredicates:(id)arg0 ;
-(void)invalidate;
-(void)processMonitor:(id)arg0 didChangeProcessStates:(id)arg1 ;
-(void)removeConfigurationWithIdentifier:(NSUInteger)arg0 ;


@end


#endif