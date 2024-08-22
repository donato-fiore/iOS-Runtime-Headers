// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBPROCESSMONITOR_H
#define RBPROCESSMONITOR_H

@class NSCountedSet, NSMutableSet, NSSet, NSString;
@protocol RBProcessMonitoring, RBStateCapturing, RBStateCaptureManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBProcessIndex.h"
#import "RBProcessMap.h"

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing>

 {
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBProcessMap *_suppressedState;
    RBProcessMap *_publishedState;
    NSCountedSet *_suppressedIdentities;
    os_unfair_lock_s _observersLock;
    NSMutableSet *_observers;
    id<RBStateCaptureManaging> *_stateCaptureManager;
    NSSet *_preventLaunchPredicates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue; // ivar: _queue
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(id)captureState;
-(id)initWithStateCaptureManager:(id)arg0 ;
-(id)preventLaunchPredicates;
-(id)statesMatchingConfiguration:(id)arg0 ;
-(id)statesMatchingPredicate:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)didAddProcess:(id)arg0 withState:(id)arg1 ;
-(void)didRemoveProcess:(id)arg0 withState:(id)arg1 ;
-(void)didResolvePreventLaunchPredicates:(id)arg0 ;
-(void)didUpdateProcessStates:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStateForProcessIdentity:(id)arg0 ;
-(void)suppressUpdatesForIdentity:(id)arg0 ;
-(void)trackStateForProcessIdentity:(id)arg0 ;
-(void)unsuppressUpdatesForIdentity:(id)arg0 ;


@end


#endif