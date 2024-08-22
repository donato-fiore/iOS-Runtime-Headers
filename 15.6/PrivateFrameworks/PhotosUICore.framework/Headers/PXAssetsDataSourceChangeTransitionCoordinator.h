// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETSDATASOURCECHANGETRANSITIONCOORDINATOR_H
#define PXASSETSDATASOURCECHANGETRANSITIONCOORDINATOR_H

@class NSMutableDictionary;


#import "PXAssetsTileTransitionCoordinator.h"
#import "PXBasicTileAnimationOptions.h"

@interface PXAssetsDataSourceChangeTransitionCoordinator : PXAssetsTileTransitionCoordinator {
    PXBasicTileAnimationOptions *_deleteAnimationOptions;
    PXBasicTileAnimationOptions *_insertAnimationOptions;
    NSMutableDictionary *_overrideInitialGeometryByTileIdentifier;
    NSMutableDictionary *_overrideFinalGeometryByTileIdentifier;
}




-(BOOL)getFinalGeometry:(struct PXTileGeometry *)arg0 finalUserData:(*id)arg1 forDisappearingTileWithIdentifier:(struct PXTileIdentifier )arg2 fromGeometry:(struct PXTileGeometry )arg3 fromUserData:(id)arg4 ;
-(BOOL)getInitialGeometry:(struct PXTileGeometry *)arg0 initialUserData:(*id)arg1 forAppearingTileWithIdentifier:(struct PXTileIdentifier )arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier )arg0 fromGeometry:(struct PXTileGeometry )arg1 fromUserData:(id)arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(id)initWithTilingChange:(id)arg0 changeHistory:(id)arg1 ;
-(id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier )arg0 animationType:(NSInteger)arg1 fromGeometry:(struct PXTileGeometry )arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry )arg4 toUserData:(id)arg5 ;
-(void)_updateAnimationDelay;
-(void)setDelayInsertions:(BOOL)arg0 ;
-(void)setTreatRemovalsAsDeletes:(BOOL)arg0 ;


@end


#endif