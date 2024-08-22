// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSAINBOXDATASOURCEMANAGER_H
#define PXSAINBOXDATASOURCEMANAGER_H

@class NSString;
@protocol PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider, PXInboxModelDetailViewControllerProvider, PXInboxModelTitleProvider;


#import "PXInboxModelDataSourceManager.h"
#import "PXSAInboxDataSource.h"
#import "PXFeedSectionInfosManager.h"
#import "PXSAInboxDetailViewControllerProvider.h"
#import "PXSAInboxTitleProvider.h"

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider>



@property (readonly, nonatomic) PXSAInboxDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXInboxModelDetailViewControllerProvider> *detailViewControllerProvider;
@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // ivar: _feedSectionInfosManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXInboxModelMediaProvider> *mediaProvider;
@property (retain, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider; // ivar: _sharedAlbumDetailViewControllerProvider
@property (retain, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider; // ivar: _sharedAlbumTitleProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXInboxModelTitleProvider> *titleProvider;


-(id)_sectionInfosForDataSource;
-(id)createInitialDataSource;
-(id)init;
-(id)providerSource;
-(int)requestImageForPreviewItem:(id)arg0 targetSize:(struct CGSize )arg1 resultHandler:(id)arg2 ;
-(void)_updateDataSource;
-(void)feedSectionInfosManager:(id)arg0 sectionInfosDidChange:(id)arg1 ;


@end


#endif