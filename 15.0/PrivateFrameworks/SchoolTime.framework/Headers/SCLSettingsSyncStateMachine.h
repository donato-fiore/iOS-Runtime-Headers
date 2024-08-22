// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSETTINGSSYNCSTATEMACHINE_H
#define SCLSETTINGSSYNCSTATEMACHINE_H

@protocol SCLSettingsSyncStateMachineDelegate;

#import <Foundation/Foundation.h>

#import "SCLSettingsSyncContext.h"
#import "SCLSettingsSyncState.h"
#import "SCLSettingsSyncErrorHandler.h"

@interface SCLSettingsSyncStateMachine : NSObject

@property (retain, nonatomic) SCLSettingsSyncContext *context; // ivar: _context
@property (readonly, nonatomic) SCLSettingsSyncState *currentState; // ivar: _currentState
@property (weak, nonatomic) NSObject<SCLSettingsSyncStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SCLSettingsSyncErrorHandler *errorHandler; // ivar: _errorHandler
@property (readonly, nonatomic) SCLSettingsSyncState *failedState; // ivar: _failedState
@property (readonly, nonatomic) SCLSettingsSyncState *pendingSendState; // ivar: _pendingSendState
@property (readonly, nonatomic) SCLSettingsSyncState *sendingState; // ivar: _sendingState
@property (readonly, nonatomic) SCLSettingsSyncState *sentState; // ivar: _sentState
@property (readonly, nonatomic) SCLSettingsSyncState *syncedState; // ivar: _syncedState


-(BOOL)_isRelevantMessage:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)activate;
-(void)cancelCommitTimer;
-(void)cancelRetryActivity;
-(void)commitSettings;
-(void)didEnqueueMessage:(id)arg0 ;
-(void)enqueueFailedWithError:(id)arg0 ;
-(void)message:(id)arg0 didFailToAcknowledgeWithError:(id)arg1 ;
-(void)message:(id)arg0 failedWithError:(id)arg1 ;
-(void)messageDidSend:(id)arg0 ;
-(void)messageWasDelivered:(id)arg0 ;
-(void)performSync;
-(void)scheduleCommitTimerWithInterval:(CGFloat)arg0 ;
-(void)scheduleRetryWithActivityCriteria:(id)arg0 ;
-(void)settingsDidChange;
-(void)significantUserInteractionOccurred;
-(void)transitionToState:(id)arg0 ;
-(void)xpcActivityStarted;


@end


#endif