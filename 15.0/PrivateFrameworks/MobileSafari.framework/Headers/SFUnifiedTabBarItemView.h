// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDTABBARITEMVIEW_H
#define SFUNIFIEDTABBARITEMVIEW_H

@class UIButton, NSTimer, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString, NSArray, UIImage, NSDate, UITextField;
@protocol _SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, SFUnifiedTabBarItemViewDelegate;


#import "SFUnifiedBarItemView.h"
#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "SFBadgeContainerView.h"
#import "SFMoreMenuButton.h"
#import "SFNavigationBarToggleButton.h"
#import "SFUnifiedTabBarItemAccessoryButtonArrangement.h"
#import "SFUnifiedTabBarItemAvailabilityAction.h"
#import "_SFFluidProgressView.h"

@interface SFUnifiedTabBarItemView : SFUnifiedBarItemView <_SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource>

 {
    SFUnifiedTabBarItemTitleContainerView *_titleContainer;
    UIButton *_closeButton;
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
    UIButton *_firstExtensionButton;
    SFBadgeContainerView *_firstExtensionButtonContainer;
    UIButton *_secondExtensionButton;
    SFBadgeContainerView *_secondExtensionButtonContainer;
    UIButton *_multipleExtensionsButton;
    SFBadgeContainerView *_multipleExtensionsButtonContainer;
    UIButton *_closeButtonForHover;
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
@property (copy, nonatomic) NSArray *extensionButtons; // ivar: _extensionButtons
@property (nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;
@property (nonatomic) BOOL hasUnviewedDownloads; // ivar: _hasUnviewedDownloads
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesIconWhenActive; // ivar: _hidesIconWhenActive
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSDate *lastReloadDate; // ivar: _lastReloadDate
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (readonly, nonatomic) UIButton *menuButton;
@property (nonatomic) BOOL menuButtonSelected;
@property (retain, nonatomic) _SFFluidProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) UITextField *searchField;
@property (nonatomic) BOOL showsBadgeOnExtensionsButton;
@property (nonatomic) BOOL showsBadgeOnMenuButton;
@property (nonatomic) BOOL showsCloseButton; // ivar: _showsCloseButton
@property (nonatomic) BOOL showsLockIcon;
@property (nonatomic) BOOL showsNotSecureAnnotation;
@property (nonatomic) BOOL showsSearchField;
@property (nonatomic) BOOL showsSearchIcon;
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
@property (copy, nonatomic) NSString *titleWhenActive;


-(BOOL)_alwaysShowsStopReloadButton;
-(BOOL)_availabilityButtonsReplaceFormatMenuButton;
-(BOOL)_coalescingAccessoryButtonUpdates;
-(BOOL)_commandPressed;
-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg0 ;
-(BOOL)_showsAccessoryButtonOfType:(NSInteger)arg0 ;
-(BOOL)_showsFormatMenuButtonAccessories;
-(BOOL)_showsIcon;
-(BOOL)canBecomeFocused;
-(CGFloat)_insetForAccessoryButtonOfType:(NSInteger)arg0 ;
-(CGFloat)_layOutIndexes:(id)arg0 ofAccessoryButtonTypes:(id)arg1 alongEdge:(NSInteger)arg2 usingPresentationSize:(BOOL)arg3 ;
-(CGFloat)_squishedInsetToHideCloseButton;
-(CGFloat)_widthForAccessoryButtonOfType:(NSInteger)arg0 ;
-(id)_accessoryButtonConfigurationWithImage:(id)arg0 scale:(NSInteger)arg1 ;
-(id)_makeAccessoryButtonWithImage:(id)arg0 action:(SEL)arg1 ;
-(id)_makeAccessoryButtonWithImage:(id)arg0 scale:(NSInteger)arg1 action:(SEL)arg2 ;
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
-(void)_layOutTitleContainerMask;
-(void)_mediaStateMuteButtonTapped;
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
-(void)_updateAccessoryButtonsWithAnimatedLayout;
-(void)_updateCloseButtonForHoverPosition;
-(void)_updateFormatMenuButtonAccessories;
-(void)_updateFormatMenuButtonImage;
-(void)_updateMediaStateMuteButtonColor;
-(void)_updateMenuButtonColor;
-(void)_updateProgressViewColor;
-(void)_updateShowsProgressView;
-(void)_voiceSearchButtonTapped;
-(void)beginTransitioningSearchField;
-(void)dismissAvailabilityOverlays;
-(void)dismissReaderAvailabilityButton;
-(void)dismissTranslationAvailabilityButton;
-(void)endTransitioningSearchField;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBarTheme:(id)arg0 ;
-(void)setDownloadProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHovering:(BOOL)arg0 ;
-(void)setSquishedInset:(CGFloat)arg0 ;
-(void)showReaderAvailabilityOverlay;
-(void)showTranslationAvailabilityOverlay;
-(void)updateAccessibilityIdentifier;


@end


#endif