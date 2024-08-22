// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHRECORDVERSIONSOPERATION_H
#define CKDFETCHRECORDVERSIONSOPERATION_H

@class NSArray, NSString;
@protocol CKFetchRecordVersionsOperationCallbacks, OS_dispatch_group;


#import "CKDDatabaseOperation.h"
#import "CKDDecryptRecordsOperation.h"

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}


@property (retain, nonatomic) NSObject<CKFetchRecordVersionsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup; // ivar: _fetchVersionsGroup
@property (nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (retain, nonatomic) NSString *minimumVersionETag; // ivar: _minimumVersionETag
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (copy, nonatomic) id *recordVersionFetchedBlock; // ivar: _recordVersionFetchedBlock
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent


-(BOOL)hasDecryptOperation;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordVersionsFetchedForID:(id)arg0 isDeleted:(BOOL)arg1 versions:(id)arg2 responseCode:(id)arg3 ;
-(void)main;


@end


#endif