// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCOVERSHEETVIEWCONTROLLER_H
#define CSCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, SBFSteppedAnimationTimingFunctionCalculator, NSMutableArray, NSHashTable, FBDisplayLayoutTransition, BSTimer, BCBatteryDeviceController, NSArray, UITapGestureRecognizer, SBLockScreenDefaults, SBFLockScreenDateSubtitleView, SBUIPhoneUnlockWithWatchController, NSString, NSSet, SBFLockScreenActionContext, SBFLockScreenDateViewController, UIStatusBar, _UILegibilitySettings, NSMutableSet, SBSearchGesture, SBSpotlightTransientOverlayInteractiveGestureTransaction, UIView, SBWallpaperAggdLogger, UIGestureRecognizer;
@protocol CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, BCBatteryDeviceObserving, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperPlayerDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSPasscodeViewControllerDelegate, SBFOverlayObserving, SBFOverlayDismissalDelegate, FBSDisplayLayoutPublisherObserving, CSRemoteContentSessionHostDelegate, CSEmbeddedContentActionManagerDelegate, CSMainPageContentViewControllerNotificationObserver, CSPresentationViewControllerDelegate, CAAnimationDelegate, CSProudLockViewControllerDelegate, SBUIPhoneUnlockWithWatchControllerDelegate, CSScrollablePageViewControllerDelegate, SBCoverSheetSpotlightPresenterDelegate, SBSearchGestureObserver, SBSearchGestureDelegate, CSActivityPickerViewControllerParentContainer, SBUIPhoneUnlockWithWatchControllerObserver, CSMagSafeAccessoryStatusDelegate, CSCoverSheetViewControllerProtocol, BSDescriptionProviding, SBFDashBoardModalPresenterProtocol, CSCoverSheetContextProviding, CSApplicationLaunching, CSCameraPrewarming, CSCoverSheetSpotlightPresenting, CSCoverSheetViewControllerDelegate, CSNotificationDispatcher, CSEmergencyCalling, CSIdleTimerControlling, SBFIrisWallpaperPlaying, CSLegibilityProviding, SBFLockOutStatusProvider, SBFScreenWakeAnimationTarget, SBNotificationDestination, CSOrientationUpdateControlling, SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling, UICoordinateSpace, CSCoverSheetViewPresenting, SBFScreenWakeAnimationControlling, BSInvalidatable, CSSpotlightPresenting, CSWallpaperColorProvider, SBSWidgetMetricsProviding;


#import "CSLockScreenSettings.h"
#import "CSNotificationDispatcher.h"
#import "CSHomeButtonShowPasscodeRecognizer.h"
#import "CSHomeButtonSuppressAfterUnlockRecognizer.h"
#import "CSMagSafeAccessoryViewController.h"
#import "CSChargingViewController.h"
#import "CSFixedFooterViewController.h"
#import "CSProudLockViewController.h"
#import "CSPoseidonViewController.h"
#import "CSTeachableMomentsContainerViewController.h"
#import "CSQuickActionsViewController.h"
#import "CSScrollGestureController.h"
#import "CSNotificationClearingTrigger.h"
#import "CSRemoteContentSessionManager.h"
#import "CSRemoteContentModalViewController.h"
#import "CSEmbeddedContentActionManager.h"
#import "CSUserPresenceMonitor.h"
#import "CSFaceOcclusionMonitor.h"
#import "CSDismissableModalViewController.h"
#import "CSFocusActivityViewController.h"
#import "CSMagSafeAccessoryStatusObserver.h"
#import "CSAppearance.h"
#import "CSBehavior.h"
#import "CSPresentation.h"
#import "CSCoverSheetView.h"
#import "CSInterstitialTransitionSource.h"
#import "CSLayoutStrategy.h"
#import "CSMainPageContentViewController.h"
#import "CSPresentationViewController.h"
#import "CSModalPresentationViewController.h"
#import "CSPowerChangeObserver.h"
#import "CSTimerViewController.h"

