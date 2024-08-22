// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMITASKSERVICESERVER_H
#define HMITASKSERVICESERVER_H

@class NSOperationQueue;


#import "HMITaskService.h"

@interface HMITaskServiceServer : HMITaskService {
    os_unfair_lock_s _lock;
}


@property int nextTaskID; // ivar: _nextTaskID
@property (readonly) NSOperationQueue *operationQueue; // ivar: _operationQueue


+(id)logCategory;
-(BOOL)cancelTask:(int)arg0 ;
-(id)buildFaceMisclassificationTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildHomePersonClusteringTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildPersonsModelsSummaryTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildRemovePersonsModelTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildSubmitFeedbackTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildTuriTrialUpdateTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildUpdatePersonsModelTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)buildUpdateTorsoModelTaskFromOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(int)getNextTaskID;
-(int)submitTask:(id)arg0 completionHander:(id)arg1 ;
-(int)submitTaskWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif