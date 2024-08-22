// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONVIEW_H
#define SBICONVIEW_H

@class UIView, UIView<SBIconAccessoryView>, UIView<SBIconLabelView>, UIView<SBIconLabelAccessoryView>, UILabel, NSHashTable, NSCountedSet, _UIStatesFeedbackGenerator, NSMutableArray, UIColor, UIViewPropertyAnimator, UIPointerInteraction, NSString, NSURL, NSArray, UIContextMenuInteraction, UIViewController<SBIconViewCustomImageViewControlling>, UIDragInteraction, UILongPressGestureRecognizer, UIFocusEffect, UIImage, UIFont, NSDate, _UILegibilitySettings, UITapGestureRecognizer;
@protocol UIPointerInteractionDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, UIDragInteractionDelegate, SBCloseBoxViewDelegate, UIContextMenuInteractionDelegate, SBSHardwareButtonEventConsuming, SBHIconViewConfigurationInteractionDelegate, SBIconViewCustomImageViewControllerObserving, SBHFocusProxyable, SBIconObserver, SBReusableView, SBIconAccessoryInfoProvider, SBIconViewSnapshotProviding, OS_os_activity, SBIconContinuityInfo, SBHIconViewConfigurationInteraction, SBIconViewDelegate, UIFocusItemContainer, BSInvalidatable, UIDragSession, SBIconListLayout, SBIconListLayoutProvider, SBIconViewActionDelegate, UIFocusEnvironment;


#import "SBIcon.h"
#import "SBIconImageView.h"
#import "SBIconImageCrossfadeView.h"
#import "SBCloseBoxView.h"
#import "SBIconFocusEffectPlatterView.h"
#import "SBHIconEditingSettings.h"
#import "SBHRecentsDocumentExtensionProvider.h"
#import "SBFolderIcon.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"

@interface SBIconView : UIView <UIPointerInteractionDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, UIDragInteractionDelegate, SBCloseBoxViewDelegate, UIContextMenuInteractionDelegate, SBSHardwareButtonEventConsuming, SBHIconViewConfigurationInteractionDelegate, SBIconViewCustomImageViewControllerObserving, SBHFocusProxyable, SBIconObserver, SBReusableView, SBIconAccessoryInfoProvider>

 {
    SBIcon *_icon;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView *_snapshotContainerView;
    UIView *_temporarySnapshotContainerViewForDragPreview;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    UIView<SBIconLabelView> *_labelView;
    UIView<SBIconLabelAccessoryView> *_labelAccessoryView;
    UIView *_dropGlow;
    SBIconFocusEffectPlatterView *_focusEffectPlatterView;
    SBHIconEditingSettings *_iconEditingSettings;
    UILabel *_iconIndexLabel;
    id<SBIconViewSnapshotProviding> *_snapshotProvider;
    BOOL _drawsLabel;
    BOOL _isEditing;
    BOOL _discardClose;
    BOOL _pauseReasons;
    BOOL _isGrabbed;
    BOOL _isOverlapping;
    BOOL _isFocused;
    BOOL _refusesRecipientStatus;
    BOOL _highlighted;
    BOOL _launchDisabled;
    BOOL _suppressesDisabledPresentation;
    BOOL _iconWasTappedWhenDisabled;
    BOOL _isJittering;
    BOOL _allowJitter;
    BOOL _allowCloseBox;
    BOOL _touchDownInIcon;
    BOOL _hideLabel;
    BOOL _hideLabelAccessoryView;
    BOOL _iconContentScalingEnabled;
    BOOL _forcingIconContentScalingEnabled;
    BOOL _startsDragMoreQuickly;
    BOOL _isDragging;
    BOOL _isDragLifted;
    BOOL _folderIconFrozen;
    BOOL _showingCloseBox;
    BOOL _allowsAccessoryView;
    BOOL _allowsProgressState;
    BOOL _showingAccessoryView;
    BOOL _allowsLabelArea;
    BOOL _allowsPassthroughHitTesting;
    BOOL _showsDropGlow;
    BOOL _hasSetIconImageInfo;
    BOOL _showsSquareCorners;
    BOOL _disableContextMenuInteraction;
    BOOL _disallowsBlockedForScreenTimeExpiration;
    BOOL _reallyHasPopover;
    BOOL _imageLoadingBehavior;
    BOOL _disallowCursorInteraction;
    BOOL _customIconImageViewHitTestingDisabled;
    BOOL _labelStyle;
    BOOL _allIconElementsButLabelHidden;
    BOOL _displaysIconStatusInLabel;
    BOOL _userVisibilityStatus;
    BOOL _wantsFocusProxyView;
    CGFloat _iconContentScale;
    UIView *_scalingContainer;
    CGRect _visibleImageRect;
    NSHashTable *_observers;
    NSCountedSet *_forbidEditingModeReasons;
    NSCountedSet *_forbidAccessoryReasons;
    SBIconImageInfo _iconImageInfo;
    SBHRecentsDocumentExtensionProvider *_recentsDocumentExtensionProvider;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    NSMutableArray *_performAfterContextMenuBlocks;
    NSHashTable *_droppingAssertions;
    NSHashTable *_contextMenuInteractionConfigurations;
    NSHashTable *_dismissingContextMenuInteractionConfigurations;
    NSObject<OS_os_activity> *_iconContextMenuActivity;
    os_activity_scope_state_s _iconContextMenuActivityState;
    NSCountedSet *_activePointerRegions;
    NSUInteger _fetchedSupportedMedusaKeyboardShortcuts;
}