@interface CSCoverSheetViewController : UIViewController <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, BCBatteryDeviceObserving, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperPlayerDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSPasscodeViewControllerDelegate, SBFOverlayObserving, SBFOverlayDismissalDelegate, FBSDisplayLayoutPublisherObserving, CSRemoteContentSessionHostDelegate, CSEmbeddedContentActionManagerDelegate, CSMainPageContentViewControllerNotificationObserver, CSPresentationViewControllerDelegate, CAAnimationDelegate, CSProudLockViewControllerDelegate, SBUIPhoneUnlockWithWatchControllerDelegate, CSScrollablePageViewControllerDelegate, SBCoverSheetSpotlightPresenterDelegate, SBSearchGestureObserver, SBSearchGestureDelegate, CSActivityPickerViewControllerParentContainer, SBUIPhoneUnlockWithWatchControllerObserver, CSMagSafeAccessoryStatusDelegate, CSCoverSheetViewControllerProtocol, BSDescriptionProviding, SBFDashBoardModalPresenterProtocol>

 {
    id<CSCoverSheetContextProviding> *_coverSheetContext;
    CSLockScreenSettings *_prototypeSettings;
    BOOL _screenOffMode;
    BOOL _preventAppearanceUpdatesForRotation;
    SBFSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    NSMutableArray *_exemptFromInactiveAppearanceParticipants;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_externalPresentationProviders;
    NSHashTable *_externalLockProviders;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    CSNotificationDispatcher *_notificationDispatcher;
    NSInteger _transitionType;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSInteger _participantState;
    BOOL _transitionDisabledIdleTimer;
    CSHomeButtonShowPasscodeRecognizer *_homeButtonShowPasscodeRecognizer;
    CSHomeButtonSuppressAfterUnlockRecognizer *_homeButtonSuppressAfterUnlockRecognizer;
    BOOL _accessoryViewPresentationDelayed;
    CSMagSafeAccessoryViewController *_accessoryViewController;
    BSTimer *_accessoryViewControllerTimer;
    id *_accessoryViewControllerTimerHandler;
    BSTimer *_accessoryViewControllerChargingTimer;
    id *_accessoryViewControllerChargingTimerHandler;
    NSMutableArray *_attachedAccessories;
    BOOL _isAccessoryAnimationAllowed;
    BOOL _blockingPowerStatusTriggeredChargingUI;
    CSChargingViewController *_chargingViewController;
    BCBatteryDeviceController *_batteryDeviceController;
    BSTimer *_chargingViewControllerTimer;
    id *_chargingViewTimerHandler;
    NSArray *_cachedBatteryDevices;
    CSFixedFooterViewController *_fixedFooterViewController;
    CSProudLockViewController *_proudLockViewController;
    CSPoseidonViewController *_poseidonViewController;
    CSTeachableMomentsContainerViewController *_teachableMomentsContainerViewController;
    CSQuickActionsViewController *_quickActionsViewController;
    CSScrollGestureController *_scrollGestureController;
    BOOL _listeningForDisplayLayoutChanges;
    BOOL _screenOnForLiftToWake;
    BOOL _statusBarInLockdownForTeardown;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    CSNotificationClearingTrigger *_notificationClearingTrigger;
    int _lastAppearState;
    BOOL _wantsAccessibilityContentSizes;
    BOOL _needsAccessibilityContentSizesUpdate;
    CGFloat _accessibilityTimeLabelBaselineY;
    CGFloat _accessibilityTimeSubtitleBaselineY;
    CGFloat _initialInterstitialTransitionProgress;
    BOOL _interstitialTransitionStartedFromPasscodePresented;
    SBLockScreenDefaults *_lockScreenDefaults;
    CSRemoteContentSessionManager *_remoteContentSessionManager;
    CSRemoteContentModalViewController *_remoteContentModalViewController;
    BOOL _didSuppressRemoteContentOnDisappear;
    CSEmbeddedContentActionManager *_embeddedContentActionManager;
    SBFLockScreenDateSubtitleView *_chargingLabel;
    CSUserPresenceMonitor *_userPresenceMonitor;
    CSFaceOcclusionMonitor *_faceOcclusionMonitor;
    BOOL _contentAboveIsControlCenter;
    BOOL _contentAboveIsSiriOrNotFullScreenOniPad;
    SBUIPhoneUnlockWithWatchController *_phoneUnlockWithWatchController;
    CSDismissableModalViewController *_spotlightModalViewController;
    CSFocusActivityViewController *_activityViewController;
}


