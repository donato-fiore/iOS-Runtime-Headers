// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUBLISHASSETSOPERATION_H
#define CKDPUBLISHASSETSOPERATION_H

@class NSOperation, NSMutableDictionary, NSDictionary, NSArray;
@protocol CKPublishAssetsOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDPublishAssetsOperation : CKDDatabaseOperation

@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (copy, nonatomic) id *assetPublishedBlock; // ivar: _assetPublishedBlock
@property (retain, nonatomic) NSObject<CKPublishAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain) NSOperation *fetchRecordsOperation; // ivar: _fetchRecordsOperation
@property (retain, nonatomic) NSMutableDictionary *fetchedRecordsByID; // ivar: _fetchedRecordsByID
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // ivar: _fileNamesByAssetFieldNames
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_dispatchAssetURLsForRecord:(id)arg0 recordID:(id)arg1 pcs:(struct _OpaquePCSShareProtection *)arg2 error:(id)arg3 ;
-(void)_fetchPCSForRecords;
-(void)_fetchRecords;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif