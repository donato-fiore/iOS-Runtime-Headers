// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHGIZMOAWARDINGSCHEDULER_H
#define ACHGIZMOAWARDINGSCHEDULER_H

@class ACHAwardsClient, HDProfile, NSSet, NSString;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, ACHAwardingScheduler, ACHDataStoreObserving, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ACHDataStore.h"
#import "ACHEarnedInstanceAwardingEngine.h"

@interface ACHGizmoAwardingScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, ACHAwardingScheduler, ACHDataStoreObserving>

 {
    ACHAwardsClient *_client;
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    NSSet *_blocksWaitingOnFirstEvaluation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _needsRetry;
    BOOL _firstEvaluationComplete;
    BOOL _dataStoreHasPopulated;
    int _protectedDataToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat retryInterval; // ivar: _retryInterval
@property (nonatomic) CGFloat retryLeeway; // ivar: _retryLeeway
@property (copy, nonatomic) id *scheduledEvaluationCompleteBlock; // ivar: _scheduledEvaluationCompleteBlock
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)initWithClient:(id)arg0 dataStore:(id)arg1 awardingEngine:(id)arg2 ;
-(id)initWithProfile:(id)arg0 dataStore:(id)arg1 awardingEngine:(id)arg2 ;
-(void)_queue_cancelRetryAwardingEvaluationTimer;
-(void)_queue_handleProtectedDataChange:(BOOL)arg0 ;
-(void)_queue_requestRetryingAwardingEvaluationWithCompletion:(id)arg0 ;
-(void)_queue_scheduleRetryAwardingEvaluation;
-(void)_startUp;
-(void)daemonReady:(id)arg0 ;
-(void)dataStoreDidPopulate:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)performAfterFirstEvaluation:(id)arg0 ;
-(void)requestAwardingEvaluationWithCompletion:(id)arg0 ;


@end


#endif