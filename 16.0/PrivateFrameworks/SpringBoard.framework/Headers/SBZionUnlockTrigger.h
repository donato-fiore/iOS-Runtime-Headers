// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBZIONUNLOCKTRIGGER_H
#define SBZIONUNLOCKTRIGGER_H

@class BSAbsoluteMachTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;


#import "SBMesaUnlockTrigger.h"

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> *_behaviorConfigurationDelegate;
    BOOL _hasVisibleContentToReveal;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSAbsoluteMachTimer *_restToOpenTimer;
    BSAbsoluteMachTimer *_minTouchIDTimer;
}




-(BOOL)_isRestToOpenAvailable;
-(BOOL)bioUnlock;
-(id)description;
-(id)initWithUnlockBehaviorConfigurationDelegate:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_cancelMinTouchIDTimer;
-(void)_cancelRestToOpenTimer;
-(void)_evaluateRestToOpenTimer;
-(void)_startRestToOpenTimer;
-(void)_startRestToOpenTimerWithDuration:(CGFloat)arg0 ;
-(void)dealloc;
-(void)fingerOff;
-(void)fingerOn;
-(void)lockButtonDown;
-(void)screenOff;
-(void)screenOn;


@end


#endif