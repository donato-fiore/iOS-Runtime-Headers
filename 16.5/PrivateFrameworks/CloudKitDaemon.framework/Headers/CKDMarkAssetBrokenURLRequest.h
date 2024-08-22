// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMARKASSETBROKENURLREQUEST_H
#define CKDMARKASSETBROKENURLREQUEST_H

@class CKUploadRequestMetadata;


#import "CKDURLRequest.h"

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest

@property (copy, nonatomic) id *assetBrokenBlock; // ivar: _assetBrokenBlock
@property (copy, nonatomic) CKUploadRequestMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL writeRepairRecord; // ivar: _writeRepairRecord


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 assetOrPackageMetadata:(id)arg1 writeRepairRecord:(BOOL)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif