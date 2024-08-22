// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMARKASSETBROKENOPERATION_H
#define CKDMARKASSETBROKENOPERATION_H

@class NSString, NSError, CKRecord, CKRecordID, CKRecordZone, CKUploadRequestConfiguration;
@protocol CKMarkAssetBrokenOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "CKDModifyRecordsOperation.h"
#import "CKDFetchRecordsOperation.h"
#import "CKDMarkAssetBrokenURLRequestWrapperOperation.h"
#import "CKDModifyRecordZonesOperation.h"
#import "CKDFetchRecordZonesOperation.h"

@interface CKDMarkAssetBrokenOperation : CKDDatabaseOperation

@property (copy, nonatomic) id *assetOrPackageMarkedBrokenBlock; // ivar: _assetOrPackageMarkedBrokenBlock
@property (nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone; // ivar: _bypassPCSEncryptionForTouchRepairZone
@property (retain, nonatomic) NSObject<CKMarkAssetBrokenOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) CKDModifyRecordsOperation *corruptOperation; // ivar: _corruptOperation
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // ivar: _fetchOperation
@property (retain, nonatomic) NSString *field; // ivar: _field
@property (nonatomic) NSInteger listIndex; // ivar: _listIndex
@property (retain, nonatomic) NSError *markAssetBrokenError; // ivar: _markAssetBrokenError
@property (nonatomic) NSUInteger numMarkAssetBrokenFailures; // ivar: _numMarkAssetBrokenFailures
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecordZone *repairZone; // ivar: _repairZone
@property (nonatomic) BOOL simulateCorruptAsset; // ivar: _simulateCorruptAsset
@property (nonatomic) NSUInteger state;
@property (nonatomic) BOOL touchRepairZone; // ivar: _touchRepairZone
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property (retain, nonatomic) CKDMarkAssetBrokenURLRequestWrapperOperation *wrapperOperation; // ivar: _wrapperOperation
@property (nonatomic) BOOL writeRepairRecord; // ivar: _writeRepairRecord
@property (retain, nonatomic) CKDModifyRecordZonesOperation *zoneCreateOperation; // ivar: _zoneCreateOperation
@property (retain, nonatomic) CKDFetchRecordZonesOperation *zoneFetchOperation; // ivar: _zoneFetchOperation


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)assetOrPackageForFetchedRecord;
-(id)checkPreconditions;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)repairContainer;
-(int)operationType;
-(void)_breakAsset;
-(void)_fetchRecord;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_markAssetBroken;
-(void)_touchCreateRepairZone;
-(void)_touchFetchRepairZone;
-(void)main;


@end


#endif