@property (retain, nonatomic) CSMagSafeAccessoryStatusObserver *accessoryAttachmentObserver; // ivar: _accessoryAttachmentObserver
@property (copy, nonatomic) CSAppearance *activeAppearance; // ivar: _activeAppearance
@property (copy, nonatomic) CSBehavior *activeBehavior; // ivar: _activeBehavior
@property (retain, nonatomic) CSPresentation *activePresentation; // ivar: _activePresentation
@property (copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers; // ivar: _allowedPageViewControllers
@property (nonatomic) CGFloat appearanceFraction; // ivar: _appearanceFraction
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (weak, nonatomic) NSObject<CSApplicationLaunching> *applicationLauncher; // ivar: _applicationLauncher
@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (nonatomic) CGFloat backlightLevel; // ivar: _backlightLevel
@property (retain, nonatomic) NSObject<CSCameraPrewarming> *cameraPrewarmer; // ivar: _cameraPrewarmer
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<CSCoverSheetSpotlightPresenting> *coverSheetSpotlightPresenter; // ivar: _coverSheetSpotlightPresenter
@property (readonly, nonatomic) CSCoverSheetView *coverSheetView;
@property (retain, nonatomic) NSObject<CSCoverSheetViewTransitionSource> *currentTransitionSource; // ivar: _currentTransitionSource
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext; // ivar: _customLockScreenActionContext
@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController; // ivar: _dateViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSCoverSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CSNotificationDispatcher> *dispatcher; // ivar: _dispatcher
@property (readonly, nonatomic) NSInteger effectiveInterfaceOrientation;
@property (nonatomic) NSInteger effectiveInterfaceOrientationOverride; // ivar: _effectiveInterfaceOrientationOverride
@property (weak, nonatomic) NSObject<CSEmergencyCalling> *emergencyCaller; // ivar: _emergencyCaller
@property (readonly, nonatomic) BOOL externalLockProvidersRequireUnlock;
@property (readonly, nonatomic) BOOL externalLockProvidersShowPasscode;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (retain, nonatomic) UIStatusBar *fakeStatusBar; // ivar: _fakeStatusBar
@property (readonly, nonatomic) BOOL hasContentAboveCoverSheet; // ivar: _hasContentAboveCoverSheet
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSIdleTimerControlling> *idleTimerController; // ivar: _idleTimerController
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (nonatomic) CGFloat initialOverlayPresentationProgress; // ivar: _initialOverlayPresentationProgress
@property (retain, nonatomic) CSInterstitialTransitionSource *interstitialTransitionSource; // ivar: _interstitialTransitionSource
@property (retain, nonatomic) CSBehavior *irisBehavior; // ivar: _irisBehavior
@property (nonatomic) BOOL irisPlayerIsInteracting; // ivar: _irisPlayerIsInteracting
@property (retain, nonatomic) NSObject<SBFIrisWallpaperPlaying> *irisWallpaperPlayer; // ivar: _irisWallpaperPlayer
@property (readonly, nonatomic) BOOL isAccessoryAnimationPresenting; // ivar: _isAccessoryAnimationPresenting
@property (nonatomic) NSUInteger lastSettledPageIndex; // ivar: _lastSettledPageIndex
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (retain, nonatomic) NSObject<CSLegibilityProviding> *legibilityProvider; // ivar: _legibilityProvider
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) CSAppearance *localAppearance; // ivar: _localAppearance
@property (retain, nonatomic) CSBehavior *localBehavior; // ivar: _localBehavior
@property (retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (readonly, nonatomic) NSObject<SBFScreenWakeAnimationTarget> *lockScreenWakeAnimator; // ivar: _lockScreenWakeAnimator
@property (retain, nonatomic, setter=_setMainPageContentViewController:) CSMainPageContentViewController *mainPageContentViewController; // ivar: _mainPageContentViewController
@property (readonly, nonatomic) CSPresentationViewController *mainPagePresentationViewController;
@property (retain, nonatomic) CSModalPresentationViewController *modalPresentationController; // ivar: _modalPresentationController
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSObject<SBNotificationDestination> *notificationDestination;
@property (retain, nonatomic) NSObject<CSOrientationUpdateControlling> *orientationUpdateController; // ivar: _orientationUpdateController
@property (retain, nonatomic) NSObject<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> *overlayController; // ivar: _overlayController
@property (copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers; // ivar: _pageViewControllers
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic) NSMutableSet *pendingModalViewControllers; // ivar: _pendingModalViewControllers
@property (retain, nonatomic) CSPowerChangeObserver *powerChangeObserver; // ivar: _powerChangeObserver
@property (readonly, nonatomic) NSInteger presentationAltitude;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, nonatomic) unsigned int presentationFrameRateRangeReason;
@property (readonly, nonatomic) CAFrameRateRange presentationPreferredFrameRateRange;
@property (readonly, nonatomic) NSInteger presentationPriority;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) NSInteger presentationTransition;
@property (readonly, nonatomic) NSInteger presentationType;
@property (weak, nonatomic) NSObject<CSCoverSheetViewPresenting> *presenter;
@property (copy, nonatomic) CSAppearance *previousAppearance; // ivar: _previousAppearance
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic, getter=isRestToOpenAvailable) BOOL restToOpenAvailable;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (retain, nonatomic, getter=_screenWakeAnimationController, setter=_setScreenWakeAnimationController:) NSObject<SBFScreenWakeAnimationControlling> *screenWakeAnimationController; // ivar: _screenWakeAnimationController
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (retain, nonatomic) SBSearchGesture *searchGesture; // ivar: _searchGesture
@property (readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
@property (nonatomic) BOOL shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes; // ivar: _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes
@property (nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (retain, nonatomic) SBSpotlightTransientOverlayInteractiveGestureTransaction *spotlightInteractiveGestureTransaction; // ivar: _spotlightInteractiveGestureTransaction
@property (retain, nonatomic) UIView *statusBarBackgroundView; // ivar: _statusBarBackgroundView
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion
@property (retain, nonatomic) CSTimerViewController *timerViewController; // ivar: _timerViewController
@property (weak, nonatomic) NSObject<CSSpotlightPresenting> *todayViewSpotlightPresenter; // ivar: _todayViewSpotlightPresenter
@property (readonly, nonatomic) ? transitionContext; // ivar: _transitionContext
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) int wakeSource; // ivar: _wakeSource
@property (retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // ivar: _wallpaperAggdLogger
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer; // ivar: _wallpaperGestureRecognizer
@property (readonly, nonatomic) NSObject<SBSWidgetMetricsProviding> *widgetMetricsProvider;


-(BOOL)_batteryCollection:(id)arg0 containsDeviceWithIdentifier:(id)arg1 ;
-(BOOL)_canPresentSwipeDismissableModal;
-(BOOL)_canShowEmbeddedRemoteContent;
-(BOOL)_canShowWhileLocked;
-(BOOL)_containsCachedBatteryDeviceWithIdenfifier:(id)arg0 ;
-(BOOL)_dismissRemoteViewControllerForReason:(NSInteger)arg0 ;
-(BOOL)_dismissRemoteViewControllerForReason:(NSInteger)arg0 completion:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 isLocatedOverHorizontalContentRegionInViewController:(id)arg1 ;
-(BOOL)_handleEvent:(id)arg0 ;
-(BOOL)_handleEventType:(NSInteger)arg0 ;
-(BOOL)_isAccessoryAnimationAllowedForAccessory:(id)arg0 ;
-(BOOL)_isKnownTransitionConflictFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)_isMainPageShowing;
-(BOOL)_isPageContentHidden;
-(BOOL)_isPresentingModalViewControllerWithIdentifier:(id)arg0 ;
-(BOOL)_isRemoteContentPresentedInUnlockMode;
-(BOOL)_isShowingChargingModal;
-(BOOL)_isShowingNonStaticAccessoryBlockingUI;
-(BOOL)_isSlideableContentOffsetOnscreen:(struct CGPoint )arg0 ;
-(BOOL)_isSlideableContentOnscreen;
-(BOOL)_isSourceForHorizontalScrolling:(id)arg0 ;
-(BOOL)_isTodayViewOverlayShowing;
-(BOOL)_isWakeAnimationInProgress;
-(BOOL)_overSlidingControlForLocation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(BOOL)_quickActionsSupported;
-(BOOL)_removeRemoteViewControllerForInvalidatedSession:(id)arg0 completion:(id)arg1 ;
-(BOOL)_shouldReduceWhitePoint;
-(BOOL)_shouldReduceWhitePointForAppearance:(id)arg0 ;
-(BOOL)_shouldSetUpWallpaperGesture;
-(BOOL)_shouldUpdateActiveAppearanceForReason:(id)arg0 ;
-(BOOL)_showingAccessoryView;
-(BOOL)_transitionPrototypeChargingViewToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)_wallpaperGestureShouldRequireUserPresence;
-(BOOL)_wouldUpdateActiveAppearance;
-(BOOL)attachedAccessoriesContainsAccessoryType:(NSInteger)arg0 ;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg0 ;
-(BOOL)canHostAnApp;
-(BOOL)containsCenteredDateTimeLayout;
-(BOOL)controller:(id)arg0 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg1 ;
-(BOOL)didDetectBottomFaceOcclusionsSinceScreenOn;
-(BOOL)didDetectFaceOcclusionsSinceScreenOn;
-(BOOL)didDetectFaceRequirementsForPAU;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)interceptDismissalGestureForOverlayController:(id)arg0 ;
-(BOOL)isHostingAnApp;
-(BOOL)isInScreenOffMode;
-(BOOL)isLockScreenShowingDefaultContent;
-(BOOL)isLockScreenShowingDefaultContentExceptControlCenter;
-(BOOL)isMainPageVisible;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)isPasscodeLockVisible;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)isShowingModalView;
-(BOOL)isShowingTodayView;
-(BOOL)isUnlockDisabled;
-(BOOL)passcodeViewControllerShouldHideStatusBar:(id)arg0 ;
-(BOOL)phoneUnlockWithWatchControllerShowRawErrorCodes:(id)arg0 ;
-(BOOL)phoneUnlockWithWatchEnabled;
-(BOOL)proudLockViewControllerIsCoverSheetVisible;
-(BOOL)remoteContentSession:(id)arg0 dismissWithReason:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)remoteContentSession:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)searchGestureShouldRecognize:(id)arg0 ;
-(BOOL)shouldActivateRemoteContentSession:(id)arg0 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldCompletePhoneAutoUnlockWithNotification;
-(BOOL)shouldDisableALS;
-(BOOL)shouldModifyDateViewScrolling;
-(BOOL)shouldModifyPageScrolling;
-(BOOL)shouldPresentOrDismissCoverSheetSpotlight;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(BOOL)spotlightPresenterAllowsPullToSearch:(id)arg0 ;
-(BOOL)suppressesBanners;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesScreenshots;
-(BOOL)willUIUnlockFromSource:(int)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(CGFloat)_alphaForTransitionFromHidden:(BOOL)arg0 toHidden:(BOOL)arg1 timingFunction:(id)arg2 ;
-(CGFloat)_alphaForTransitionFromHidden:(BOOL)arg0 toHidden:(BOOL)arg1 unhiddenAlpha:(CGFloat)arg2 timingFunction:(id)arg3 ;
-(CGFloat)_dateTimeAlphaForFade;
-(CGFloat)_dateTimeInsetXForPage:(id)arg0 ;
-(CGFloat)_dateViewAlphaForCurrentWakeState;
-(CGFloat)_listInsetXForPage:(id)arg0 ;
-(CGFloat)_minDateListSpacingForPage:(id)arg0 ;
-(CGFloat)_scaleForTransitionFromScale:(CGFloat)arg0 toScale:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(CGFloat)_timeLabelScrollPercentForDateTimeLayout:(NSUInteger)arg0 ;
-(CGFloat)_valueForTransitionInterval:(struct ? )arg0 timingFunction:(id)arg1 ;
-(CGFloat)bottomContentInset;
-(CGFloat)dateBaselineToListY;
-(CGFloat)dateTimeMostExtremeLeadingX;
-(CGFloat)dateTimeMostExtremeTrailingX;
-(CGFloat)dateTimeSubtitleMaximumWidth;
-(CGFloat)focusActivityHeight;
-(CGFloat)listMinY;
-(CGFloat)timeLabelBaselineY;
-(CGFloat)timeLabelOffsetForScrollPercent:(CGFloat)arg0 ;
-(CGFloat)timeToSubtitleLabelBaselineDifferenceY;
-(CGFloat)windowedAccessoryInset;
-(NSInteger)_passcodePresentationMode;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)statusBarStyle;
-(NSUInteger)_accessoryAnimationRestrictions;
-(NSUInteger)_dateTimeLayoutForPage:(id)arg0 ;
-(NSUInteger)_indexOfCameraPage;
-(NSUInteger)_indexOfMainPage;
-(NSUInteger)_indexOfPageViewControllerForRole:(id)arg0 ;
-(NSUInteger)_indexOfTodayPage;
-(NSUInteger)_pageCapabilities;
-(NSUInteger)supportedInterfaceOrientations;
-(id)__currentDesiredAppearanceWithStartIndex:(*NSUInteger)arg0 targetIndex:(*NSUInteger)arg1 targetAppearance:(*id)arg2 targetPresentation:(*id)arg3 modalAppearance:(*id)arg4 proudLockAppearance:(*id)arg5 poseidonAppearance:(*id)arg6 ;
-(id)_activeViewControllers;
-(id)_appearanceForParticipant:(id)arg0 ;
-(id)_averageLockScreenWallpaperColor;
-(id)_batteryCenterInternalBattery;
-(id)_behaviorForParticipant:(id)arg0 ;
-(id)_chargingInfo;
-(id)_connectedExternalChargers;
-(id)_createFakeStatusBar;
-(id)_eligiblePageViewControllers;
-(id)_filterValuesForWhitePointReduced:(BOOL)arg0 lighterReduction:(BOOL)arg1 ;
-(id)_fullscreeNotificationViewControllerMatchingNotificationRequest:(id)arg0 ;
-(id)_pageForScrollPercent:(CGFloat)arg0 ;
-(id)_passcodeViewController;
-(id)_presentationForParticipant:(id)arg0 ;
-(id)_presentedModalViewControllerWithIdentifier:(id)arg0 ;
-(id)_whitePointReductionFilterFromValues:(id)arg0 ;
-(id)_whitePointValues;
-(id)_whitePointValuesForAppearance:(id)arg0 ;
-(id)_windowsFromViewControllers:(id)arg0 ;
-(id)activityPickerViewControllerTransitionContainerView:(id)arg0 ;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg0 ;
-(id)dateView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithPageViewControllers:(id)arg0 mainPageContentViewController:(id)arg1 context:(id)arg2 ;
-(id)lockScreenActionContext;
-(id)pageViewControllerAtIndex:(NSUInteger)arg0 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)superviewForDateViewAnimation;
-(id)visiblePageViewController;
-(struct CGPoint )_finalizeOffset:(struct CGPoint )arg0 referenceFrame:(struct CGRect )arg1 ;
-(struct CGPoint )_offsetForTransitionFromOffset:(struct CGPoint )arg0 toOffset:(struct CGPoint )arg1 timingFunction:(id)arg2 ;
-(struct CGPoint )_slideableContentOffset;
-(void)_activateCameraAnimated:(BOOL)arg0 actions:(id)arg1 completion:(id)arg2 ;
-(void)_actuallyUpdateUIForIrisNotPlaying;
-(void)_actuallyUpdateUIForIrisPlaying;
-(void)_actuallyUpdateUIForIrisPlaying:(BOOL)arg0 ;
-(void)_addBedtimeGreetingBackgroundView;
-(void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_addOrRemoveRemoteContentViewIfNecessary;
-(void)_addOrRemoveRemoteContentViewIfNecessaryMaintainingState:(BOOL)arg0 ;
-(void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_addRemoteViewControllerForAction:(id)arg0 ;
-(void)_addStateCaptureHandlers;
-(void)_addVisiblePageViewController:(id)arg0 ;
-(void)_addWhitePointAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 toValues:(id)arg2 withDuration:(CGFloat)arg3 dispatchGroup:(id)arg4 ;
-(void)_animateAccessory:(id)arg0 toVisibleAnimated:(BOOL)arg1 ;
-(void)_animateView:(id)arg0 toWhitePointReduced:(BOOL)arg1 withDispatchGroup:(id)arg2 ;
-(void)_beginAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_calculateAppearanceForCurrentOrientation;
-(void)_clearChargingModalStateIfNecessary;
-(void)_createStatusBarBackgroundViewIfNeeded;
-(void)_dismissAccessoryViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_dismissModalViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dismissModalViewControllersWithIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dismissToMainPageFromPageViewController:(id)arg0 ;
-(void)_displayDidDisappearImplementation;
-(void)_displayWillAppearImplementation;
-(void)_displayWillDisappearImplementation;
-(void)_displayWillTurnOnWhileOnCoverSheet:(id)arg0 ;
-(void)_endAppearanceTransitionForPageViewControllersToVisible:(BOOL)arg0 ;
-(void)_finishFadeInAnimationForPowerSource:(int)arg0 connectedToPower:(BOOL)arg1 screenOn:(BOOL)arg2 ;
-(void)_handleDismissalForAccessoryViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handleQuickNoteLaunch:(id)arg0 ;
-(void)_invalidateStatusBarAssertions;
-(void)_liftToWakeGestureDetected;
-(void)_listenForDisplayLayoutChanges:(BOOL)arg0 ;
-(void)_loadViewsForRestrictedPagesIfPossible;
-(void)_powerStatusChangedToConnectedState:(BOOL)arg0 ;
-(void)_preferredContentSizeDidChange;
-(void)_prepareForViewWillAppearIfNecessary;
-(void)_presentModalViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentModalViewController:(id)arg0 shouldDismissOverlays:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_removeAllowedPageViewController:(id)arg0 ;
-(void)_removeBedtimeGreetingBackgroundViewAnimated:(BOOL)arg0 ;
-(void)_removeReduceWhitePointAnimationForKeyPath:(id)arg0 onLayer:(id)arg1 ;
-(void)_scrollPanGestureBegan:(id)arg0 ;
-(void)_scrollPanGestureChanged:(id)arg0 ;
-(void)_scrollPanGestureEnded:(id)arg0 ;
-(void)_sendAuthenticationChangedEvent;
-(void)_setupQuickNoteGestureRecognizer;
-(void)_setupSearchGesture;
-(void)_setupWallpaperGesture;
-(void)_startFadeInAnimationForSource:(NSInteger)arg0 ;
-(void)_transitionAccessoryChargingViewToVisible:(BOOL)arg0 ;
-(void)_transitionAccessoryViewToVisible:(BOOL)arg0 accessory:(id)arg1 animated:(BOOL)arg2 ;
-(void)_transitionChargingDateSubtitleToVisible:(BOOL)arg0 animated:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_transitionChargingViewToVisible:(BOOL)arg0 showBattery:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionChargingViewToVisible:(BOOL)arg0 suppressedByPack:(BOOL)arg1 showBattery:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_transitionTimerViewToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateAccessibilityContentSizesIfNeeded;
-(void)_updateAccessoryAnimationPresenting:(BOOL)arg0 userInteractionDisabled:(BOOL)arg1 ;
-(void)_updateActiveAppearanceForReason:(id)arg0 ;
-(void)_updateActiveBehaviorsForReason:(id)arg0 ;
-(void)_updateActiveBehaviorsForReason:(id)arg0 updatingAppearanceIfNeeded:(BOOL)arg1 ;
-(void)_updateAppearance:(id)arg0 forComponentType:(NSInteger)arg1 shouldHide:(BOOL)arg2 ;
-(void)_updateBackground;
-(void)_updateControlCenterGrabber;
-(void)_updateDateSubtitleAppearanceForBattery:(BOOL)arg0 animated:(BOOL)arg1 chargingVisible:(BOOL)arg2 ;
-(void)_updateDateTimeView;
-(void)_updateFixedFooterView;
-(void)_updateForegroundView;
-(void)_updateHomeAffordance;
-(void)_updateIdleTimerBehavior;
-(void)_updateIdleTimerForTransitionProgress:(CGFloat)arg0 ;
-(void)_updateLegibilitySettings;
-(void)_updateLocalAppearanceForPresentation;
// -(void)_updateLocalAppearanceForRequester:(id)arg0 animationSettings:(id)arg1 actions:(id)arg2 completion:(unk)arg3  ;
-(void)_updateModalPresentationControllerVisibility;
-(void)_updateNotificationClearingTriggerForEvent:(id)arg0 ;
-(void)_updatePageContent;
-(void)_updatePoseidon;
-(void)_updateProudLockView;
-(void)_updateProudLockViewUpdateSuspension;
-(void)_updateQuickActions;
-(void)_updateRestrictedBehavior;
-(void)_updateScalableContent;
-(void)_updateScrollingBehavior;
-(void)_updateStatusBar;
-(void)_updateStatusBarBackground;
-(void)_updateStatusBarGradient;
-(void)_updateTintingView;
-(void)_updateUIForPlaying:(BOOL)arg0 immediately:(BOOL)arg1 ;
-(void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)arg0 ;
-(void)_updateWallpaperEffectView;
-(void)_updateWhitePoint;
-(void)accessoryAnimationStatusChanged:(BOOL)arg0 ;
-(void)accessoryAttached:(id)arg0 ;
-(void)accessoryDetached:(id)arg0 ;
-(void)actionManager:(id)arg0 addedAction:(id)arg1 ;
-(void)actionManager:(id)arg0 removedAction:(id)arg1 ;
-(void)activateCameraViewAnimated:(BOOL)arg0 sendingActions:(id)arg1 completion:(id)arg2 ;
-(void)activateMainPageWithCompletion:(id)arg0 ;
-(void)activatePage:(NSUInteger)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)activateTodayViewWithCompletion:(id)arg0 ;
-(void)addApplicationHoster:(id)arg0 ;
-(void)addCoverSheetObserver:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)attemptPhoneUnlockWithWatch;
-(void)cancelTransition;
-(void)cleanupInterstitialPresentationToPresented:(BOOL)arg0 inPlace:(BOOL)arg1 ;
-(void)completePhoneAutoUnlockWithNotification:(BOOL)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSCoverSheetViewControlling;
-(void)conformsToCSCoverSheetViewPresenting;
-(void)conformsToCSEventHandling;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)controllerWillCancelHorizontalScrolling:(id)arg0 ;
-(void)coverSheetLegibilityProviderDidUpdate:(id)arg0 ;
-(void)coverSheetNotificationClearingTriggerDidFire:(id)arg0 ;
-(void)deactivateTodayViewWithCompletion:(id)arg0 ;
-(void)didPostNotificationRequest:(id)arg0 ;
-(void)dismissHomeScreenOverlay;
-(void)dismissModalViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissOverlaysAnimated:(BOOL)arg0 ;
-(void)externalAppearanceProviderBehaviorChanged:(id)arg0 ;
-(void)externalBehaviorProviderBehaviorChanged:(id)arg0 ;
-(void)externalLockProviderStateChanged:(id)arg0 ;
-(void)externalPresentationProviderPresentationChanged:(id)arg0 ;
-(void)fillRestToOpenWithDuration:(CGFloat)arg0 ;
-(void)finishUIUnlockFromSource:(int)arg0 ;
-(void)handleAction:(id)arg0 fromSender:(id)arg1 ;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)idleTimerDidChange;
-(void)idleTimerDidExpire;
-(void)idleTimerDidRefresh;
-(void)idleTimerDidWarn;
-(void)idleTimerWillRefresh;
-(void)invalidateLockScreenActionContext;
-(void)irisWallpaperPlayer:(id)arg0 didReplaceGestureRecognizer:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(void)irisWallpaperPlayerIsInteractingDidChange:(id)arg0 ;
-(void)irisWallpaperPlayerPlaybackStateDidChange:(id)arg0 ;
-(void)jiggleLockIcon;
-(void)loadView;
-(void)noteDeviceBlockedStatusUpdated;
-(void)noteResetRestoreStateUpdated;
-(void)noteWillPresentForUserGesture;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)overlayController:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg0 ;
-(void)overlayControllerRequestsDismissal:(id)arg0 ;
-(void)passcodeViewController:(id)arg0 didCompletePasscodeEntry:(BOOL)arg1 ;
-(void)passcodeViewControllerDidBeginPasscodeEntry:(id)arg0 ;
-(void)passcodeViewControllerDidCancelPasscodeEntry:(id)arg0 ;
-(void)phoneUnlockWithWatchControllerAttemptFailed:(id)arg0 withError:(id)arg1 ;
-(void)phoneUnlockWithWatchControllerAttemptSucceeded:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)prepareForInterstitialPresentation;
-(void)prepareForUILock;
-(void)prepareForUIUnlock;
-(void)presentModalViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentModalViewController:(id)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentModalViewController:(id)arg0 withTransition:(int)arg1 ;
-(void)presentOrDismissCoverSheetSpotlightAnimated:(BOOL)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 withTransition:(int)arg1 completion:(id)arg2 ;
-(void)presentationViewController:(id)arg0 didTransitionViewController:(id)arg1 toPresented:(BOOL)arg2 ;
-(void)publisher:(id)arg0 didUpdateLayout:(id)arg1 withTransition:(id)arg2 ;
-(void)registerExternalAppearanceProvider:(id)arg0 ;
-(void)registerExternalBehaviorProvider:(id)arg0 ;
-(void)registerExternalEventHandler:(id)arg0 ;
-(void)registerExternalLockProvider:(id)arg0 ;
-(void)registerExternalPresentationProvider:(id)arg0 ;
-(void)remoteContentDidUpdateStyle;
-(void)remoteContentSession:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)removeApplicationHoster:(id)arg0 ;
-(void)removeCoverSheetObserver:(id)arg0 ;
-(void)resetMainPageContentOffset;
-(void)resetRestToOpen;
-(void)scrollPanGestureDidUpdate:(id)arg0 ;
-(void)scrollablePageViewController:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)scrollablePageViewController:(id)arg0 scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollablePageViewController:(id)arg0 scrollViewWillEndDragging:(id)arg1 ;
-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 completedShowing:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 endedGesture:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;
-(void)setCoverSheetIsVisible:(BOOL)arg0 ;
-(void)setInScreenOffMode:(BOOL)arg0 ;
-(void)setInScreenOffMode:(BOOL)arg0 forAutoUnlock:(BOOL)arg1 fromUnlockSource:(int)arg2 ;
-(void)setPasscodeLockVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setPasscodeLockVisible:(BOOL)arg0 animated:(BOOL)arg1 forceBiometricPresentation:(BOOL)arg2 completion:(id)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)spotlightPresenter:(id)arg0 dismissDismissableModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)spotlightPresenter:(id)arg0 presentDismissableModalViewController:(id)arg1 completion:(id)arg2 ;
-(void)startHostingWallpaperOverlay:(id)arg0 ;
-(void)startLockScreenFadeInAnimationForSource:(int)arg0 ;
-(void)startRestToOpenCoachingWithCompletion:(id)arg0 ;
-(void)timerControllerDidStartTimer:(id)arg0 ;
-(void)timerControllerDidStopTimer:(id)arg0 ;
-(void)transitionSource:(id)arg0 didEndWithContext:(struct ? )arg1 ;
-(void)transitionSource:(id)arg0 didUpdateTransitionWithContext:(struct ? )arg1 ;
-(void)transitionSource:(id)arg0 willBeginWithType:(NSInteger)arg1 ;
-(void)unregisterExternalAppearanceProvider:(id)arg0 ;
-(void)unregisterExternalBehaviorProvider:(id)arg0 ;
-(void)unregisterExternalEventHandler:(id)arg0 ;
-(void)unregisterExternalLockProvider:(id)arg0 ;
-(void)unregisterExternalPresentationProvider:(id)arg0 ;
-(void)updateAppearanceForController:(id)arg0 ;
-(void)updateAppearanceForController:(id)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)updateBehaviorForController:(id)arg0 ;
-(void)updateCallToActionForMesaMatchFailure;
-(void)updateInterstitialPresentationWithProgress:(CGFloat)arg0 ;
-(void)updateNotificationRequest:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)updateQuickActionsVisibility;
-(void)updateScaleViewWithScale:(CGFloat)arg0 ;
-(void)updateStatusBarForLockScreenComeback;
-(void)updateStatusBarForLockScreenTeardown;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif