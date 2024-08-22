// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHRECORDSOPERATIONINFO_H
#define CKFETCHRECORDSOPERATIONINFO_H

@class NSSet, NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // ivar: _assetFieldNamesToPublishURLs
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices; // ivar: _desiredPackageFileIndices
@property (nonatomic) BOOL dropInMemoryAssetContentASAP; // ivar: _dropInMemoryAssetContentASAP
@property (nonatomic) BOOL isFetchCurrentUserOperation; // ivar: _isFetchCurrentUserOperation
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (retain, nonatomic) NSDictionary *recordIDsToETags; // ivar: _recordIDsToETags
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags; // ivar: _recordIDsToVersionETags
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (nonatomic) BOOL shouldFetchMergeableValues; // ivar: _shouldFetchMergeableValues
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // ivar: _webSharingIdentityDataByRecordID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif