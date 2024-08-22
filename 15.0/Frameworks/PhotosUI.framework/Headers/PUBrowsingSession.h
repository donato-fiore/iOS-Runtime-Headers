// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBROWSINGSESSION_H
#define PUBROWSINGSESSION_H

@class NSString, PXAssetEditOperationManager, PXGestureProvider, PXPhotosDetailsContext;
@protocol PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver, PXAssetImportStatusManager;

#import <Foundation/Foundation.h>

#import "PUAssetActionManager.h"
#import "PUContentTileProvider.h"
#import "PUAssetsDataSourceManager.h"
#import "PULoadingStatusManager.h"
#import "PUMediaProvider.h"
#import "PUOneUpMergedVideoProvider.h"
#import "PUTileAnimator.h"
#import "PUBrowsingViewModel.h"

@interface PUBrowsingSession : NSObject <PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver>



@property (readonly, nonatomic) PUAssetActionManager *actionManager; // ivar: _actionManager
@property (retain, nonatomic) PUContentTileProvider *contentTileProvider; // ivar: _contentTileProvider
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // ivar: _editOperationManager
@property (readonly, nonatomic) PXGestureProvider *gestureProvider; // ivar: _gestureProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXAssetImportStatusManager> *importStatusManager; // ivar: _importStatusManager
@property (readonly, nonatomic) PULoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (retain, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // ivar: _mergedVideoProvider
@property (readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext; // ivar: _photosDetailsContext
@property (readonly) Class superclass;
@property (retain, nonatomic) PUTileAnimator *tileAnimator; // ivar: _tileAnimator
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 actionManager:(id)arg1 mediaProvider:(id)arg2 ;
-(id)initWithDataSourceManager:(id)arg0 actionManager:(id)arg1 mediaProvider:(id)arg2 photosDetailsContext:(id)arg3 lowMemoryMode:(BOOL)arg4 ;
-(id)initWithDataSourceManager:(id)arg0 actionManager:(id)arg1 mediaProvider:(id)arg2 photosDetailsContext:(id)arg3 lowMemoryMode:(BOOL)arg4 gestureProvider:(id)arg5 importStatusManager:(id)arg6 ;
-(void)assetsDataSourceManager:(id)arg0 didChangeAssetsDataSource:(id)arg1 ;
-(void)configureTilingView:(id)arg0 ;
-(void)loadingStatusManager:(id)arg0 didUpdateLoadingStatus:(id)arg1 forItem:(id)arg2 ;


@end


#endif