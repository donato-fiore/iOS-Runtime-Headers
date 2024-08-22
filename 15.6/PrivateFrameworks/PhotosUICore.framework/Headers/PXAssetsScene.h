// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETSSCENE_H
#define PXASSETSSCENE_H

@class NSMutableArray, NSString;
@protocol PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXAssetsSceneDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetsDataSource.h"
#import "PXAssetBadgeManager.h"
#import "PXAssetsTilingLayout.h"
#import "PXAssetsDataSourceManager.h"
#import "PXMediaProvider.h"
#import "PXScrollViewSpeedometer.h"
#import "PXSectionedSelectionManager.h"
#import "PXTilingController.h"
#import "PXReusableObjectPool.h"

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _hasScheduledUpdate;
    ? _needsUpdateFlags;
    ? _delegateFlags;
    BOOL _isAskingForTileIdentifierConverter;
    BOOL _isAskingForTransitionAnimationCoordinator;
}


@property (readonly, nonatomic) NSMutableArray *_anchors; // ivar: __anchors
@property (retain, nonatomic, setter=_setDataSource:) PXAssetsDataSource *_dataSource; // ivar: __dataSource
@property (nonatomic) BOOL animatesContent; // ivar: _animatesContent
@property (nonatomic) NSUInteger autoplayBehavior; // ivar: _autoplayBehavior
@property (nonatomic) BOOL autoplayTilesWaitForInput; // ivar: _autoplayTilesWaitForInput
@property (readonly, nonatomic) PXAssetBadgeManager *badgeManager; // ivar: _badgeManager
@property (readonly, nonatomic) PXAssetsTilingLayout *currentLayout;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXAssetsSceneDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXScrollViewSpeedometer *scrollSpeedometer; // ivar: _scrollSpeedometer
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetsTilingLayout *targetLayout;
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController
@property (readonly, nonatomic) PXReusableObjectPool *viewTileReusePool; // ivar: _viewTileReusePool


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)needsUpdate;
-(BOOL)providesTileForIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)init;
-(id)initWithTilingController:(id)arg0 mediaProvider:(id)arg1 dataSourceManager:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTilingController:(id)arg0 mediaProvider:(id)arg1 dataSourceManager:(id)arg2 selectionManager:(id)arg3 delegate:(id)arg4 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 targetVisibleOriginForLayout:(id)arg1 proposedVisibleOrigin:(struct CGPoint )arg2 ;
-(void)_configureLayout:(id)arg0 ;
-(void)_invalidateLayout;
-(void)_saveAnchorAsset;
-(void)_updateDataSourceIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)dealloc;
-(void)didTransitionToDataSource:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)setNeedsUpdate;
-(void)transitionToLayout:(id)arg0 ;
-(void)updateIfNeeded;
-(void)willTransitionToDataSource:(id)arg0 ;


@end


#endif