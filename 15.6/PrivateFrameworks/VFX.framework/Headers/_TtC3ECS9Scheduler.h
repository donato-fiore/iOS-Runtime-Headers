// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC3ECS9SCHEDULER_H
#define _TTC3ECS9SCHEDULER_H

@class SwiftObject;



@interface _TtC3ECS9Scheduler : SwiftObject {
    ? entityManager;
    ? lock;
    ? currentJobID;
    ? currentJobName;
    ? recurrentJobs;
    ? orderedRecurrentJobs;
    ? remainingJobsForThisFrame;
    ? pendingJobsToEnqueueForThisFrame;
    ? pendingJobsToEnqueueForThisFrameOnly;
    ? groupsToUnregister;
    ? liveQueryCountByJobID;
    ? needsRescheduling;
    ? needsReschedulingForThisFrame;
    ? dependenciesByJob;
    ? schedulerEventsRecordedDuringLastFrame;
    ? queriesRecordedDuringLastFrame;
    ? schedulerEventsRecordedDuringThisFrame;
    ? queriesRecordedDuringThisFrame;
    ? simulationTimeScale;
}






@end


#endif