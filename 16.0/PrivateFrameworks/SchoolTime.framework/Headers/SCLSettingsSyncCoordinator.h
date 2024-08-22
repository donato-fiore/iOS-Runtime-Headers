// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSETTINGSSYNCCOORDINATOR_H
#define SCLSETTINGSSYNCCOORDINATOR_H

@class NSURL, NSString;
@protocol SCLSettingsSyncStateMachineDelegate, OS_dispatch_queue, OS_dispatch_source, SCLSettingsSyncTransport;

#import <Foundation/Foundation.h>

#import "SCLScheduleSettings.h"
#import "SCLSettingsSyncStateMachine.h"

@interface SCLSettingsSyncCoordinator : NSObject <SCLSettingsSyncStateMachineDelegate>



@property (readonly, nonatomic) NSURL *contextURL; // ivar: _contextURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) SCLScheduleSettings *schedule; // ivar: _schedule
@property (readonly, nonatomic) SCLSettingsSyncStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource
@property (weak, nonatomic) NSObject<SCLSettingsSyncTransport> *transport; // ivar: _transport
@property (readonly, nonatomic) NSString *xpcActivityName; // ivar: _xpcActivityName


-(id)initWithFileURL:(id)arg0 pairingID:(id)arg1 schedule:(id)arg2 queue:(id)arg3 ;
-(void)activate;
-(void)applySchedule:(id)arg0 ;
-(void)beginActivity:(id)arg0 ;
-(void)cancelCommitTimerForStateMachine:(id)arg0 ;
-(void)cancelRetryActivityForStateMachine:(id)arg0 ;
-(void)commitTimerFired;
-(void)didDeliverMessageWithIdentifier:(id)arg0 ;
-(void)identifier:(id)arg0 didSendWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)noteSignificantUserInteractionOccured;
-(void)performSyncForStateMachine:(id)arg0 ;
-(void)registerActivityWithCriteria:(id)arg0 ;
-(void)stateMachine:(id)arg0 didTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)stateMachine:(id)arg0 scheduleCommitTimerWithInterval:(CGFloat)arg1 ;
-(void)stateMachine:(id)arg0 scheduleRetryWithActivityCriteria:(id)arg1 ;


@end


#endif