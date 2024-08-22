// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSYNCENGINEMODIFYRECORDBATCHESOPERATION_H
#define CKSYNCENGINEMODIFYRECORDBATCHESOPERATION_H

@class NSOperation, NSError, NSOperationQueue, NSSet;


#import "CKDatabase.h"
#import "CKOperationGroup.h"

@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation {
    int _executionState;
}


@property (copy, nonatomic) id *batchCompletionBlock; // ivar: _batchCompletionBlock
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (copy, nonatomic) id *modifyRecordBatchesCompletionBlock; // ivar: _modifyRecordBatchesCompletionBlock
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) id *perRecordDeleteBlock; // ivar: _perRecordDeleteBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) id *perRecordSaveBlock; // ivar: _perRecordSaveBlock
@property (copy, nonatomic) id *populateNextBatchBlock; // ivar: _populateNextBatchBlock
@property (copy, nonatomic) id *willEnqueueOperationBlock; // ivar: _willEnqueueOperationBlock
@property (retain, nonatomic) NSSet *zoneIDs; // ivar: _zoneIDs


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)cancelledError;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)operationToModifyBatch:(id)arg0 ;
-(void)addNextModifyOperationOrFinishIfNoRemainingWork;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)start;
-(void)transitionToExecuting;
-(void)transitionToFinished;


@end


#endif