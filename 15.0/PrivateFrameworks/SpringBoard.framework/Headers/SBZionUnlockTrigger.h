// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBZIONUNLOCKTRIGGER_H
#define SBZIONUNLOCKTRIGGER_H

@class BSTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;


#import "SBMesaUnlockTrigger.h"

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> *_behaviorConfigurationDelegate;
    BOOL _hasVisibleContentToReveal;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSTimer *_restToOpenTimer;
    BSTimer *_minTouchIDTimer;
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
-(void)fingerOff;
-(void)fingerOn;
-(void)lockButtonDown;
-(void)screenOff;
-(void)screenOn;


@end


#endif