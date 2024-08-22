// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIASSETSSCENE_H
#define PXUIASSETSSCENE_H

@class NSMutableSet, NSMapTable, NSString;
@protocol PXTilingControllerPreheatHandler;


#import "PXAssetsScene.h"
#import "PXUIMediaProvider.h"
#import "PXUIScrollViewController.h"

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler>

 {
    NSMutableSet *_tilesInUse;
    NSMapTable *_imageRequesterByAssetReference;
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setSupressingColorSettings:) BOOL _supressingColorSettings; // ivar: __supressingColorSettings
@property (nonatomic) CGFloat contentTileCornerRadius; // ivar: _contentTileCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize maximumImageSize; // ivar: _maximumImageSize
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;


+(void)preloadResources;
-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)needsUpdate;
-(id)_assetsBySizeWithTileIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 ;
-(id)_imageRequesterForAssetReference:(id)arg0 ;
-(id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(id)initWithTilingController:(id)arg0 mediaProvider:(id)arg1 dataSourceManager:(id)arg2 selectionManager:(id)arg3 delegate:(id)arg4 ;
-(void)_invalidatePreheating;
-(void)_registerDefaultTiles;
-(void)_transitionImageRequestersToDataSource:(id)arg0 ;
-(void)_updatePreheatingIfNeeded;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)reusableObjectPool:(id)arg0 didCreateReusableObject:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 didEvictReusableObject:(id)arg1 ;
-(void)startPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)stopPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)updateIfNeeded;
-(void)willTransitionToDataSource:(id)arg0 ;


@end


#endif