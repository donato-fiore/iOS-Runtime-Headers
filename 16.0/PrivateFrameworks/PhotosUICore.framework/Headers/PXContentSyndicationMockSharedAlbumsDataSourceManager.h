// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONMOCKSHAREDALBUMSDATASOURCEMANAGER_H
#define PXCONTENTSYNDICATIONMOCKSHAREDALBUMSDATASOURCEMANAGER_H

@class NSString;
@protocol PXCollectionsDataSourceManagerObserver, PXContentSyndicationAssetFetchResultProvider, PXUIImageProvider, PXContentSyndicationSocialLayerHighlightProvider;


#import "PXContentSyndicationDataSourceManager.h"
#import "PXContentSyndicationMockSharedAlbumsDataSource.h"
#import "PXCollectionsDataSourceManager.h"

@interface PXContentSyndicationMockSharedAlbumsDataSourceManager : PXContentSyndicationDataSourceManager <PXCollectionsDataSourceManagerObserver>

 {
    id<PXContentSyndicationAssetFetchResultProvider> *_assetFetchResultProvider;
    id<PXUIImageProvider> *_imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> *_highlightProvider;
}


@property (readonly, nonatomic) PXContentSyndicationMockSharedAlbumsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXCollectionsDataSourceManager *sharedAlbumsDataSourceManager; // ivar: _sharedAlbumsDataSourceManager
@property (readonly) Class superclass;


+(id)createCountsController;
-(id)allAssetsFetchResult;
-(id)assetFetchResultProvider;
-(id)createAssetsDataSourceManager;
-(id)createInitialDataSource;
-(id)imageProvider;
-(id)socialLayerHighlightProvider;
-(void)_handleDataSourceChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif