// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONDATASOURCEMANAGER_H
#define PXCONTENTSYNDICATIONDATASOURCEMANAGER_H

@protocol PXDisplayAssetFetchResult;


#import "PXCollectionsDataSourceManager.h"
#import "PXContentSyndicationDataSource.h"

@interface PXContentSyndicationDataSourceManager : PXCollectionsDataSourceManager

@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssetsFetchResult; // ivar: _allAssetsFetchResult
@property (readonly, nonatomic) PXContentSyndicationDataSource *dataSource;


+(id)createCountsController;
-(id)assetFetchResultProvider;
-(id)createAssetsDataSourceManager;
-(id)imageProvider;
-(id)socialLayerHighlightProvider;


@end


#endif