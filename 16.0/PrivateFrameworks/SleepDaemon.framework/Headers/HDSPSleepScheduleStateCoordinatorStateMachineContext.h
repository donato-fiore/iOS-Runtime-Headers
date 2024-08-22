// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINECONTEXT_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINECONTEXT_H


#import <Foundation/Foundation.h>


@interface HDSPSleepScheduleStateCoordinatorStateMachineContext : NSObject

@property (readonly, nonatomic) BOOL isForAlarmTurnedOffWhileFiring; // ivar: _isForAlarmTurnedOffWhileFiring
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason


+(id)contextForAlarmTurnedOffWhileFiring;
+(id)contextWithReason:(NSUInteger)arg0 ;


@end


#endif