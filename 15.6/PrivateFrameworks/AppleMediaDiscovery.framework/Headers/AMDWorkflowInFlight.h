// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDWORKFLOWINFLIGHT_H
#define AMDWORKFLOWINFLIGHT_H

@class NSManagedObject, NSString, NSData;



@interface AMDWorkflowInFlight : NSManagedObject

@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) NSInteger creationTime;
@property (nonatomic) short domain;
@property (nonatomic) NSInteger endTime;
@property (copy, nonatomic) NSString *modelId;
@property (nonatomic) NSInteger startTime;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSData *workflow;


+(id)deleteAllInflightWorkflows:(*id)arg0 ;
+(id)deleteWithPredicates:(id)arg0 error:(*id)arg1 ;
+(id)deleteWorkflowsForDomain:(NSInteger)arg0 withModelId:(id)arg1 error:(*id)arg2 ;
+(id)fetchAllModelIds:(*id)arg0 ;
+(id)fetchAllWorkflowEntries:(*id)arg0 ;
+(id)fetchAllWorkflows:(*id)arg0 ;
+(id)fetchRequest;
+(id)getAllWorkflowsForDomain:(NSInteger)arg0 withModelId:(id)arg1 error:(*id)arg2 ;
+(id)moveInflightWorkflowsToWorkflows:(id)arg0 forModelId:(id)arg1 withDomain:(NSInteger)arg2 error:(*id)arg3 ;
+(void)saveWorkflow:(id)arg0 forDomain:(NSInteger)arg1 withCallUUID:(id)arg2 error:(*id)arg3 ;


@end


#endif