// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPLOCKSCREENBEDTIMESTATE_H
#define HDSPSLEEPLOCKSCREENBEDTIMESTATE_H



#import "HDSPSleepLockScreenStateMachineState.h"

@interface HDSPSleepLockScreenBedtimeState : HDSPSleepLockScreenStateMachineState



-(BOOL)schedulesExpiration;
-(CGFloat)expirationDuration;
-(NSInteger)sleepLockScreenState;
-(id)stateName;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif