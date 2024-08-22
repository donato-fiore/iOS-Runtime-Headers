// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITDATASOURCEMANAGER_H
#define PXCONTENTSYNDICATIONPHOTOKITDATASOURCEMANAGER_H

@class PHPhotoLibrary, NSString;
@protocol PXPhotoLibraryUIChangeObserver, PXContentSyndicationAssetFetchResultProvider, PXUIImageProvider, PXContentSyndicationSocialLayerHighlightProvider;


#import "PXContentSyndicationDataSourceManager.h"
#import "PXContentSyndicationPhotoKitDataSource.h"

@interface PXContentSyndicationPhotoKitDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    PHPhotoLibrary *_photoLibrary;
    id<PXContentSyndicationAssetFetchResultProvider> *_assetFetchResultProvider;
    id<PXUIImageProvider> *_imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> *_highlightProvider;
}


@property (readonly, nonatomic) PXContentSyndicationPhotoKitDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createCountsController;
-(id)allAssetsFetchResult;
-(id)assetFetchResultProvider;
-(id)createAssetsDataSourceManager;
-(id)createInitialDataSource;
-(id)imageProvider;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)socialLayerHighlightProvider;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif