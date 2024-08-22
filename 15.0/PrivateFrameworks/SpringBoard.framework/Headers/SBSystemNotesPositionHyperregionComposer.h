// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESPOSITIONHYPERREGIONCOMPOSER_H
#define SBSYSTEMNOTESPOSITIONHYPERREGIONCOMPOSER_H

@class NSString;
@protocol SBPIPPositionHyperregionComposing, BSInvalidatable, SBPIPPositionHyperregionComposerDelegate;

#import <Foundation/Foundation.h>

#import "SBPIPPositionHyperregionLibrary.h"

@interface SBSystemNotesPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing>

 {
    SBPIPPositionHyperregionLibrary *_regionsLibrary;
    NSUInteger _state;
    SBPIPPositionGeometryContext tempInsetRectGeometry;
    NSUInteger _offscreenCorner;
    int _animationState;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPPositionHyperregionComposerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)positionRegionsForRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(id)regionWithType:(NSInteger)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(void)_addOffscreenCornerToRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(void)_setupStateCapture;
-(void)dealloc;
-(void)invalidate;
-(void)setupForEdgeProtectCornerSwipe:(id)arg0 ;
-(void)setupForInteractiveCornerGesture:(id)arg0 ;
-(void)setupForInteractiveCornerGestureEnd:(id)arg0 ;
-(void)setupForInteractiveDismissal:(id)arg0 ;
-(void)setupForStandardBehavior:(id)arg0 ;
-(void)setupForSwipesFromCorner:(NSUInteger)arg0 animated:(BOOL)arg1 reason:(id)arg2 ;


@end


#endif