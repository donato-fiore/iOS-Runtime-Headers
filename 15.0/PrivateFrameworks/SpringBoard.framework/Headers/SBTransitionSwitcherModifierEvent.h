// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSITIONSWITCHERMODIFIEREVENT_H
#define SBTRANSITIONSWITCHERMODIFIEREVENT_H

@class NSMutableDictionary, NSArray, NSString, NSSet, NSUUID;


#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"
#import "SBBannerUnfurlSourceContext.h"
#import "SBSwitcherShelf.h"

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent {
    NSMutableDictionary *_appLayoutToRemovalContext;
}


@property (retain, nonatomic) SBAppLayout *activatingAppLayout; // ivar: _activatingAppLayout
@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy, nonatomic) NSArray *appLayoutsWithRemovalContexts;
@property (copy, nonatomic) SBBannerUnfurlSourceContext *bannerUnfurlSourceContext; // ivar: _bannerUnfurlSourceContext
@property (nonatomic, getter=isBannerUnfurlTransition) BOOL bannerUnfurlTransition; // ivar: _bannerUnfurlTransition
@property (nonatomic, getter=isBreadcrumbTransition) BOOL breadcrumbTransition; // ivar: _breadcrumbTransition
@property (nonatomic, getter=isContinuityTransition) BOOL continuityTransition; // ivar: _continuityTransition
@property (nonatomic) NSInteger dosidoTransitionDirection; // ivar: _dosidoTransitionDirection
@property (nonatomic, getter=isDragAndDropTransition) BOOL dragAndDropTransition; // ivar: _dragAndDropTransition
@property (copy, nonatomic) NSString *fromAppExposeBundleID; // ivar: _fromAppExposeBundleID
@property (retain, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (nonatomic) BOOL fromAppLayoutWantsExclusiveForeground; // ivar: _fromAppLayoutWantsExclusiveForeground
@property (copy, nonatomic) NSSet *fromDisplayItemsPendingTermination; // ivar: _fromDisplayItemsPendingTermination
@property (nonatomic) NSInteger fromEnvironmentMode; // ivar: _fromEnvironmentMode
@property (retain, nonatomic) SBAppLayout *fromFloatingAppLayout; // ivar: _fromFloatingAppLayout
@property (nonatomic) NSInteger fromFloatingConfiguration; // ivar: _fromFloatingConfiguration
@property (nonatomic) BOOL fromFloatingSwitcherVisible; // ivar: _fromFloatingSwitcherVisible
@property (nonatomic) NSInteger fromInterfaceOrientation; // ivar: _fromInterfaceOrientation
@property (nonatomic) NSInteger fromPeekConfiguration; // ivar: _fromPeekConfiguration
@property (readonly, nonatomic) SBSwitcherShelf *fromShelf;
@property (nonatomic) NSInteger fromSpaceConfiguration; // ivar: _fromSpaceConfiguration
@property (nonatomic) NSInteger fromWindowPickerRole; // ivar: _fromWindowPickerRole
@property (nonatomic, getter=isGestureInitiated) BOOL gestureInitiated; // ivar: _gestureInitiated
@property (nonatomic, getter=isIconZoomDisabled) BOOL iconZoomDisabled; // ivar: _iconZoomDisabled
@property (nonatomic, getter=isMorphFromInAppView) BOOL morphFromInAppView; // ivar: _morphFromInAppView
@property (nonatomic, getter=isMorphFromPIPTransition) BOOL morphFromPIPTransition; // ivar: _morphFromPIPTransition
@property (nonatomic, getter=isMorphToPIPTransition) BOOL morphToPIPTransition; // ivar: _morphToPIPTransition
@property (nonatomic, getter=isNewSceneTransition) BOOL newSceneTransition; // ivar: _newSceneTransition
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (nonatomic) BOOL prefersCrossfadeTransition; // ivar: _prefersCrossfadeTransition
@property (nonatomic, getter=isQuickActionTransition) BOOL quickActionTransition; // ivar: _quickActionTransition
@property (nonatomic, getter=isShelfRequestTransition) BOOL shelfRequestTransition; // ivar: _shelfRequestTransition
@property (nonatomic, getter=isShelfTransition) BOOL shelfTransition; // ivar: _shelfTransition
@property (nonatomic, getter=isSpotlightTransition) BOOL spotlightTransition; // ivar: _spotlightTransition
@property (copy, nonatomic) NSString *toAppExposeBundleID; // ivar: _toAppExposeBundleID
@property (retain, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout
@property (nonatomic) BOOL toAppLayoutWantsExclusiveForeground; // ivar: _toAppLayoutWantsExclusiveForeground
@property (nonatomic) NSInteger toEnvironmentMode; // ivar: _toEnvironmentMode
@property (retain, nonatomic) SBAppLayout *toFloatingAppLayout; // ivar: _toFloatingAppLayout
@property (nonatomic) NSInteger toFloatingConfiguration; // ivar: _toFloatingConfiguration
@property (nonatomic) BOOL toFloatingSwitcherVisible; // ivar: _toFloatingSwitcherVisible
@property (nonatomic) NSInteger toInterfaceOrientation; // ivar: _toInterfaceOrientation
@property (nonatomic) NSInteger toPeekConfiguration; // ivar: _toPeekConfiguration
@property (readonly, nonatomic) SBSwitcherShelf *toShelf;
@property (nonatomic) NSInteger toSpaceConfiguration; // ivar: _toSpaceConfiguration
@property (nonatomic) NSInteger toWindowPickerRole; // ivar: _toWindowPickerRole
@property (readonly, nonatomic) NSUUID *transitionID; // ivar: _transitionID


-(BOOL)_isEnteringPageCenterWindowEvent;
-(BOOL)isAnyPulseEvent;
-(BOOL)isAnySplitViewToOrFromSlideOverEvent;
-(BOOL)isCenterWindowRemovalEvent;
-(BOOL)isCenterWindowToExistingSplitViewEvent;
-(BOOL)isCenterWindowToFullScreenEvent;
-(BOOL)isCenterWindowToNewSplitViewEvent;
-(BOOL)isCenterWindowToSlideOverEvent;
-(BOOL)isCenterWindowZoomingUpFromShelfEvent;
-(BOOL)isEnteringAnyPeekEvent;
-(BOOL)isEnteringSlideOverPeekEvent;
-(BOOL)isEnteringSplitViewPeekEvent;
-(BOOL)isExitingAnyPeekEvent;
-(BOOL)isExitingCenterWindowEvent;
-(BOOL)isExitingCenterWindowToOtherRoleEvent;
-(BOOL)isExitingSlideOverPeekEvent;
-(BOOL)isExitingSlideOverPeekToAppEvent;
-(BOOL)isExitingSlideOverPeekToHomeScreenEvent;
-(BOOL)isExitingSplitViewPeekEvent;
-(BOOL)isExitingSplitViewPeekToAppEvent;
-(BOOL)isExitingSplitViewPeekToHomeScreenEvent;
-(BOOL)isFloatingPulseEvent;
-(BOOL)isFullScreenToCenterWindowEvent;
-(BOOL)isFullScreenToSplitViewEvent;
-(BOOL)isMainPulseEvent;
-(BOOL)isPresentingPageCenterWindowEvent;
-(BOOL)isPrimaryToSlideOverEvent;
-(BOOL)isReplaceCenterWindowWithNewCenterWindowEvent;
-(BOOL)isSideToSlideOverEvent;
-(BOOL)isSlideOverToCenterWindowEvent;
-(BOOL)isSlideOverToFullScreenEvent;
-(BOOL)isSlideOverToPrimaryEvent;
-(BOOL)isSlideOverToSideEvent;
-(BOOL)isSplitViewCrossfadeEvent;
-(BOOL)isSplitViewToCenterWindowEvent;
-(BOOL)isSwappingFullScreenAppSidesEvent;
-(BOOL)isTransitionEvent;
-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugPredicateSummary;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 phase:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)removalContextForAppLayout:(id)arg0 ;
-(void)setRemovalContext:(id)arg0 forAppLayout:(id)arg1 ;


@end


#endif