@property (retain, nonatomic) UIColor *accessibilityTintColor; // ivar: _accessibilityTintColor
@property (retain, nonatomic) UIViewPropertyAnimator *accessoryViewAnimator; // ivar: _accessoryViewAnimator
@property (readonly, nonatomic) UIPointerInteraction *accessoryViewCursorInteraction; // ivar: _accessoryViewCursorInteraction
@property (nonatomic) BOOL allIconElementsButLabelHidden;
@property (nonatomic) BOOL allowsAccessoryView;
@property (nonatomic) BOOL allowsBlockedForScreenTimeExpiration;
@property (nonatomic) BOOL allowsCloseBox;
@property (nonatomic) BOOL allowsEditingAnimation;
@property (readonly, nonatomic) BOOL allowsLabelAccessoryView;
@property (nonatomic) BOOL allowsLabelArea;
@property (nonatomic) BOOL allowsPassthroughHitTesting;
@property (nonatomic) BOOL allowsProgressState;
@property (readonly, nonatomic) BOOL allowsTapWhileEditing;
@property (readonly, nonatomic, getter=isAnimatingScrolling) BOOL animatingScrolling;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierForShortcuts;
@property (readonly, copy, nonatomic) NSURL *applicationBundleURLForShortcuts;
@property (copy, nonatomic) NSArray *applicationShortcutItems; // ivar: _applicationShortcutItems
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition; // ivar: _approximateLayoutPosition
@property (readonly, copy, nonatomic) NSString *backgroundViewGroupNameBase;
@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) BOOL canBeginDrags;
@property (readonly, nonatomic) BOOL canShowAccessoryView;
@property (readonly, nonatomic) BOOL canShowCloseBox;
@property (readonly, nonatomic) NSUInteger centerVisibleMiniIconIndex;
@property (retain, nonatomic) UIViewPropertyAnimator *closeBoxAnimator; // ivar: _closeBoxAnimator
@property (readonly, nonatomic) UIPointerInteraction *closeBoxCursorInteraction; // ivar: _closeBoxCursorInteraction
@property (nonatomic) NSUInteger configurationOptions;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, nonatomic) NSInteger continuityBadgeType;
@property (retain, nonatomic) NSObject<SBIconContinuityInfo> *continuityInfo; // ivar: _continuityInfo
@property (readonly, getter=isCrossfadingImageWithView) BOOL crossfadingImageWithView;
@property (readonly, nonatomic) NSInteger currentAccessoryType;
@property (retain, nonatomic) NSObject<SBHIconViewConfigurationInteraction> *currentConfigurationInteraction; // ivar: _currentConfigurationInteraction
@property (readonly, nonatomic) NSInteger currentLabelAccessoryType;
@property (retain, nonatomic) NSObject<SBHIconViewConfigurationInteraction> *currentStackConfigurationInteraction; // ivar: _currentStackConfigurationInteraction
@property (nonatomic) UIEdgeInsets cursorHitTestPadding; // ivar: _cursorHitTestPadding
@property (readonly, nonatomic) UIViewController<SBIconViewCustomImageViewControlling> *customIconImageViewController; // ivar: _customIconImageViewController
@property (nonatomic) NSUInteger customIconImageViewControllerPriority; // ivar: _customIconImageViewControllerPriority
@property (nonatomic, getter=isCustomIconImageViewHitTestingDisabled) BOOL customIconImageViewHitTestingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugIconIndex; // ivar: _debugIconIndex
@property (weak, nonatomic) NSObject<SBIconViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayedLabelAccessoryType; // ivar: _displayedLabelAccessoryType
@property (nonatomic) BOOL displaysIconStatusInLabel;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly, nonatomic) CGFloat dragInteractionLiftDelay;
@property (readonly, nonatomic) UIView *dropContainerView;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) CGFloat editingAnimationStrength; // ivar: _editingAnimationStrength
@property (readonly, nonatomic) UILongPressGestureRecognizer *editingModeGestureRecognizer; // ivar: _editingModeGestureRecognizer
@property (readonly, copy, nonatomic) NSArray *effectiveApplicationShortcutItems;
@property (readonly, nonatomic) CGFloat effectiveIconImageAlpha;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) Class expectedIconImageViewClass;
@property (copy, nonatomic) NSArray *fetchedApplicationShortcutItems; // ivar: _fetchedApplicationShortcutItems
@property (readonly, nonatomic) CGFloat firstLineBaseline;
@property (readonly, nonatomic) NSUInteger firstVisibleMiniIconIndex;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) UIView *focusProxyView; // ivar: _focusProxyView
@property (nonatomic) NSUInteger folderBackgroundStyle;
@property (retain, nonatomic) SBFolderIcon *folderIcon; // ivar: _folderIcon
@property (retain, nonatomic) UIView *folderIconBackgroundView; // ivar: _folderIconBackgroundView
@property (nonatomic, getter=isFolderIconFrozen) BOOL folderIconFrozen;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (readonly, nonatomic) CGRect frame;
@property (nonatomic, getter=isGrabbed) BOOL grabbed;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSObject<BSInvalidatable> *homeButtonPressConsumingAssertion; // ivar: _homeButtonPressConsumingAssertion
@property (retain, nonatomic) SBIcon *icon;
@property (nonatomic) CGFloat iconAccessoryAlpha; // ivar: _iconAccessoryAlpha
@property (nonatomic) CGFloat iconContentScale;
@property (nonatomic, getter=isIconContentScalingEnabled) BOOL iconContentScalingEnabled;
@property (nonatomic) CGFloat iconImageAlpha; // ivar: _iconImageAlpha
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) CGPoint iconImageCenter;
@property (readonly, nonatomic) CGRect iconImageFrame;
@property (nonatomic) SBIconImageInfo iconImageInfo;
@property (readonly, nonatomic) CGSize iconImageSize;
@property (nonatomic) BOOL iconImageSizeMatchesBoundsSize; // ivar: _iconImageSizeMatchesBoundsSize
@property (readonly, nonatomic) UIImage *iconImageSnapshot;
@property (readonly, nonatomic) UIView *iconImageSnapshotView;
@property (readonly, nonatomic) CGSize iconImageVisibleSize;
@property (nonatomic) CGFloat iconLabelAlpha; // ivar: _iconLabelAlpha
@property (readonly, nonatomic) UIPointerInteraction *iconViewCursorInteraction; // ivar: _iconViewCursorInteraction
@property (readonly, nonatomic) CGSize iconViewSize;
@property (nonatomic) NSUInteger imageLoadingBehavior;
@property (readonly, nonatomic) BOOL isCursorActive;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (nonatomic, getter=isLabelAccessoryHidden) BOOL labelAccessoryHidden;
@property (readonly, nonatomic) CGFloat labelAccessoryTotalWidth;
@property (retain, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (nonatomic) NSInteger labelStyle;
@property (readonly, nonatomic) UIView<SBIconLabelView> *labelView;
@property (nonatomic) BOOL lastContextMenuInteractionFailedToLoad; // ivar: _lastContextMenuInteractionFailedToLoad
@property (readonly, nonatomic) CGFloat lastLineBaseline;
@property (copy, nonatomic) NSDate *lastTouchDownDate; // ivar: _lastTouchDownDate
@property (readonly, nonatomic) NSUInteger lastVisibleMiniIconIndex;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (weak, nonatomic) NSObject<UIDragSession> *liftingDragSession; // ivar: _liftingDragSession
@property (readonly, nonatomic) NSObject<SBIconListLayout> *listLayout;
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (copy, nonatomic) NSString *location; // ivar: _iconLocation
@property (readonly, nonatomic) CGSize maxLabelSize;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (weak, nonatomic) NSObject<SBIconViewActionDelegate> *overrideActionDelegate; // ivar: _overrideActionDelegate
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) NSInteger progressState;
@property (nonatomic) BOOL refusesRecipientStatus;
@property (readonly, copy, nonatomic) NSString *representedFolderIconLocation;
@property (readonly, nonatomic) BOOL shouldShowAccessoryView;
@property (readonly, nonatomic) BOOL shouldShowCloseBox;
@property (readonly, nonatomic) BOOL shouldShowLabelAccessoryView;
@property (readonly, nonatomic) BOOL shouldTapGestureRecognizeAlongsideDragInteractionGestures;
@property (readonly, nonatomic, getter=isShowingConfigurationCard) BOOL showingConfigurationCard;
@property (readonly, nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (readonly, nonatomic, getter=isShowingStackConfigurationCard) BOOL showingStackConfigurationCard;
@property (readonly, nonatomic) BOOL showsDropGlow;
@property (nonatomic) BOOL showsImageAndLabelDuringDrop; // ivar: _showsImageAndLabelDuringDrop
@property (nonatomic) BOOL showsSquareCorners;
@property (nonatomic) BOOL startsDragMoreQuickly;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsConfigurationCard;
@property (readonly, nonatomic) BOOL supportsStackConfigurationCard;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic, getter=isTouchDownInIcon) BOOL touchDownInIcon;
@property (nonatomic) NSUInteger userVisibilityStatus;
@property (readonly, nonatomic) NSUInteger visibleMiniIconCount;
@property (readonly, nonatomic) NSUInteger visibleMiniIconListIndex;
@property (nonatomic) BOOL wantsFocusProxyView;


