// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACCESSIBILITYMESAUNLOCKTRIGGER_H
#define SBACCESSIBILITYMESAUNLOCKTRIGGER_H

@class NSString;
@protocol SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehaviorConfigurationDelegate;


#import "SBMesaUnlockTrigger.h"

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate>

 {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> *_behaviorConfigurationDelegate;
    SBMesaUnlockTrigger *_baseTrigger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)bioUnlock;
-(id)initWithUnlockBehaviorConfigurationDelegate:(id)arg0 baseTrigger:(id)arg1 ;
-(void)fingerOff;
-(void)fingerOn;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)mesaUnlockTriggerFired:(id)arg0 ;
-(void)screenOff;
-(void)significantUserInteractionOccurred;


@end


#endif