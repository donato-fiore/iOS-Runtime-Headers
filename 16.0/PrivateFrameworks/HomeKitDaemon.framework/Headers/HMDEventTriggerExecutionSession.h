// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTTRIGGEREXECUTIONSESSION_H
#define HMDEVENTTRIGGEREXECUTIONSESSION_H

@class NSArray, NSMutableArray, NSString, NSPredicate, NSDate, NSMutableSet, HMFTimer, NSMapTable;
@protocol HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate;


#import "HMDEventTriggerSession.h"
#import "HMDPredicateUtilities.h"
#import "HMDTriggerConfirmationTimer.h"
#import "HMDEventTriggerUserConfirmationSession.h"

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate>



@property (nonatomic) BOOL actionSetExecutionInProgress; // ivar: _actionSetExecutionInProgress
@property (readonly, nonatomic) NSArray *actionSets; // ivar: _actionSets
@property (readonly, nonatomic) NSMutableArray *causingDevices; // ivar: _causingDevices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *endEvents; // ivar: _endEvents
@property (readonly, nonatomic) NSPredicate *evaluationCondition; // ivar: _evaluationCondition
@property (nonatomic) BOOL executionCompleteCalled; // ivar: _executionCompleteCalled
@property (readonly, nonatomic) NSDate *executionStartTime; // ivar: _executionStartTime
@property (nonatomic) NSUInteger executionState; // ivar: _executionState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *mediaProfiles; // ivar: _mediaProfiles
@property (retain, nonatomic) NSArray *monitorEvents; // ivar: _monitorEvents
@property (readonly, nonatomic) BOOL needsUserConfirmation;
@property (readonly, nonatomic) HMDPredicateUtilities *predicateUtilities; // ivar: _predicateUtilities
@property (readonly, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (nonatomic) BOOL restoreInProgress; // ivar: _restoreInProgress
@property (retain, nonatomic) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer; // ivar: _secureTriggerConfirmationTimer
@property (retain, nonatomic) HMFTimer *startCharacteristicsMonitorTimer; // ivar: _startCharacteristicsMonitorTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *triggerEvents; // ivar: _triggerEvents
@property (readonly, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // ivar: _userConfirmationSession
@property (readonly, nonatomic) NSMapTable *writeRequests; // ivar: _writeRequests


+(id)logCategory;
-(BOOL)containsSecureActionSet;
-(id)_monitoringEventsFromActionSetResponse:(id)arg0 ;
-(id)didOccurEvent:(id)arg0 causingDevice:(id)arg1 ;
-(id)dumpState;
-(id)durationEndEvents;
-(id)initWithEventTrigger:(id)arg0 predicateUtilities:(id)arg1 triggerEvent:(id)arg2 causingDevice:(id)arg3 workQueue:(id)arg4 actionSets:(id)arg5 evaluationCondition:(id)arg6 recurrences:(id)arg7 endEvents:(id)arg8 msgDispatcher:(id)arg9 ;
-(id)logIdentifier;
-(id)valueInActionSetWriteResponse:(id)arg0 actionSetUUID:(id)arg1 accUUID:(id)arg2 serviceID:(id)arg3 characteristicID:(id)arg4 ;
-(void)_activateDurationEvents;
-(void)_activateEvents:(id)arg0 ;
-(void)_activateMonitoringEvents;
-(void)_addEvent:(id)arg0 causingDevice:(id)arg1 ;
-(void)_callExecutionComplete:(id)arg0 ;
-(void)_callExecutionComplete:(id)arg0 callDelegate:(BOOL)arg1 ;
-(void)_callExecutionCompleteIfNoMoreOutstandingRequests;
-(void)_directlyExecuteActionSetsWithCompletionHandler:(id)arg0 ;
-(void)_evaluateFiringTrigger;
-(void)_executeTriggerAfterEvaluatingCondition:(id)arg0 ;
-(void)_handleActionSetExecutionResponse:(id)arg0 actionSetError:(id)arg1 completion:(id)arg2 ;
-(void)_handleMonitoringEvent:(id)arg0 ;
-(void)_removeUserDialog;
-(void)_restoreState;
-(void)_submitAnalyticsData:(id)arg0 ;
-(void)_userResponse:(NSUInteger)arg0 device:(id)arg1 completionHandler:(id)arg2 ;
-(void)addEvent:(id)arg0 causingDevice:(id)arg1 ;
-(void)cancelSessionIfWaitingForUserResponse;
-(void)dealloc;
-(void)evaluateFiringTrigger;
-(void)handleSessionPlaybackStateUpdatedNotification:(id)arg0 ;
-(void)postponeRestoreIfWaitingForEndEvent;
-(void)timerDidFire:(id)arg0 ;
-(void)userResponse:(NSUInteger)arg0 device:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif