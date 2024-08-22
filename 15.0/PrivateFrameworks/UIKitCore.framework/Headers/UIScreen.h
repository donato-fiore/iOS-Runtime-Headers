// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCREEN_H
#define UISCREEN_H

@class UISDisplayContext, NSDictionary, NSArray, FBSDisplayConfiguration, BKSHIDEventDisplay, UIWindow<UIFocusEnvironment>, CARSessionStatus, NSString;
@protocol _UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment, _UIDisplayInfoProviding, UIFocusItem, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "_UIScreenFixedCoordinateSpace.h"
#import "UIWindow.h"
#import "UISoftwareDimmingWindow.h"
#import "_UIScreenBoundingPathUtilities.h"
#import "UIScreenMode.h"
#import "UITraitCollection.h"
#import "_UIDragManager.h"
#import "UIFocusSystem.h"
#import "UIView.h"
#import "_UIInteractiveHighlightEnvironment.h"
#import "UIScreen.h"

@interface UIScreen : NSObject <_UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment>

 {
    CGRect _unjailedReferenceBounds;
    NSInteger _interfaceOrientation;
    NSInteger _gamut;
    NSInteger _userInterfaceIdiom;
    UISDisplayContext *_initialDisplayContext;
    NSDictionary *_capabilities;
    NSArray *_availableDisplayModes;
    CGFloat _pointsPerInch;
    CGFloat _nativePointsPerMillimeter;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    id<_UIDisplayInfoProviding> *_displayInfoProvider;
    FBSDisplayConfiguration *__displayConfiguration;
    BKSHIDEventDisplay *__eventDisplay;
    NSInteger _lastUpdatedCanvasUserInterfaceStyle;
    ? _screenFlags;
    ? _carPlayHumanPresenceStatus;
}


