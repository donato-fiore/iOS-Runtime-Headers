// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPULLFROMTRANSPORTSYNCSTEP_H
#define CPLPULLFROMTRANSPORTSYNCSTEP_H



#import "CPLSyncStep.h"
#import "CPLPullFromTransportTask.h"
#import "CPLMinglePulledChangesTask.h"

@interface CPLPullFromTransportSyncStep : CPLSyncStep {
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
}




-(BOOL)didFinishTask:(id)arg0 withError:(id)arg1 shouldStop:(*BOOL)arg2 ;
-(BOOL)launchNecessaryTasks;
-(id)descriptionForTasks;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)cancelAllTasks:(BOOL)arg0 ;
-(void)moveTasksToBackground;


@end


#endif