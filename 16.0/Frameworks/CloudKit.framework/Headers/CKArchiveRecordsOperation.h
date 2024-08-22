// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKARCHIVERECORDSOPERATION_H
#define CKARCHIVERECORDSOPERATION_H

@class NSMutableDictionary, NSArray;
@protocol CKArchiveRecordsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKArchiveRecordsOperationInfo.h"

@interface CKArchiveRecordsOperation : CKDatabaseOperation <CKArchiveRecordsOperationCallbacks>



@property (copy, nonatomic) id *archiveRecordsCompletionBlock; // ivar: _archiveRecordsCompletionBlock
@property (readonly, nonatomic) NSObject<CKArchiveRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKArchiveRecordsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors; // ivar: _perItemErrors
@property (copy, nonatomic) id *recordArchivedBlock; // ivar: _recordArchivedBlock
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleRecordArchivalForRecordID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif