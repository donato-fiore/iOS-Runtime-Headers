// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3ECS22DISPATCHAPPLYSCHEDULER_H
#define _TTC3ECS22DISPATCHAPPLYSCHEDULER_H

@class TtC3ECS9Scheduler;



@interface _TtC3ECS22DispatchApplyScheduler : TtC3ECS9Scheduler {
    ? sema;
    ? inFlightJobs;
    ? inFlightJobGroups;
    ? currentStageIndex;
    ? lastNonActionableStep;
    ? currentStep;
    ? jobPickingCount;
    ? jobPickingSkipCount;
    ? jobPickingFailedCount;
    ? jobPickingIterationCount;
}






@end


#endif