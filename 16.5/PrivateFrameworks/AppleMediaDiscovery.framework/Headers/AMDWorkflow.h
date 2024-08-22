// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDWORKFLOW_H
#define AMDWORKFLOW_H

@class NSManagedObject, NSString, NSData;



@interface AMDWorkflow : NSManagedObject

@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) short domain;
@property (nonatomic) NSInteger endTime;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *secondaryModelId;
@property (nonatomic) NSInteger startTime;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSData *workflow;


+(id)deleteAllWorkflows:(*id)arg0 ;
+(id)deleteWithPredicate:(id)arg0 error:(*id)arg1 ;
+(id)deleteWorkflowForDomain:(NSInteger)arg0 withModelId:(id)arg1 withSecondaryModelId:(id)arg2 andUsecaseId:(id)arg3 andTreatmentId:(id)arg4 error:(*id)arg5 ;
+(id)deleteWorkflowsForDomain:(NSInteger)arg0 andTreatmentId:(id)arg1 andUseCaseId:(id)arg2 error:(*id)arg3 ;
+(id)deleteWorkflowsForDomain:(NSInteger)arg0 error:(*id)arg1 ;
+(id)deleteWorkflowsForModelId:(id)arg0 error:(*id)arg1 ;
+(id)fetchAllWorkflows:(*id)arg0 ;
+(id)fetchRequest;
+(id)fetchWithPredicates:(id)arg0 error:(*id)arg1 ;
+(id)getAllActiveWorkflowsForDomain:(NSInteger)arg0 andUseCaseId:(id)arg1 error:(*id)arg2 ;
+(id)getAllWorkflowsForDomain:(NSInteger)arg0 withUseCaseId:(id)arg1 error:(*id)arg2 ;
+(id)getCurrentWorkflowForDomain:(NSInteger)arg0 andTreatmentId:(id)arg1 andUseCaseId:(id)arg2 error:(*id)arg3 ;
+(id)getWorkflowsForDomain:(NSInteger)arg0 andTreatmentId:(id)arg1 andUseCaseId:(id)arg2 error:(*id)arg3 ;
+(id)getWorkflowsForDomain:(NSInteger)arg0 error:(*id)arg1 ;
+(id)getWorkflowsForModelId:(id)arg0 error:(*id)arg1 ;
+(id)performWorkflowCleanupForDomain:(NSInteger)arg0 error:(*id)arg1 ;
+(void)addWorkflowsFromInflightTable:(id)arg0 error:(*id)arg1 ;
+(void)saveWorkflow:(id)arg0 forDomain:(NSInteger)arg1 withCallUUID:(id)arg2 error:(*id)arg3 ;


@end


#endif