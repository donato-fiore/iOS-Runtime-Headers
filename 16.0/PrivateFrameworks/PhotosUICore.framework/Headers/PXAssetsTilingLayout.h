// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSTILINGLAYOUT_H
#define PXASSETSTILINGLAYOUT_H

@class NSIndexSet;


#import "PXTilingLayout.h"
#import "PXBasicTileUserData.h"
#import "PXOverlayBadgeTileUserData.h"
#import "PXSelectionBadgeTileUserData.h"
#import "PXAssetsDataSource.h"
#import "PXIndexPathSet.h"

@interface PXAssetsTilingLayout : PXTilingLayout

@property (readonly, nonatomic) PXBasicTileUserData *_draggingDimmingUserData; // ivar: __draggingDimmingUserData
@property (readonly, nonatomic) PXBasicTileUserData *_highlightedDimmingUserData; // ivar: __highlightedDimmingUserData
@property (retain, nonatomic, setter=_setContentTileUserData:) PXOverlayBadgeTileUserData *_overlayBadgeTileUserData; // ivar: _overlayBadgeTileUserData
@property (readonly, nonatomic) PXBasicTileUserData *_selectedDimmingUserData; // ivar: __selectedDimmingUserData
@property (readonly, nonatomic) PXSelectionBadgeTileUserData *_selectedUserData; // ivar: __selectedUserData
@property (readonly, nonatomic) PXSelectionBadgeTileUserData *_unselectedUserData; // ivar: __unselectedUserData
@property (retain, nonatomic) NSIndexSet *additionalAccessoryTileKinds; // ivar: _additionalAccessoryTileKinds
@property (nonatomic) NSUInteger animatedOverlayBehavior; // ivar: _animatedOverlayBehavior
@property (nonatomic) NSUInteger badgeOptions; // ivar: _badgeOptions
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) PXIndexPathSet *draggingIndexPaths; // ivar: _draggingIndexPaths
@property (nonatomic) PXSimpleIndexPath focusedIndexPath; // ivar: _focusedIndexPath
@property (retain, nonatomic) PXIndexPathSet *hiddenIndexPaths; // ivar: _hiddenIndexPaths
@property (nonatomic) PXSimpleIndexPath highlightedIndexPath; // ivar: _highlightedIndexPath
@property (retain, nonatomic) PXIndexPathSet *selectedIndexPaths; // ivar: _selectedIndexPaths
@property (nonatomic) NSUInteger selectionBadgeOptions; // ivar: _selectionBadgeOptions


-(BOOL)_getAnimatedImageOverlayTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getDimmingTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getLivePhotoOverlayTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getLoopingVideoOverlayTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getOverlayBadgeTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getPlayButtonTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getSelectionBadgeTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getVideoOverlayTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)getAdditionalAccessoryTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forTileKind:(NSUInteger)arg4 contentTileGeometry:(struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath )arg6 ;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)zPositionOffsetForKind:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )_preferredSelectionBadgeSize;
-(struct CGSize )playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 contentTileSize:(struct CGSize )arg1 ;
-(void)_invalidateAllAnimatedOverlayTiles;
-(void)_invalidateAllSelectionTiles;
-(void)adjustGeometry:(struct PXTileGeometry *)arg0 forContentTileWithIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)enumerateAccessoryTilesForContentTileWithIndexPath:(struct PXSimpleIndexPath )arg0 geometry:(struct PXTileGeometry *)arg1 withOptions:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif