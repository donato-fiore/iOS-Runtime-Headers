// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDDOWNLOADASSETSOPERATIONINFO_H
#define CKDDOWNLOADASSETSOPERATIONINFO_H

@class CKDatabaseOperationInfo, NSArray;



@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSArray *assetURLInfosToFillOut; // ivar: _assetURLInfosToFillOut
@property (retain, nonatomic) NSArray *assetsToDownload; // ivar: _assetsToDownload
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory; // ivar: _assetsToDownloadInMemory
@property (retain, nonatomic) NSArray *packageIndexSets; // ivar: _packageIndexSets
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory




@end


#endif