// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETSTILETRANSITIONCOORDINATOR_H
#define PXASSETSTILETRANSITIONCOORDINATOR_H

@class NSArray, NSIndexSet, NSString;
@protocol PXTileTransitionAnimationCoordinator;

#import <Foundation/Foundation.h>

#import "PXBasicTileAnimationOptions.h"
#import "PXSectionedChangeDetailsRepository.h"
#import "PXAssetsTilingLayout.h"
#import "PXTilingChange.h"

@interface PXAssetsTileTransitionCoordinator : NSObject <PXTileTransitionAnimationCoordinator>



@property (readonly, nonatomic) PXBasicTileAnimationOptions *_basicAnimationOptions; // ivar: __basicAnimationOptions
@property (readonly, nonatomic) NSArray *_changeDetails; // ivar: __changeDetails
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *_changeHistory; // ivar: __changeHistory
@property (readonly, nonatomic) PXAssetsTilingLayout *_fromLayout; // ivar: __fromLayout
@property (readonly, nonatomic) NSIndexSet *_kindsCenteredOnContentTiles; // ivar: __kindsCenteredOnContentTiles
@property (readonly, nonatomic) NSIndexSet *_kindsCoveringContentTiles; // ivar: __kindsCoveringContentTiles
@property (readonly, nonatomic) NSIndexSet *_kindsWithDisabledAnimation; // ivar: __kindsWithDisabledAnimation
@property (readonly, nonatomic) BOOL _shouldCrossfade; // ivar: __shouldCrossfade
@property (readonly, nonatomic) PXTilingChange *_tilingChange; // ivar: __tilingChange
@property (readonly, nonatomic) PXAssetsTilingLayout *_toLayout; // ivar: __toLayout
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayInsertions; // ivar: _delayInsertions
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL treatRemovalsAsDeletes; // ivar: _treatRemovalsAsDeletes


+(id)transitionCoordinatorForChange:(id)arg0 changeHistory:(id)arg1 ;
-(BOOL)getFinalGeometry:(struct PXTileGeometry *)arg0 finalUserData:(*id)arg1 forDisappearingTileWithIdentifier:(struct PXTileIdentifier )arg2 fromGeometry:(struct PXTileGeometry )arg3 fromUserData:(id)arg4 ;
-(BOOL)getInitialGeometry:(struct PXTileGeometry *)arg0 initialUserData:(*id)arg1 forAppearingTileWithIdentifier:(struct PXTileIdentifier )arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier )arg0 fromGeometry:(struct PXTileGeometry )arg1 fromUserData:(id)arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(id)initWithTilingChange:(id)arg0 changeHistory:(id)arg1 ;
-(id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier )arg0 animationType:(NSInteger)arg1 fromGeometry:(struct PXTileGeometry )arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry )arg4 toUserData:(id)arg5 ;
-(void)disableAnimationsForTileKind:(NSUInteger)arg0 ;
-(void)enableAnimationsForTileKind:(NSUInteger)arg0 ;


@end


#endif