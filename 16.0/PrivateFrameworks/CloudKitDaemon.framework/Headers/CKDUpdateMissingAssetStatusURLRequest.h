// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDUPDATEMISSINGASSETSTATUSURLREQUEST_H
#define CKDUPDATEMISSINGASSETSTATUSURLREQUEST_H

@class NSArray, CKRecordID;


#import "CKDURLRequest.h"

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *assetPutReceipts; // ivar: _assetPutReceipts
@property (retain, nonatomic) NSArray *assetSizes; // ivar: _assetSizes
@property (nonatomic) BOOL isPackage; // ivar: _isPackage
@property (nonatomic) BOOL recovered; // ivar: _recovered
@property (copy, nonatomic) CKRecordID *repairRecordID; // ivar: _repairRecordID


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recoveredPackageRepairRecordID:(id)arg1 sizes:(id)arg2 putReceipts:(id)arg3 ;
-(id)initWithOperation:(id)arg0 repairRecordID:(id)arg1 recovered:(BOOL)arg2 package:(BOOL)arg3 sizes:(id)arg4 putReceipts:(id)arg5 ;
-(id)initWithOperation:(id)arg0 unrecoveredRepairRecordID:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif