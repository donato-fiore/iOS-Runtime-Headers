// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSETTINGSSYNCSTATE_H
#define SCLSETTINGSSYNCSTATE_H


#import <Foundation/Foundation.h>

#import "SCLSettingsSyncStateMachine.h"

@interface SCLSettingsSyncState : NSObject

@property (weak, nonatomic) SCLSettingsSyncStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


-(id)initWithStateMachine:(id)arg0 ;
-(void)commitSettings;
-(void)didEnqueueMessage:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)enqueueFailedWithError:(id)arg0 ;
-(void)message:(id)arg0 didFailToAcknowledgeWithError:(id)arg1 ;
-(void)message:(id)arg0 failedWithError:(id)arg1 ;
-(void)messageDidSend:(id)arg0 ;
-(void)messageWasDelivered:(id)arg0 ;
-(void)settingsDidChange;
-(void)significantUserInteractionOccurred;
-(void)willExitWithNextState:(id)arg0 ;
-(void)xpcActivityStarted;


@end


#endif