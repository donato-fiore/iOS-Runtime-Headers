// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDARCHIVERECORDSOPERATION_H
#define CKDARCHIVERECORDSOPERATION_H

@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKArchiveRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *recordArchivedBlock; // ivar: _recordArchivedBlock
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordArchived:(id)arg0 responseCode:(id)arg1 ;
-(void)main;


@end


#endif