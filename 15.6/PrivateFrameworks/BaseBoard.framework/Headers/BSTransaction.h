// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSTRANSACTION_H
#define BSTRANSACTION_H

@class NSMutableArray, NSMutableSet, NSDate, NSMutableDictionary, NSHashTable, NSString, NSArray, NSError, NSSet;
@protocol BSWatchdogProviding, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSAuditHistory.h"

@interface BSTransaction : NSObject <BSWatchdogProviding>

 {
    NSMutableArray *_parentTransactionRelationships;
    NSMutableSet *_lifeAssertions;
    BOOL _aborted;
    BOOL _interrupted;
    BOOL _inSubclassBegin;
    NSDate *_startTime;
    NSMutableDictionary *_milestonesToHandlers;
    NSMutableArray *_childTransactionRelationships;
    NSMutableSet *_milestones;
    NSHashTable *_observers;
    NSUInteger _state;
    BSAuditHistory *_auditHistory;
    NSObject<OS_os_log> *_auditHistoryLog;
    BOOL _disableDebugLogCheckForUnitTesting;
    BOOL _debugLoggingEnabled;
    NSMutableSet *_debugLogCategories;
    NSString *_cachedDescriptionProem;
    NSMutableArray *_blockObservers;
    id *_completionBlock;
    BOOL _cachedDefaultBasedAuditHistoryEnabled;
}


@property (readonly, nonatomic) NSArray *allErrors;
@property (nonatomic, getter=isAuditHistoryEnabled) BOOL auditHistoryEnabled; // ivar: _auditHistoryEnabled
@property (readonly, nonatomic) NSArray *childTransactions;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) id *completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFailed) BOOL failed; // ivar: _failed
@property (readonly, nonatomic, getter=isFinishedWorking) BOOL finishedWorking;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic, getter=isInterruptible) BOOL interruptible;
@property (readonly, nonatomic) NSSet *milestones;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=hasStarted) BOOL started;
@property (readonly) Class superclass;


-(BOOL)_canBeInterrupted;
-(BOOL)_debugLoggingEnabled;
-(BOOL)_isRootTransaction;
-(BOOL)_revertWithReason:(id)arg0 ;
-(BOOL)_shouldComplete;
-(BOOL)_shouldFailForChildTransaction:(id)arg0 ;
-(BOOL)hasChildTransactionsOfClass:(Class)arg0 ;
-(BOOL)isInterruptable;
-(BOOL)isWaitingForMilestone:(id)arg0 ;
-(BOOL)removeMilestone:(id)arg0 ;
-(BOOL)removeMilestones:(id)arg0 ;
-(BOOL)shouldWatchdog:(*id)arg0 ;
-(CGFloat)watchdogTimeout;
-(id)_customizedDescriptionProperties;
-(id)_debugLogCategories;
-(id)_graphNodeDebugName;
-(id)_loggingProem;
-(id)_stringForMilestones:(id)arg0 ;
-(id)childTransactionsOfClass:(Class)arg0 ;
-(id)init;
-(void)_addAuditHistoryItem:(id)arg0 ;
-(void)_addDebugLogCategory:(id)arg0 ;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_childTransactionDidFinishWork:(id)arg0 ;
-(void)_didAddChildTransaction:(id)arg0 ;
-(void)_didBegin;
-(void)_didComplete;
-(void)_didFinishWork;
-(void)_didInterruptWithReason:(id)arg0 ;
-(void)_didRemoveChildTransaction:(id)arg0 ;
-(void)_didSatisfyMilestone:(id)arg0 ;
-(void)_enumerateObserversWithBlock:(id)arg0 ;
-(void)_evaluateCompletion;
-(void)_failForTimeoutWithDescription:(id)arg0 ;
-(void)_failWithReason:(id)arg0 description:(id)arg1 ;
-(void)_failWithReason:(id)arg0 description:(id)arg1 precipitatingError:(id)arg2 ;
-(void)_removeDebugLogCategory:(id)arg0 ;
-(void)_willAddChildTransaction:(id)arg0 ;
-(void)_willBegin;
-(void)_willComplete;
-(void)_willFailWithReason:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)_willRemoveChildTransaction:(id)arg0 ;
-(void)addChildTransaction:(id)arg0 ;
-(void)addChildTransaction:(id)arg0 withSchedulingPolicy:(NSUInteger)arg1 ;
-(void)addMilestone:(id)arg0 ;
-(void)addMilestones:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)begin;
-(void)dealloc;
-(void)evaluateMilestone:(id)arg0 withEvaluator:(id)arg1 ;
-(void)failWithReason:(id)arg0 ;
-(void)interrupt;
-(void)interruptWithReason:(id)arg0 ;
-(void)listenForSatisfiedMilestone:(id)arg0 withBlock:(id)arg1 ;
-(void)registerBlockObserver:(id)arg0 ;
-(void)removeAllChildTransactions;
-(void)removeAllChildTransactionsOfClass:(Class)arg0 ;
-(void)removeAllMilestones;
-(void)removeChildTransaction:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)satisfyMilestone:(id)arg0 ;


@end


#endif