// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHBATCHEDRECORDSOPERATION_H
#define CKDFETCHBATCHEDRECORDSOPERATION_H

@class NSDictionary, NSString, NSSet, NSArray, NSMutableArray;
@protocol CKDOperationPipelining, OS_dispatch_queue, OS_dispatch_group;


#import "CKDDatabaseOperation.h"
#import "CKDRecordCache.h"
#import "CKDRecordFetchAggregator.h"

@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining>

 {
    CKDRecordCache *_recordCache;
}


@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *desiredAssetKeys; // ivar: _desiredAssetKeys
@property (nonatomic) NSInteger errorReportingStyle; // ivar: _errorReportingStyle
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // ivar: _fetchRecordsGroup
@property (nonatomic) BOOL forcePCSDecryptionAttempt; // ivar: _forcePCSDecryptionAttempt
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numRequestsSent; // ivar: _numRequestsSent
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // ivar: _recordFetcher
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (retain, nonatomic) NSMutableArray *requestInfos; // ivar: _requestInfos
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents
@property (readonly) Class superclass;


-(BOOL)supportsClearAssetEncryption;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg0 optionsByZoneID:(id)arg1 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg0 ;
-(id)_possiblyWrapError:(id)arg0 forRecordWithID:(id)arg1 withCode:(NSInteger)arg2 format:(id)arg3 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)recordCache:(*id)arg0 ;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleChangedRecords:(id)arg0 perRequestSchedulerInfo:(id)arg1 ;
-(void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg0 ;
-(void)_handleRecordDelete:(id)arg0 recordType:(id)arg1 perRequestSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)_noteCompletedURLRequest:(id)arg0 withSchedulerInfo:(id)arg1 ;
-(void)_noteDeletedRecordWithID:(id)arg0 recordType:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationEnding;
-(void)_noteOperationFinishedBlockEnd;
-(void)_sendFetchChangesRequestForZoneIDs:(id)arg0 withOptions:(id)arg1 previousRequestSchedulerInfo:(id)arg2 ;
-(void)main;


@end


#endif