// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDUPDATEMISSINGASSETSTATUSOPERATIONINFO_H
#define CKDUPDATEMISSINGASSETSTATUSOPERATIONINFO_H

@class CKDatabaseOperationInfo, NSArray, CKRecordID;



@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSArray *assetPutReceipts; // ivar: _assetPutReceipts
@property (retain, nonatomic) NSArray *assetSizes; // ivar: _assetSizes
@property (nonatomic) BOOL isPackage; // ivar: _isPackage
@property (nonatomic) BOOL recovered; // ivar: _recovered
@property (retain, nonatomic) CKRecordID *repairRecordID; // ivar: _repairRecordID




@end


#endif