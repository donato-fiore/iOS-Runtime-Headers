// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILETRANSITIONSIMPLEANIMATIONCOORDINATOR_H
#define PXTILETRANSITIONSIMPLEANIMATIONCOORDINATOR_H

@class NSString;
@protocol PXTileTransitionAnimationCoordinator, NSObject;

#import <Foundation/Foundation.h>


@interface PXTileTransitionSimpleAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>



@property (readonly, nonatomic) NSObject<NSObject> *animationOptions; // ivar: _animationOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getFinalGeometry:(struct PXTileGeometry *)arg0 finalUserData:(*id)arg1 forDisappearingTileWithIdentifier:(struct PXTileIdentifier )arg2 fromGeometry:(struct PXTileGeometry )arg3 fromUserData:(id)arg4 ;
-(BOOL)getInitialGeometry:(struct PXTileGeometry *)arg0 initialUserData:(*id)arg1 forAppearingTileWithIdentifier:(struct PXTileIdentifier )arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier )arg0 fromGeometry:(struct PXTileGeometry )arg1 fromUserData:(id)arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(id)init;
-(id)initWithAnimationOptions:(id)arg0 ;
-(id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier )arg0 animationType:(NSInteger)arg1 fromGeometry:(struct PXTileGeometry )arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry )arg4 toUserData:(id)arg5 ;


@end


#endif