// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRELATEDTILETRANSITIONANIMATIONCOORDINATOR_H
#define PXRELATEDTILETRANSITIONANIMATIONCOORDINATOR_H

@class NSString;
@protocol PXTileTransitionAnimationCoordinator;

#import <Foundation/Foundation.h>

#import "PXTilingChange.h"
#import "PXTilingController.h"

@interface PXRelatedTileTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>



@property (readonly, nonatomic) PXTilingChange *change; // ivar: _change
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController


-(BOOL)getFinalGeometry:(struct PXTileGeometry *)arg0 finalUserData:(*id)arg1 forDisappearingTileWithIdentifier:(struct PXTileIdentifier )arg2 fromGeometry:(struct PXTileGeometry )arg3 fromUserData:(id)arg4 ;
-(BOOL)getInitialGeometry:(struct PXTileGeometry *)arg0 initialUserData:(*id)arg1 forAppearingTileWithIdentifier:(struct PXTileIdentifier )arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier )arg0 fromGeometry:(struct PXTileGeometry )arg1 fromUserData:(id)arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(NSInteger)_tileKindForIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)init;
-(id)initWithTilingController:(id)arg0 change:(id)arg1 ;
-(id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier )arg0 animationType:(NSInteger)arg1 fromGeometry:(struct PXTileGeometry )arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry )arg4 toUserData:(id)arg5 ;


@end


#endif