// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUDEFAULTLAYOUTTOLAYOUTTILETRANSITIONCOORDINATOR_H
#define PUDEFAULTLAYOUTTOLAYOUTTILETRANSITIONCOORDINATOR_H

@protocol PUTilingCoordinateSystem;


#import "PUDefaultTileTransitionCoordinator.h"
#import "PUAssetReference.h"
#import "PUTilingLayoutTransitionContext.h"
#import "PUTilingLayout.h"

@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (nonatomic, setter=_setZoomingIn:) BOOL _isZoomingIn; // ivar: __isZoomingIn
@property (nonatomic, setter=_setNeedsUpdateZoomingIn:) BOOL _needsUpdateZoomingIn; // ivar: __needsUpdateZoomingIn
@property (retain, nonatomic) PUAssetReference *anchorAssetReference; // ivar: _anchorAssetReference
@property (retain, nonatomic) PUTilingLayoutTransitionContext *context; // ivar: _context
@property (retain, nonatomic) NSObject<PUTilingCoordinateSystem> *fixedCoordinateSystem; // ivar: _fixedCoordinateSystem
@property (retain, nonatomic) PUTilingLayout *fromLayout; // ivar: _fromLayout
@property (retain, nonatomic) PUTilingLayout *toLayout; // ivar: _toLayout


-(BOOL)_isCenterTileLayoutInfo:(id)arg0 ;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(NSInteger)_zoomLevelForLayout:(id)arg0 ;
-(id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg0 layoutWhereCenterTileExists:(id)arg1 layoutWhereCenterTileDisappeared:(id)arg2 ;
-(id)description;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;
-(void)_invalidateIsZoomingIn;
-(void)_updateIsZoomingInIfNeeded;


@end


#endif