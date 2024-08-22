// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSINGLEASSETLAYOUTTRANSITIONCOORDINATOR_H
#define PUSINGLEASSETLAYOUTTRANSITIONCOORDINATOR_H

@protocol PUTilingCoordinateSystem;


#import "PUTileTransitionCoordinator.h"

@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator

@property (retain, nonatomic) NSObject<PUTilingCoordinateSystem> *fixedCoordinateSystem; // ivar: _fixedCoordinateSystem


-(id)_layoutInfoWithDefaultDisappearance:(id)arg0 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg0 toLayoutInfo:(id)arg1 ;


@end


#endif