+(BOOL)_alwaysShowsAccessoryOfType:(NSInteger)arg0 ;
+(BOOL)_shouldAlwaysHaveContentContainerView;
+(BOOL)isIconTapGestureRecognizer:(id)arg0 ;
+(BOOL)showsPopovers;
+(BOOL)supportsCursorInteraction;
+(BOOL)supportsDragInteraction;
+(BOOL)supportsPreviewInteraction;
+(BOOL)supportsTapGesture;
+(CGFloat)_defaultDragInteractionLiftDelay;
+(CGFloat)_labelHeight;
+(CGFloat)defaultIconImageCornerRadius;
+(CGFloat)defaultIconImageScale;
+(CGFloat)defaultMaxLabelHeight;
+(CGFloat)defaultMaxLabelWidthDeltaForContentSizeCategory:(id)arg0 ;
+(CGFloat)labelAccessoryViewAdditionalRightMarginForType:(NSInteger)arg0 ;
+(CGFloat)labelAccessoryViewBaseRightMargin;
+(Class)_closeBoxClassForType:(NSInteger)arg0 ;
+(Class)defaultViewClassForAccessoryType:(NSInteger)arg0 ;
+(Class)defaultViewClassForLabelAccessoryType:(NSInteger)arg0 ;
+(NSInteger)closeBoxTypeForView:(id)arg0 ;
+(NSInteger)continuityBadgeTypeForContinuityInfo:(id)arg0 ;
+(NSInteger)continuityBadgeTypeForNSString:(id)arg0 ;
+(NSInteger)debugContinuityBadgeType;
+(NSInteger)defaultWidgetBackgroundRecipe;
+(NSUInteger)defaultImageLoadingBehavior;
+(id)_jitterRotationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterRotationAnimationWithStrength:(CGFloat)arg0 ;
+(id)_jitterXTranslationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterXTranslationAnimationWithStrength:(CGFloat)arg0 ;
+(id)_jitterYTranslationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterYTranslationAnimationWithStrength:(CGFloat)arg0 ;
+(id)applicationIconMultitaskingMenu;
+(id)applicationIconSplitViewMenu;
+(id)applicationShortcutService;
+(id)componentBackgroundView;
+(id)componentBackgroundViewOfType:(NSInteger)arg0 ;
+(id)componentBackgroundViewOfType:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 initialWeighting:(CGFloat)arg2 ;
+(id)defaultIconLocation;
+(id)defaultLegibilitySettings;
+(id)dragContextForDragItem:(id)arg0 ;
+(id)draggedItemBundleIdentifiersInDrag:(id)arg0 ;
+(id)groupNameBaseForComponentBackgroundViewOfType:(NSInteger)arg0 ;
+(id)labelConfigurationForListLayout:(id)arg0 contentSizeCategory:(id)arg1 options:(NSUInteger)arg2 ;
+(struct CGPoint )defaultIconImageCenterForIconImageSize:(struct CGSize )arg0 ;
+(struct CGSize )defaultIconImageSize;
+(struct CGSize )defaultIconViewSize;
+(struct CGSize )defaultIconViewSizeForIconImageSize:(struct CGSize )arg0 configurationOptions:(NSUInteger)arg1 ;
+(struct CGSize )maxLabelSizeForIconImageSize:(struct CGSize )arg0 ;
+(struct CGSize )maxLabelSizeForIconImageSize:(struct CGSize )arg0 contentSizeCategory:(id)arg1 options:(NSUInteger)arg2 ;
+(struct CGSize )maxLabelSizeForListLayout:(id)arg0 contentSizeCategory:(id)arg1 options:(NSUInteger)arg2 ;
+(struct CGSize )maxLabelSizeForListLayout:(id)arg0 iconImageSize:(struct CGSize )arg1 contentSizeCategory:(id)arg2 options:(NSUInteger)arg3 ;
+(void)activateShortcut:(id)arg0 withBundleIdentifier:(id)arg1 forIconView:(id)arg2 ;
+(void)configureLabelImageParametersBuilder:(id)arg0 forIcon:(id)arg1 location:(id)arg2 ;
+(void)setDebugContinuityBadgeType:(id)arg0 ;
-(BOOL)_contextMenuInteractionShouldAllowDragAfterDismiss:(id)arg0 ;
-(BOOL)_debugContinuity;
-(BOOL)_dragInteraction:(id)arg0 canExcludeCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)_dragInteraction:(id)arg0 competingGestureRecognizerShouldDelayLift:(id)arg1 ;
-(BOOL)_dragInteraction:(id)arg0 shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)_hasPopover;
-(BOOL)_hideIconLabelForContextMenu;
-(BOOL)_hideIconLabelForCustomIconImageViewController;
-(BOOL)_isCursorInteractionEnabled;
-(BOOL)_isFolderIconFreezingSupported;
-(BOOL)_isForcingIconContentScalingEnabled;
-(BOOL)_isShowingAccessoryView;
-(BOOL)_isShowingCloseBox;
-(BOOL)_selfOrCustomViewCanBecomeFocused;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldEnableGroupBlending;
-(BOOL)_shouldHaveContentContainerView;
-(BOOL)_shouldShowLabel;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canReceiveGrabbedIcon:(id)arg0 ;
-(BOOL)closeBoxShouldTrack:(id)arg0 ;
-(BOOL)disallowCursorInteraction;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)focusProxyCanBecomeFocused;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isContextMenuInteractionActive;
-(BOOL)isDragLifted;
-(BOOL)isDragging;
-(BOOL)isFolderIcon;
-(BOOL)isLabelTextBold;
-(BOOL)isTimedOut;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldActivateApplicationShortcutItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)_additionalLiftScale;
-(CGFloat)_continuousCornerRadius;
-(CGFloat)_labelBaselineOffsetFromImage;
-(CGFloat)_labelVerticalOffset;
-(CGFloat)effectiveBrightness;
-(CGFloat)effectiveIconAccessoryAlpha;
-(CGFloat)effectiveIconLabelAlpha;
-(CGFloat)effectiveOverallAlpha;
-(NSInteger)_closeBoxType;
-(NSInteger)_widgetBackgroundMaterialForDataSource:(id)arg0 ;
-(NSInteger)draggingStartLocation;
-(NSUInteger)supportedIconGridSizeClasses;
-(id)_automationID;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 previewForIconWithConfigurationOptions:(NSUInteger)arg1 highlighted:(BOOL)arg2 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_labelImage;
-(id)_labelImageParameters;
-(id)_legibilitySettingsWithParameters:(id)arg0 ;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg0 ;
-(id)_legibilitySettingsWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 ;
-(id)_makeIconImageView;
-(id)_medusaAppShortcutService;
-(id)_pointerStyleForAppIcon;
-(id)_pointerStyleForLibraryAdditionalItemsIndicatorIcon;
-(id)_pointerStyleForWidgetIcon;
-(id)_visiblyActiveDataSource;
-(id)actionDelegate;
-(id)badgeParallaxSettings;
-(id)badgeString;
-(id)behaviorDelegate;
-(id)configurationUIDelegate;
-(id)containerViewControllerForConfigurationInteraction:(id)arg0 ;
-(id)contentSizeCategory;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentImageView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayedLabelFont;
-(id)dragDelegate;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragItems;
-(id)dragPreviewForItem:(id)arg0 session:(id)arg1 ;
-(id)draggingLaunchActions;
-(id)draggingLaunchURL;
-(id)effectiveListLayoutProvider;
-(id)folder;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)homeScreenContentViewForConfigurationInteraction:(id)arg0 ;
-(id)initWithConfigurationOptions:(NSUInteger)arg0 ;
-(id)initWithConfigurationOptions:(NSUInteger)arg0 listLayoutProvider:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelConfiguration;
-(id)labelImageWithParameters:(id)arg0 ;
-(id)markAsDropping;
-(id)matchingIconViewByAddingConfigurationOptions:(NSUInteger)arg0 removingConfigurationOptions:(NSUInteger)arg1 ;
-(id)matchingIconViewWithConfigurationOptions:(NSUInteger)arg0 ;
-(id)newCaptureOnlyBackgroundView;
-(id)newComponentBackgroundViewOfType:(NSInteger)arg0 ;
-(id)pauseReasonsDescriptions;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)prepareForIconDrop;
-(id)recentsDocumentExtensionProvider;
-(id)referenceIconViewForConfigurationInteraction:(id)arg0 ;
-(id)representativeIconViewForModalInteractions;
-(id)reuseDelegate;
-(id)shortcutsDelegate;
-(id)sourceIconViewForConfigurationInteraction:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)tintColor;
-(struct CGPoint )_centerForAccessoryView;
-(struct CGPoint )_centerForCloseBox;
-(struct CGRect )_focusEffectBoundsForFocused:(BOOL)arg0 withFocusOutset:(CGFloat)arg1 ;
-(struct CGRect )_frameForLabelAccessoryViewWithLabelFrame:(struct CGRect )arg0 labelImage:(id)arg1 labelImageParameters:(id)arg2 imageFrame:(struct CGRect )arg3 ;
-(struct CGRect )contentBoundingRectForConfigurationInteraction:(id)arg0 ;
-(struct CGRect )frameForMiniIconAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )visibleImageRelativeFrameForMiniIconAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )accessorySize;
-(struct CGSize )iconViewSizeForIconImageSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessoryViewTapGestureChanged:(id)arg0 ;
-(void)_acquireHomeButtonPressConsumingAssertionIfNecessary;
-(void)_addJitter;
-(void)_animateCloseBoxWithAnimation:(NSInteger)arg0 animationBlock:(id)arg1 ;
-(void)_applyEditingStateAnimated:(BOOL)arg0 ;
-(void)_applyIconAccessoryAlpha:(CGFloat)arg0 ;
-(void)_applyIconContentScale:(CGFloat)arg0 ;
-(void)_applyIconEditingSettings;
-(void)_applyIconImageAlpha:(CGFloat)arg0 ;
-(void)_applyIconLabelAlpha:(CGFloat)arg0 ;
-(void)_applyOverallAlpha:(CGFloat)arg0 ;
-(void)_backgroundContrastDidChange:(id)arg0 ;
-(void)_boldTextStatusDidChange:(id)arg0 ;
-(void)_checkAndRemoveCloseBoxAfterAnimation;
-(void)_closeBoxTapGestureChanged:(id)arg0 ;
-(void)_configureIconImageView:(id)arg0 ;
-(void)_configureLabelAccessoryViewForType:(NSInteger)arg0 ;
-(void)_configureViewAsFolderIconImageView:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_contextMenuConfigurationDidDismiss:(id)arg0 ;
-(void)_contextMenuConfigurationDidPresent:(id)arg0 ;
-(void)_contextMenuConfigurationWillDismiss:(id)arg0 ;
-(void)_contextMenuConfigurationWillPresent:(id)arg0 forInteraction:(id)arg1 ;
-(void)_createAccessoryViewIfNecessary;
-(void)_createCloseBoxIfNecessary;
-(void)_delegateTouchEnded:(BOOL)arg0 ;
-(void)_destroyAccessoryView;
-(void)_destroyAccessoryView:(id)arg0 ;
-(void)_destroyIconImageView;
-(void)_disableContentContainerView;
-(void)_dragInteraction:(id)arg0 liftAnimationDidChangeDirection:(NSInteger)arg1 ;
-(void)_enableContentContainerView;
-(void)_fetchApplicationShortcutItemsIfAppropriate;
-(void)_fetchSupportedMedusaShortcutActionsIfAppropriate;
-(void)_handleActivateAppExposeKeyShortcut:(id)arg0 ;
-(void)_handleAddWidgetRequest:(id)arg0 ;
-(void)_handleMakeFullscreenKeyShortcut:(id)arg0 ;
-(void)_handleMakeSplitLeftKeyShortcut:(id)arg0 ;
-(void)_handleMakeSplitRightKeyShortcut:(id)arg0 ;
-(void)_handleTap;
-(void)_insertIconImageView:(id)arg0 ;
-(void)_invalidateHomeButtonPressConsumingAssertion;
-(void)_notifyObserversSizeDidChange;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(NSUInteger)arg0 ;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(void)_refreshAccessoryViewNotification:(id)arg0 ;
-(void)_registerForAddWidgetRequestsIfNecessary;
-(void)_removeJitter;
-(void)_removeUnknownSubviews;
-(void)_setForcingIconContentScalingEnabled:(BOOL)arg0 ;
-(void)_setShowingAccessoryView:(BOOL)arg0 ;
-(void)_setShowingCloseBox:(BOOL)arg0 ;
-(void)_setTemporarySnapshotViewForDragPreview:(id)arg0 ;
-(void)_toggleContentContainerViewIfNecessary;
-(void)_toggleGroupBlendingIfNecessary;
-(void)_unregisterForAddWidgetRequests;
-(void)_updateAccessoryViewAnimated:(BOOL)arg0 ;
-(void)_updateAfterManualIconImageInfoChange;
-(void)_updateAllComponentAlphas;
-(void)_updateAllComponentAlphasAnimated:(BOOL)arg0 ;
-(void)_updateBrightness;
-(void)_updateCloseBoxAnimated:(BOOL)arg0 ;
-(void)_updateCloseBoxWithAnimation:(NSInteger)arg0 ;
-(void)_updateConfigurationForIconImageView:(id)arg0 ;
-(void)_updateCursorInteractionsEnabled;
-(void)_updateCustomIconImageViewController:(BOOL)arg0 ;
-(void)_updateCustomIconImageViewControllerHitTesting;
-(void)_updateDragInteractionLiftDelay;
-(void)_updateFrameToIconViewSize;
-(void)_updateIconContentScale;
-(void)_updateIconImageViewAnimated:(BOOL)arg0 ;
-(void)_updateJitter;
-(void)_updateLabel;
-(void)_updateLabelAccessoryView;
-(void)_updateLabelArea;
-(void)_updateLaunchDisabled;
-(void)_updateProgressAnimated:(BOOL)arg0 ;
-(void)addGesturesAndInteractionsIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)cancelDrag;
-(void)cancelDragLift;
-(void)cleanUpAfterDropAnimation;
-(void)cleanupAfterCrossfade;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)clearIconImageInfo;
-(void)configurationInteractionDidBegin:(id)arg0 ;
-(void)configurationInteractionDidCommit:(id)arg0 ;
-(void)configurationInteractionDidEnd:(id)arg0 ;
-(void)configurationInteractionWillBegin:(id)arg0 ;
-(void)configurationInteractionWillEnd:(id)arg0 ;
-(void)configureForLabelAllowed:(BOOL)arg0 ;
-(void)configureLabelImageParametersBuilder:(id)arg0 ;
-(void)configureMatchingIconView:(id)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)customImageViewControllerWantsLabelHiddenDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissConfigurationCard;
-(void)dismissConfigurationCardImmediately;
-(void)dismissContextMenuWithCompletion:(id)arg0 ;
-(void)dismissStackConfigurationCard;
-(void)dismissStackConfigurationCardImmediately;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dragSession:(id)arg0 didEndWithOperation:(NSUInteger)arg1 ;
-(void)dragSession:(id)arg0 willEndWithOperation:(NSUInteger)arg1 ;
-(void)dragSessionWillBegin:(id)arg0 ;
-(void)earlyTerminateContextMenuDismissAnimation;
-(void)editingModeGestureRecognizerDidFire:(id)arg0 ;
-(void)endForbiddingAccessoryWithReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)endForbiddingEditingModeWithReason:(id)arg0 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)arg0 ;
-(void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)arg0 ;
-(void)iconLaunchEnabledDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)performAfterContextMenusDismissUsingBlock:(id)arg0 ;
-(void)performTap;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)popConfigurationCard;
-(void)popStackConfigurationCard;
-(void)prepareForReuse;
-(void)prepareToCrossfadeImageWithView:(id)arg0 anchorPoint:(struct CGPoint )arg1 options:(NSUInteger)arg2 ;
-(void)prepareToCrossfadeImageWithView:(id)arg0 options:(NSUInteger)arg1 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg0 allowFolderInteraction:(BOOL)arg1 ;
-(void)presentConfigurationCard;
-(void)presentStackConfigurationCard;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)purgeCachedEditingViewData;
-(void)removeAllIconAnimations;
-(void)removeDroppingAssertion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)scrollToFirstGapAnimated:(BOOL)arg0 ;
-(void)scrollToGapOrTopIfFullOfPage:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg0 ;
-(void)scrollToTopOfPage:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setBoundsSizeFromIconImageSize:(struct CGSize )arg0 ;
-(void)setCrossfadeCornerRadius:(CGFloat)arg0 ;
-(void)setCrossfadeFraction:(CGFloat)arg0 ;
-(void)setCrossfadeViewFadeFraction:(CGFloat)arg0 ;
-(void)setDisallowCursorInteraction:(BOOL)arg0 ;
-(void)setDragLifted:(BOOL)arg0 ;
-(void)setDragging:(BOOL)arg0 ;
-(void)setDragging:(BOOL)arg0 updateImmediately:(BOOL)arg1 ;
-(void)setFloatyFolderCrossfadeFraction:(CGFloat)arg0 ;
-(void)setMorphFraction:(CGFloat)arg0 ;
-(void)setShowsFocusEffect:(BOOL)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)setupFocusEffectPlatterView;
-(void)startForbiddingAccessoryWithReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)startForbiddingEditingModeWithReason:(id)arg0 ;
-(void)tapGestureDidChange:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateCustomIconImageViewController;
-(void)updateParallaxSettings;


@end


#endif