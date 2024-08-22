// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSTERMINATIONASSERTION_H
#define RBSTERMINATIONASSERTION_H

@class NSMutableSet, NSHashTable;
@protocol RBSServiceLocalProtocol;

#import <Foundation/Foundation.h>

#import "RBSAssertion.h"
#import "RBSProcessMonitor.h"
#import "RBSTerminateContext.h"
#import "RBSProcessPredicate.h"

@interface RBSTerminationAssertion : NSObject {
    os_unfair_lock_s _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSProcessPredicate *_predicate;
    id<RBSServiceLocalProtocol> *_service;
    NSUInteger _state;
    BOOL _processExists;
    NSMutableSet *_runningHandles;
    BOOL _deathMonitorsSetUp;
    BOOL _observersHaveBeenNotified;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) BOOL processExists;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)acquireWithError:(*id)arg0 ;
-(BOOL)invalidateWithError:(*id)arg0 ;
-(id)initWithPredicate:(id)arg0 context:(id)arg1 ;
-(id)initWithPredicate:(id)arg0 context:(id)arg1 service:(id)arg2 ;
-(id)initWithTarget:(id)arg0 context:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif