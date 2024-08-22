// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEDELEGATINGTRANSITIONANIMATIONCOORDINATOR_H
#define AEDELEGATINGTRANSITIONANIMATIONCOORDINATOR_H

@class NSString;
@protocol PXTileTransitionAnimationCoordinator;

#import <Foundation/Foundation.h>


@interface AEDelegatingTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>



@property (readonly, nonatomic) NSObject<PXTileTransitionAnimationCoordinator> *_wrappedCoordinator; // ivar: __wrappedCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDoubleSidedAnimations; // ivar: _enableDoubleSidedAnimations
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getFinalGeometry:(struct PXTileGeometry *)arg0 finalUserData:(*id)arg1 forDisappearingTileWithIdentifier:(struct PXTileIdentifier )arg2 fromGeometry:(struct PXTileGeometry )arg3 fromUserData:(id)arg4 ;
-(BOOL)getInitialGeometry:(struct PXTileGeometry *)arg0 initialUserData:(*id)arg1 forAppearingTileWithIdentifier:(struct PXTileIdentifier )arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier )arg0 fromGeometry:(struct PXTileGeometry )arg1 fromUserData:(id)arg2 toGeometry:(struct PXTileGeometry )arg3 toUserData:(id)arg4 ;
-(id)initWithWrappedCoordinator:(id)arg0 ;
-(id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier )arg0 animationType:(NSInteger)arg1 fromGeometry:(struct PXTileGeometry )arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry )arg4 toUserData:(id)arg5 ;


@end


#endif