// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXZOOMABLEINLINEHEADERSDATASOURCEMANAGER_H
#define PXZOOMABLEINLINEHEADERSDATASOURCEMANAGER_H

@class NSString;
@protocol PXAssetsDataSourceManagerObserver, OS_dispatch_queue;


#import "PXSectionedDataSourceManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetsDataSource.h"
#import "PXZoomableInlineHeaderSectionInfoMetaDataStore.h"
#import "PXZoomableInlineHeadersDataSource.h"
#import "PXUpdater.h"

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver>

 {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    PXZoomableInlineHeaderSectionInfoMetaDataStore *_metaDataStore;
    BOOL _isPreparingMetadataInBackground;
    NSObject<OS_dispatch_queue> *_prepareQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *monthsDataSource; // ivar: _monthsDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *yearsDataSource; // ivar: _yearsDataSource


+(BOOL)supportsAssetsDataSourceManager:(id)arg0 ;
-(id)_fetchResultForDataSource:(id)arg0 ;
-(id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg0 ;
-(id)dataSourceForLevel:(NSUInteger)arg0 ;
-(id)initWithAssetsDataSourceManager:(id)arg0 ;
-(void)_didFinishBackgroundPreparationWithResult:(id)arg0 forDataSource:(id)arg1 ;
-(void)_invalidateDataSource;
-(void)_prepareInBackgroundWithDataSource:(id)arg0 ;
-(void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg0 ;
-(void)_updateDataSource;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setNeedsUpdate;


@end


#endif