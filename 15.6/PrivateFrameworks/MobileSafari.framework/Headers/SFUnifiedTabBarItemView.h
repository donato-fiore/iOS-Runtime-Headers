// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDTABBARITEMVIEW_H
#define SFUNIFIEDTABBARITEMVIEW_H

@class UIButton, NSTimer, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString, UIImage, NSDate, UIView, UITextField, NSArray;
@protocol _SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, SFUnifiedTabBarItemViewDelegate;


#import "SFUnifiedBarItemView.h"
#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "SFUnifiedTabBarItemViewCloseButton.h"
#import "SFBadgeContainerView.h"
#import "SFMoreMenuButton.h"
#import "SFNavigationBarToggleButton.h"
#import "SFUnifiedTabBarItemAccessoryButtonArrangement.h"
#import "SFUnifiedTabBarItemAvailabilityAction.h"
#import "SFWebExtensionButtonConfiguration.h"
#import "_SFFluidProgressView.h"

@interface SFUnifiedTabBarItemView : SFUnifiedBarItemView <_SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource>

 {
    SFUnifiedTabBarItemTitleContainerView *_titleContainer;
    SFUnifiedTabBarItemViewCloseButton *_closeButton;
    SFBadgeContainerView *_moreMenuButtonContainer;
    SFMoreMenuButton *_moreMenuButton;
    SFMoreMenuButton *_menuButton;
    SFNavigationBarToggleButton *_formatMenuButton;
    SFMoreMenuButton *_downloadProgressView;
    UIButton *_mediaStateMuteButton;
    UIButton *_voiceSearchButton;
    UIButton *_reloadButton;
    NSTimer *_reloadButtonExpirationTimer;
    UIButton *_stopButton;
    BOOL _showsStopReloadButton;
    BOOL _showingProgress;
    BOOL _titleContainerMasked;
    SFUnifiedTabBarItemAccessoryButtonArrangement *_accessoryButtonArrangement;
    CGFloat _leadingButtonsWidth;
    CGFloat _trailingButtonsWidth;
    NSTimer *_accessoryButtonUpdateTimer;
    BOOL _trailingButtonsHidden;
    BOOL _needsAnimatedAccessoryButtonUpdate;
    BOOL _needsVoiceSearchAvailabilityUpdate;
    UIButton *_firstExtensionButton;
    SFBadgeContainerView *_firstExtensionButtonContainer;
    UIButton *_secondExtensionButton;
    SFBadgeContainerView *_secondExtensionButtonContainer;
    UIButton *_multipleExtensionsButton;
    SFBadgeContainerView *_multipleExtensionsButtonContainer;
    SFUnifiedTabBarItemViewCloseButton *_closeButtonForHover;
    SFUnifiedTabBarItemAvailabilityAction *_currentAvailabilityLabelAction;
    NSMutableArray *_pendingAvailabilityLabelActions;
    NSTimer *_availabilityLabelTimer;
    NSMutableSet *_visibleAvailabilityButtonTypes;
    NSMutableDictionary *_availabilityButtons;
    NSMutableDictionary *_availabilityButtonTimers;
}


@property (nonatomic) NSInteger accessoryButtonLayout; // ivar: _accessoryButtonLayout
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSInteger contentAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SFUnifiedTabBarItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SFWebExtensionButtonConfiguration *extensionButtonConfiguration; // ivar: _extensionButtonConfiguration
@property (nonatomic) BOOL hasFocusedSensitiveInputField;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesIconWhenActive; // ivar: _hidesIconWhenActive
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSDate *lastReloadDate; // ivar: _lastReloadDate
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic) NSUInteger menuButtonBadges; // ivar: _menuButtonBadges
@property (nonatomic) BOOL menuButtonSelected;
@property (readonly, nonatomic) UIView *menuPopoverSourceView;
@property (retain, nonatomic) _SFFluidProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) UITextField *searchField;
@property (nonatomic) NSInteger securityAnnotation;
@property (nonatomic) BOOL showsBadgeOnExtensionsButton; // ivar: _showsBadgeOnExtensionsButton
@property (nonatomic) BOOL showsCloseButton; // ivar: _showsCloseButton
@property (nonatomic) BOOL showsLockIcon;
@property (readonly, nonatomic) BOOL showsPersistentStopReloadButton;
@property (nonatomic) BOOL showsSearchField;
@property (nonatomic) BOOL showsSearchIcon;
@property (readonly, nonatomic) BOOL showsSecurityAnnotation;
@property (nonatomic) BOOL showsSquishedAccessoryViews; // ivar: _showsSquishedAccessoryViews
@property (nonatomic) BOOL showsStopReloadButton;
@property (nonatomic) BOOL showsTranslationIcon; // ivar: _showsTranslationIcon
@property (nonatomic) BOOL showsVoiceSearchButton; // ivar: _showsVoiceSearchButton
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (weak, nonatomic) SFUnifiedTabBarItemTitleContainerView *squishedTitleContainer; // ivar: _squishedTitleContainer
@property (nonatomic) NSUInteger startIndexOfTitleInTextWhenExpanded;
@property (nonatomic) BOOL stopReloadButtonShowsStop; // ivar: _stopReloadButtonShowsStop
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textWhenExpanded;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) NSString *titleWhenActive;