@property (nonatomic, setter=_setUIIBAlwaysProvidePeripheryInsets:) BOOL _UIIBAlwaysProvidePeripheryInsets; // ivar: __UIIBAlwaysProvidePeripheryInsets
@property (nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // ivar: __focusedWindow
@property (nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // ivar: _lastNotifiedBacklightLevel
@property (nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) BOOL _performingSystemSnapshot; // ivar: _performingSystemSnapshot
@property (readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property (readonly, nonatomic) CGRect _referenceBounds; // ivar: _referenceBounds
@property (retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // ivar: _softwareDimmingWindow
@property (readonly, nonatomic) CGRect applicationFrame;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (retain, nonatomic, getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:) _UIScreenBoundingPathUtilities *boundingPathUtilities; // ivar: _boundingPathUtilities
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGFloat brightness;
@property (readonly, nonatomic) CGFloat calibratedLatency;
@property (nonatomic, getter=isCaptured, setter=_setCaptured:) BOOL captured; // ivar: _captured
@property (retain, nonatomic, getter=_carSessionStatus) CARSessionStatus *carSessionStatus; // ivar: _carSessionStatus
@property (readonly) NSObject<UICoordinateSpace> *coordinateSpace;
@property (retain, nonatomic) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // ivar: _defaultTraitCollection
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic, getter=_dragManager) _UIDragManager *dragManager; // ivar: _dragManager
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly) NSObject<UICoordinateSpace> *fixedCoordinateSpace;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *focusedItem;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_interactiveHighlightEnvironment) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment; // ivar: _interactiveHighlightEnvironment
@property (retain, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // ivar: _lastNotifiedTraitCollection
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (nonatomic, getter=_isMainScreen, setter=_setMainScreen:) BOOL mainScreen; // ivar: _mainScreen
@property (readonly) NSInteger maximumFramesPerSecond;
@property (readonly, nonatomic) UIScreen *mirroredScreen;
@property (readonly, nonatomic) CGRect nativeBounds;
@property (readonly, nonatomic) CGFloat nativeScale;
@property (retain, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // ivar: _overrideTraitCollection
@property (nonatomic) NSInteger overscanCompensation;
@property (readonly, nonatomic) UIEdgeInsets overscanCompensationInsets;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) UIScreenMode *preferredMode;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFocus;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL wantsSoftwareDimming; // ivar: _wantsSoftwareDimming


+(BOOL)_isProbablyBeingRecorded;
+(BOOL)_shouldDisableJail;
+(id)__displayConfigurationsIncludingMain:(BOOL)arg0 ;
+(id)_carScreen;
+(id)_mainScreenThreadSafeTraitCollection;
+(id)_screenForScene:(id)arg0 ;
+(id)_screenWithDisplayName:(id)arg0 ;
+(id)_screenWithEventDisplay:(id)arg0 ;
+(id)_screenWithFBSDisplayIdentity:(id)arg0 ;
+(id)_screenWithIntegerDisplayID:(unsigned int)arg0 ;
+(id)mainScreen;
+(id)screens;
+(struct CGAffineTransform )transformForScreenOriginRotation:(CGFloat)arg0 ;
+(struct CGAffineTransform )transformToRotateScreen:(CGFloat)arg0 ;
+(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
+(struct CGPoint )convertPoint:(struct CGPoint )arg0 toView:(id)arg1 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 fromView:(id)arg1 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 toView:(id)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg0 andNotify:(BOOL)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg0 andNotify:(BOOL)arg1 forceMain:(BOOL)arg2 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg0 forInitialDisplayContext:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg0 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg0 withScene:(id)arg1 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg0 withScene:(id)arg1 andPost:(BOOL)arg2 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg0 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg0 forSceneDestruction:(id)arg1 ;
+(void)_FBSDisplayIdentityDisconnected:(id)arg0 ;
+(void)_enumerateScreensWithBlock:(id)arg0 ;
+(void)_prepareScreensForAppResume;
+(void)initialize;
-(BOOL)_areListsLimited;
-(BOOL)_areMusicListsLimited;
-(BOOL)_expectsSecureRendering;
-(BOOL)_hasStatusBar;
-(BOOL)_hasWindows;
-(BOOL)_isCarInstrumentsScreen;
-(BOOL)_isCarPlayHumanPresenceInRange;
-(BOOL)_isCarPlayNightModeEnabled;
-(BOOL)_isCarScreen;
-(BOOL)_isExternal;
-(BOOL)_isFocusSystemLoaded;
-(BOOL)_isForceTouchCapable;
-(BOOL)_isOverscanned;
-(BOOL)_isRightHandDrive;
-(BOOL)_isRotatable;
-(BOOL)_isSoftKeyboardLimited;
-(BOOL)_isUserInterfaceLimited:(NSUInteger)arg0 ;
-(BOOL)_isValidInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_isWorkspaceCapable;
-(BOOL)_supportsBrightness;
-(BOOL)_supportsCarPlayHumanPresence;
-(BOOL)_supportsDeferredFocus;
-(BOOL)_supportsDragging;
-(BOOL)_wantsWideContentMargins;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_displayCornerRadius;
-(CGFloat)_extendedDynamicRangeCurrentHeadroom;
-(CGFloat)_extendedDynamicRangePotentialHeadroom;
-(CGFloat)_extendedDynamicRangeReferenceHeadroom;
-(CGFloat)_latency;
-(CGFloat)_maximumSupportedScale;
-(CGFloat)_nativePointsPerMillimeter;
-(CGFloat)_nativeScaleWithLevel:(NSUInteger)arg0 ;
-(CGFloat)_pointsPerInch;
-(CGFloat)_refreshRate;
-(CGFloat)_rotation;
-(CGFloat)_touchRadiusScaleFactor;
-(NSInteger)_effectiveUserInterfaceStyle;
-(NSInteger)_forceTouchCapability;
-(NSInteger)_imageOrientation;
-(NSInteger)_interfaceOrientation;
-(NSInteger)_userInterfaceIdiom;
-(NSInteger)_workspaceCapableScreenType;
-(NSInteger)gamut;
-(NSUInteger)_artworkSubtype;
-(float)rawBrightnessForBacklightLevel:(float)arg0 ;
-(id)_capabilities;
-(id)_capabilityForKey:(id)arg0 ;
-(id)_defaultTraitCollectionForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_defaultTraitCollectionForInterfaceOrientation:(NSInteger)arg0 inBounds:(struct CGRect )arg1 ;
-(id)_display;
-(id)_displayID;
-(id)_displayInfoProvider;
-(id)_eventDisplay;
-(id)_exclusionArea;
-(id)_fallbackTraitCollection;
-(id)_focusMovementPerformer;
-(id)_focusScrollManager;
-(id)_launchImageTraitCollectionForInterfaceOrientation:(NSInteger)arg0 inBounds:(struct CGRect )arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(id)_name;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)_snapshotExcludingWindows:(id)arg0 withRect:(struct CGRect )arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)displayIdentity;
-(id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)fbsDisplay;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 forceMainScreen:(BOOL)arg1 ;
-(id)snapshot;
-(id)snapshotView;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg0 ;
-(int)bitsPerComponent;
-(int)screenType;
-(struct CGPoint )_mainSceneOrigin;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )_applicationFrameForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )_applicationFrameForInterfaceOrientation:(NSInteger)arg0 usingStatusbarHeight:(CGFloat)arg1 ;
-(struct CGRect )_applicationFrameForInterfaceOrientation:(NSInteger)arg0 usingStatusbarHeight:(CGFloat)arg1 ignoreStatusBar:(BOOL)arg2 ;
-(struct CGRect )_applicationFrameWithoutOverscanForInterfaceOrientation:(NSInteger)arg0 usingStatusbarHeight:(CGFloat)arg1 ignoreStatusBar:(BOOL)arg2 ;
-(struct CGRect )_boundsForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )_interfaceOrientedMainSceneBounds;
-(struct CGRect )_mainSceneBoundsForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )_mainSceneFrame;
-(struct CGRect )_mainSceneReferenceBounds;
-(struct CGRect )_nativeDisplayBounds;
-(struct CGRect )_overrideReferenceBounds;
-(struct CGRect )_unjailedReferenceBounds;
-(struct CGRect )_unjailedReferenceBoundsForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )_unjailedReferenceBoundsInPixels;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )_displayPeripheryInsets;
-(struct UIEdgeInsets )_peripheryInsets;
-(unsigned int)_integerDisplayID;
-(unsigned int)_seed;
-(void)_accessibilityBoldTextChanged:(id)arg0 ;
-(void)_accessibilityForceTouchEnabledChanged:(id)arg0 ;
-(void)_accessibilityTraitFlagsChanged:(id)arg0 ;
-(void)_beginObservingBacklightLevelNotifications;
-(void)_capturedStateUpdated:(BOOL)arg0 ;
-(void)_clearCarPlayHumanPresenceState;
-(void)_computeMetrics;
-(void)_computeMetrics:(BOOL)arg0 ;
-(void)_connectScreen;
-(void)_disconnectScreen;
-(void)_endObservingBacklightLevelNotifications;
-(void)_ensureComputedMainScreenDPI;
-(void)_externalDeviceNightModeDidChange:(id)arg0 ;
-(void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
-(void)_handleEffectiveUserInterfaceStyleChanged:(id)arg0 ;
-(void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg0 ;
-(void)_invalidate;
-(void)_limitedUIDidChange:(id)arg0 ;
-(void)_notifyTraitsChangedAndPropagateToAllWindows;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(void)_prepareForWindow;
-(void)_resetUserInterfaceIdiom;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_setCapability:(id)arg0 forKey:(id)arg1 ;
-(void)_setCarPlayHumanPresenceInRange:(BOOL)arg0 ;
-(void)_setExternalDeviceShouldInputText:(BOOL)arg0 ;
-(void)_setInitialDisplayContext:(id)arg0 ;
-(void)_setInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setNeedsNonDeferredFocusUpdate;
-(void)_setUserInterfaceIdiom:(NSInteger)arg0 ;
-(void)_setUserInterfaceStyleIfNecessary:(NSInteger)arg0 firstTimeOnly:(BOOL)arg1 ;
-(void)_updateAvailableDisplayModes;
-(void)_updateCapabilities;
-(void)_updateDisplayConfiguration:(id)arg0 ;
-(void)_updateTraits;
-(void)_updateUserInterfaceIdiom;
-(void)_willTransitionToTraitCollection:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBitsPerComponent:(int)arg0 ;
-(void)setFocusEnabled:(BOOL)arg0 ;
-(void)setNeedsFocusUpdate;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFocusIfNeeded;


@end


#endif