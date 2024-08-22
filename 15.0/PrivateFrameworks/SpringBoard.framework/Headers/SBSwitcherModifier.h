// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERMODIFIER_H
#define SBSWITCHERMODIFIER_H

@class NSString;
@protocol SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding;


#import "SBChainableModifier.h"

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding>

 {
    BOOL _verifyModifierStackCoherencyCheckAfterHandlingEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextProtocol;
+(id)newEventResponse;
+(id)queryProtocol;
-(BOOL)runsInternalVerificationAfterEventDispatch;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 numberOfRows:(NSUInteger)arg1 padding:(CGFloat)arg2 layoutDirection:(NSUInteger)arg3 ;
-(NSUInteger)indexOfFirstFloatingAppFromAppLayouts:(id)arg0 ;
-(NSUInteger)indexOfFirstMainAppLayoutFromAppLayouts:(id)arg0 ;
-(id)_handleEvent:(id)arg0 ;
-(id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange )arg0 numberOfSnapshotsToCache:(NSUInteger)arg1 biasForward:(BOOL)arg2 ;
-(id)defaultAppLayoutsToCacheSnapshots;
-(id)displayName;
-(id)handleAnimatablePropertyChangedEvent:(id)arg0 ;
-(id)handleBlurProgressEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHideMorphToPIPAppLayoutEvent:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)handleHomeGrabberSettingsChangedEvent:(id)arg0 ;
-(id)handleInitialSetupEvent:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handleMedusaSettingsChangedEvent:(id)arg0 ;
-(id)handleReduceMotionChangedEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleResizeProgressEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleShelfFocusedDisplayItemsChangedEvent:(id)arg0 ;
-(id)handleSlideOverEdgeProtectTongueEvent:(id)arg0 ;
-(id)handleSwipeToKillEvent:(id)arg0 ;
-(id)handleSwitcherDropEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTapSlideOverTongueEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)handleUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)init;
-(id)loggingCategory;
-(id)stackDescription;
-(id)stackDescriptionWithPrefix:(id)arg0 ;
-(struct CGRect )scaledFrameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )scaledFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)performWithTemporarilyInsertedAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 block:(id)arg2 ;


@end


#endif