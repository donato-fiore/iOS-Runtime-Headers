// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINESTATETIMERS_H
#define HDFITNESSMACHINESTATETIMERS_H

@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

#import <Foundation/Foundation.h>

#import "HDFitnessMachineStateTimer.h"

@interface HDFitnessMachineStateTimers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}


@property (weak, nonatomic) NSObject<HDFitnessMachineStateTimersDelegate> *delegate; // ivar: _delegate


-(BOOL)isDisconnectTimerValid;
-(BOOL)isFieldDetectTimerValid;
-(BOOL)isMachineIdentityVerificationTimerValid;
-(BOOL)isMfaTimerValid;
-(BOOL)isPauseTimerValid;
-(BOOL)isRetryConnectionTimerValid;
-(BOOL)isTagReadTimerValid;
-(BOOL)isUserAcceptanceTimerValid;
-(BOOL)isWaitForMachineStartTimerValid;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)beginDisconnectTimeout;
-(void)beginFieldDetectTimeout;
-(void)beginMachineIdentityVerificationTimeout;
-(void)beginMfaTimeout;
-(void)beginPauseTimeout;
-(void)beginRetryConnectionTimeout;
-(void)beginTagReadTimeout;
-(void)beginUserAcceptanceTimeout;
-(void)beginWaitForMachineStartTimeout;
-(void)cancelAllTimers;
-(void)cancelDisconnectTimeout;
-(void)cancelFieldDetectTimeout;
-(void)cancelMachineIdentityVerificationTimeout;
-(void)cancelMfaTimeout;
-(void)cancelPauseTimeout;
-(void)cancelRetryConnectionTimeout;
-(void)cancelTagReadTimeout;
-(void)cancelUserAcceptanceTimeout;
-(void)cancelWaitForMachineStartTimeout;
-(void)dealloc;


@end


#endif