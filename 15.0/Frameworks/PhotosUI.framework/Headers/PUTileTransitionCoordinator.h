// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILETRANSITIONCOORDINATOR_H
#define PUTILETRANSITIONCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface PUTileTransitionCoordinator : NSObject



+(id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)arg0 toLayout:(id)arg1 withTilingView:(id)arg2 anchorAssetReference:(id)arg3 context:(id)arg4 ;
+(id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(BOOL)arg0 tilingView:(id)arg1 ;
+(id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)arg0 layout:(id)arg1 viewModel:(id)arg2 ;
+(id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)arg0 context:(id)arg1 ;
+(id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)arg0 toLayout:(id)arg1 withTilingView:(id)arg2 anchorAssetReference:(id)arg3 context:(id)arg4 ;
+(id)defaultTileTransitionCoordinatorForUpdates;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)newTileAnimationOptions;
-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;


@end


#endif