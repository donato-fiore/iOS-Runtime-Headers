// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUDEFAULTFRAMECHANGETILETRANSITIONCOORDINATOR_H
#define PUDEFAULTFRAMECHANGETILETRANSITIONCOORDINATOR_H

@class NSSet;


#import "PUDefaultTileTransitionCoordinator.h"
#import "PUTilingView.h"

@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers; // ivar: __invisibleTileControllers
@property (nonatomic) BOOL shouldCrossFadeTiles; // ivar: _shouldCrossFadeTiles
@property (weak, nonatomic) PUTilingView *tilingView; // ivar: _tilingView


-(BOOL)_isLayoutInfoVisible:(id)arg0 ;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)_layoutInfoForDisappearedInvisibleTile:(id)arg0 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(void)prepare;


@end


#endif