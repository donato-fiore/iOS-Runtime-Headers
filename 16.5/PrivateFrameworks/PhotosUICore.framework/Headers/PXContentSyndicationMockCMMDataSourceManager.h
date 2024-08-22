// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONMOCKCMMDATASOURCEMANAGER_H
#define PXCONTENTSYNDICATIONMOCKCMMDATASOURCEMANAGER_H

@class NSString;
@protocol PXSectionedDataSourceManagerObserver, PXContentSyndicationAssetFetchResultProvider, PXUIImageProvider, PXContentSyndicationSocialLayerHighlightProvider;


#import "PXContentSyndicationDataSourceManager.h"
#import "PXCMMInvitationsDataSourceManager.h"
#import "PXContentSyndicationMockCMMDataSource.h"

@interface PXContentSyndicationMockCMMDataSourceManager : PXContentSyndicationDataSourceManager <PXSectionedDataSourceManagerObserver>

 {
    id<PXContentSyndicationAssetFetchResultProvider> *_assetFetchResultProvider;
    id<PXUIImageProvider> *_imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> *_highlightProvider;
}


@property (retain, nonatomic) PXCMMInvitationsDataSourceManager *cmmDataSourceManager; // ivar: _cmmDataSourceManager
@property (readonly, nonatomic) PXContentSyndicationMockCMMDataSource *dataSource;
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
-(id)socialLayerHighlightProvider;
-(void)_handleDataSourceChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif