// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDUPDATEMISSINGASSETSTATUSOPERATION_H
#define CKDUPDATEMISSINGASSETSTATUSOPERATION_H

@class NSArray, CKRecord, CKRecordID;


#import "CKDDatabaseOperation.h"
#import "CKDFetchRecordsOperation.h"
#import "CKDModifyRecordsOperation.h"

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *assetPutReceipts; // ivar: _assetPutReceipts
@property (retain, nonatomic) NSArray *assetSizes; // ivar: _assetSizes
@property (retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // ivar: _fetchOperation
@property (nonatomic) BOOL isPackage; // ivar: _isPackage
@property (retain, nonatomic) CKDModifyRecordsOperation *modifyOperation; // ivar: _modifyOperation
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (nonatomic) BOOL recovered; // ivar: _recovered
@property (retain, nonatomic) CKRecordID *repairRecordID; // ivar: _repairRecordID
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_updateMissingAssetStatus;
-(void)main;


@end


#endif