-(BOOL)_availabilityButtonsReplaceFormatMenuButton;
-(BOOL)_coalescingAccessoryButtonUpdates;
-(BOOL)_commandPressed;
-(BOOL)_hasRoomForIconAndCloseButton;
-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg0 ;
-(BOOL)_shouldUseActiveTheme;
-(BOOL)_showsAccessoryButtonOfType:(NSInteger)arg0 ;
-(BOOL)_showsFormatMenuButtonAccessories;
-(BOOL)_showsIcon;
-(BOOL)canBecomeFocused;
-(CGFloat)_closeButtonAlphaForSquishedInset;
-(CGFloat)_insetForAccessoryButtonOfType:(NSInteger)arg0 ;
-(CGFloat)_layOutIndexes:(id)arg0 ofAccessoryButtonTypes:(id)arg1 alongEdge:(NSInteger)arg2 usingPresentationSize:(BOOL)arg3 ;
-(CGFloat)_squishedInsetToHideCloseButton;
-(CGFloat)_widthForAccessoryButtonOfType:(NSInteger)arg0 ;
-(NSUInteger)_individualExtensionButtonLimit;
-(id)_accessoryButtonConfigurationWithImage:(id)arg0 scale:(NSInteger)arg1 ;
-(id)_accessoryButtonTintColor;
-(id)_controlsTintColor;
-(id)_makeAccessoryButtonWithImage:(id)arg0 action:(SEL)arg1 ;
-(id)_makeAccessoryButtonWithImage:(id)arg0 scale:(NSInteger)arg1 action:(SEL)arg2 ;
-(id)_progressBarTintColor;
-(id)_secondaryAccessoryButtonTintColor;
-(id)_viewForAccessoryButtonOfType:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerRegionIdentifierForInteractionLocation:(struct CGPoint )arg0 ;
-(id)test_reloadButtonExpirationTimer;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_addPendingAvailabilityLabelAction:(id)arg0 ;
-(void)_cancelAvailabilityLabelsAnimated:(BOOL)arg0 ;
-(void)_closeButtonTapped;
-(void)_dismissAvailabilityButtonOfType:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_dismissAvailabilityButtons:(id)arg0 animated:(BOOL)arg1 ;
-(void)_dismissAvailabilityButtonsAnimated:(BOOL)arg0 ;
-(void)_dismissAvailabilityLabelAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_dismissExpiredAvailabilityButtons;
-(void)_extensionButtonTapped:(id)arg0 ;
-(void)_hover:(id)arg0 ;
-(void)_layOutAccessoryButtons;
-(void)_layOutTitleContainer;
-(void)_layOutTitleContainerMask;
-(void)_mediaStateMuteButtonTapped;
-(void)_menuButtonClicked;
-(void)_menuButtonReceivedTouchDown;
-(void)_menuButtonTapped;
-(void)_presentAvailabilityButtonWithAction:(id)arg0 ;
-(void)_presentAvailabilityLabel;
-(void)_readerButtonTapped;
-(void)_reloadButtonTapped;
-(void)_requestAvailabilityLabelWithAction:(id)arg0 ;
-(void)_requestAvailabilityOverlayWithAction:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)_searchFieldDidChange:(id)arg0 ;
-(void)_setIndexes:(id)arg0 ofAccessoryButtonTypes:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_setNeedsAnimatedAccessoryButtonUpdate;
-(void)_setTrailingButtonsHidden:(BOOL)arg0 ;
-(void)_showNextAvailabilityLabel;
-(void)_startAvailabilityLabelTimerWithDuration:(CGFloat)arg0 ;
-(void)_startReloadButtonExpirationTimer;
-(void)_startTimerForAvailabilityButtonOfType:(NSInteger)arg0 ;
-(void)_stopAccessoryButtonUpdateTimer;
-(void)_stopAvailabilityLabelTimer;
-(void)_stopButtonTapped;
-(void)_stopReloadButtonExpirationTimer;
-(void)_temporarilyCoalesceAccessoryButtonUpdates;
-(void)_translationButtonTapped;
-(void)_updateAccessoryButtons;
-(void)_updateAccessoryButtonsAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateBadges;
-(void)_updateCloseButtonForHoverPosition;
-(void)_updateFormatMenuButtonAccessories;
-(void)_updateFormatMenuButtonImage;
-(void)_updateFormatMenuButtonStyle;
-(void)_updateMediaStateMuteButtonColor;
-(void)_updateMenuButtonColor;
-(void)_updateProgressViewColor;
-(void)_updateShowsProgressView;
-(void)_voiceSearchAvailabilityDidChange:(id)arg0 ;
-(void)_voiceSearchButtonTapped;
-(void)applyTheme;
-(void)beginTransitioningSearchField;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)dismissAvailabilityOverlays;
-(void)dismissReaderAvailabilityButton;
-(void)dismissTranslationAvailabilityButton;
-(void)endTransitioningSearchField;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDownloadProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHovering:(BOOL)arg0 ;
-(void)setPlatterStyle:(NSInteger)arg0 ;
-(void)setSquishedInset:(CGFloat)arg0 ;
-(void)showReaderAvailabilityOverlay;
-(void)showTranslationAvailabilityOverlay;
-(void)tintColorDidChange;
-(void)updateAccessibilityIdentifier;
-(void)updateCornerRadius;


@end


#endif