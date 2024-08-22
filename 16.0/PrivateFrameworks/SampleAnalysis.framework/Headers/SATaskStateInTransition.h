// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATASKSTATEINTRANSITION_H
#define SATASKSTATEINTRANSITION_H



#import "SATaskState.h"

@interface SATaskStateInTransition : SATaskState {
    NSUInteger _transitionType;
}




-(NSUInteger)transitionType;
-(id)initWithKCDataTransitioningTask:(struct transitioning_task_snapshot *)arg0 andTerminatedThreadsInstructionCycles:(struct instrs_cycles_snapshot *)arg1 machTimebase:(struct mach_timebase_info )arg2 andDonatingUniquePids:(id)arg3 startTimestamp:(id)arg4 endTimestamp:(id)arg5 startSampleIndex:(NSUInteger)arg6 endSampleIndex:(NSUInteger)arg7 ;


@end


#endif