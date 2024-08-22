// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDWORKFLOWINFLIGHT_H
#define AMDWORKFLOWINFLIGHT_H

@class NSManagedObject, NSString, NSData;



@interface AMDWorkflowInFlight : NSManagedObject

@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) NSInteger creationTime;
@property (nonatomic) short domain;
@property (nonatomic) NSInteger endTime;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *secondaryModelId;
@property (nonatomic) NSInteger startTime;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSData *workflow;


+(id)deleteAllInflightWorkflows:(*id)arg0 ;
+(id)deleteWithPredicates:(id)arg0 error:(*id)arg1 ;
+(id)deleteWorkflowForDomain:(NSInteger)arg0 withModelId:(id)arg1 withSecondaryModelId:(id)arg2 andUsecaseId:(id)arg3 andTreatmentId:(id)arg4 error:(*id)arg5 ;
+(id)fetchAllModelIds:(*id)arg0 ;
+(id)fetchAllWorkflowEntries:(*id)arg0 ;
+(id)fetchAllWorkflows:(*id)arg0 ;
+(id)fetchRequest;
+(id)getAllWorkflowsForDomain:(NSInteger)arg0 withModelId:(id)arg1 error:(*id)arg2 ;
+(id)getAllWorkflowsWithModelId:(id)arg0 error:(*id)arg1 ;
+(id)moveInflightWorkflowsToWorkflows:(id)arg0 withDomain:(NSInteger)arg1 error:(*id)arg2 ;
+(void)saveWorkflow:(id)arg0 forDomain:(NSInteger)arg1 withCallUUID:(id)arg2 error:(*id)arg3 ;


@end


#endif