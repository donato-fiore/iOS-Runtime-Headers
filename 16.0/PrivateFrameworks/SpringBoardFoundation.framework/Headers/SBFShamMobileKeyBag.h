// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFSHAMMOBILEKEYBAG_H
#define SBFSHAMMOBILEKEYBAG_H

@class NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBFMutableMobileKeyBagState.h"

@interface SBFShamMobileKeyBag : NSObject {
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    NSUInteger _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}




+(id)shamKeyBagWithRecoveryRequired:(BOOL)arg0 correctPasscode:(id)arg1 ;
+(id)shamKeyBagWithRecoveryRequired:(BOOL)arg0 recoveryPossible:(BOOL)arg1 timeScaleFactor:(float)arg2 correctPasscode:(id)arg3 ;
-(BOOL)beginRecovery:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_simplifiedLockStateForLockState:(NSInteger)arg0 ;
-(id)extendedState;
-(id)initWithRecoveryRequired:(BOOL)arg0 correctPasscode:(id)arg1 ;
-(id)initWithRecoveryRequired:(BOOL)arg0 recoveryPossible:(BOOL)arg1 timeScaleFactor:(float)arg2 correctPasscode:(id)arg3 ;
-(id)state;
-(void)_queue_initializeSecretChangeMachine:(id)arg0 ;
-(void)_queue_stepSecretChangeMachine;
-(void)createStashBag:(id)arg0 skipSEKeepUserDataOperation:(BOOL)arg1 completion:(id)arg2 ;
// -(void)createStashBag:(id)arg0 skipSEKeepUserDataOperation:(BOOL)arg1 completion:(id)arg2 completionQueue:(unk)arg3  ;
-(void)lock;
-(void)waitForUnlockWithTimeout:(float)arg0 ;


@end


#endif