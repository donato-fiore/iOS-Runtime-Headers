// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPEXPOSEGRIDSWITCHERMODIFIER_H
#define SBAPPEXPOSEGRIDSWITCHERMODIFIER_H

@class NSString;


#import "SBSwitcherModifier.h"
#import "SBMixedGridSwitcherModifier.h"

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    NSUInteger _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL disableFullScreenCardScaleRounding; // ivar: _disableFullScreenCardScaleRounding
@property (readonly, nonatomic) CGSize floatingCardSize; // ivar: _floatingCardSize
@property (readonly, nonatomic) CGSize fullScreenCardSize; // ivar: _fullScreenCardSize
@property (nonatomic) BOOL reversesFloatingCardDirection; // ivar: _reversesFloatingCardDirection


-(BOOL)_canShowReopenClosedWindowsButton;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(NSInteger)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(NSInteger)plusButtonStyle;
-(id)_updateReopenClosedWindowsButtonPresence;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 fullScreenCardSize:(struct CGSize )arg1 floatingCardSize:(struct CGSize )arg2 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif