// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNCENGINEMODIFYPENDINGCHANGESOPERATION_H
#define CKSYNCENGINEMODIFYPENDINGCHANGESOPERATION_H

@class NSOperation, NSString, NSError, NSMutableDictionary, NSOperationQueue, NSSet;
@protocol CKPropertiesDescription;


#import "CKDatabase.h"
#import "CKOperationGroup.h"

@interface CKSyncEngineModifyPendingChangesOperation : NSOperation <CKPropertiesDescription>

 {
    int _executionState;
}


@property (copy, nonatomic) id *batchCompletionBlock; // ivar: _batchCompletionBlock
@property (nonatomic) BOOL continueModifyingPendingChangesAfterFailure; // ivar: _continueModifyingPendingChangesAfterFailure
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID; // ivar: _errorsByRecordID
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxZoneCountPerBatch; // ivar: _maxZoneCountPerBatch
@property (copy, nonatomic) id *modifyPendingChangesCompletionBlock; // ivar: _modifyPendingChangesCompletionBlock
@property (copy, nonatomic) id *modifyRecordZonesCompletionBlock; // ivar: _modifyRecordZonesCompletionBlock
@property (copy, nonatomic) id *networkAttributionBundleIDOverrideBlock; // ivar: _networkAttributionBundleIDOverrideBlock
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) id *perRecordDeleteBlock; // ivar: _perRecordDeleteBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) id *perRecordSaveBlock; // ivar: _perRecordSaveBlock
@property (copy, nonatomic) id *populateNextBatchBlock; // ivar: _populateNextBatchBlock
@property (nonatomic) BOOL startedInitialModifyZonesCheck; // ivar: _startedInitialModifyZonesCheck
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willEnqueueOperationBlock; // ivar: _willEnqueueOperationBlock
@property (retain, nonatomic) NSSet *zoneIDs; // ivar: _zoneIDs
@property (copy, nonatomic) id *zoneIDsToSaveAndDeleteBlock; // ivar: _zoneIDsToSaveAndDeleteBlock


+(BOOL)_removesDependenciesAfterFinish;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)cancelledError;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)operationToModifyBatch:(id)arg0 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)addNextModifyOperationOrFinishIfNoRemainingWork;
-(void)addNextModifyRecordZonesBatch;
-(void)addNextModifyRecordsBatch;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)start;
-(void)transitionToExecuting;
-(void)transitionToFinished;


@end


#endif