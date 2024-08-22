// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPWIDGETBEDTIMESTATE_H
#define HDSPSLEEPWIDGETBEDTIMESTATE_H



#import "HDSPSleepWidgetStateMachineState.h"

@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState



-(BOOL)schedulesExpiration;
-(CGFloat)expirationDuration;
-(NSInteger)widgetState;
-(id)stateName;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif