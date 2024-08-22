// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFNAVIGATIONBAR_H
#define _SFNAVIGATIONBAR_H

@class UIView, UIButton, SFURLLabel, UILabel, UIVisualEffectView, UIImageView, NSArray, _SFFluidProgressView, NSAttributedString, SFNavigationBarToggleButton, _SFDimmingButton, _UIClickInteraction, NSTimer, UIBlurEffect, NSString, SFNavigationBarItem, SFLockdownStatusBar, UITextField, _SFBarTheme;
@protocol UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UIClickInteractionDelegate, SFNavigationBarItemObserver, _SFNavigationBarCommon, _SFPopoverSourceInfo, _SFNavigationBarDelegate;


#import "_SFNavigationBarLabelsContainer.h"
#import "_SFToolbar.h"
#import "SFToolbarContainer.h"
#import "SFNavigationBarMetrics.h"
#import "_SFNavigationBarURLButton.h"
#import "SFNavigationBarAccessoryButtonArrangement.h"
#import "SFDismissButton.h"
#import "_SFNavigationBarTheme.h"

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UIClickInteractionDelegate, SFNavigationBarItemObserver, _SFNavigationBarCommon>

 {
    UIButton *_compressedBarButton;
    UIView *_controlsContainer;
    _SFNavigationBarLabelsContainer *_labelsContainer;
    UIView *_labelScalingContainer;
    SFURLLabel *_URLLabel;
    UILabel *_expandedURLLabel;
    UILabel *_privateBrowsingLabel;
    UIVisualEffectView *_lockEffectView;
    UIVisualEffectView *_squishedLockEffectView;
    UILabel *_availabilityLabel;
    UILabel *_securityAnnotationLabel;
    CGFloat _expandedURLWidth;
    CGFloat _expandedURLHeight;
    CGFloat _offsetOfURLInExpandedURL;
    UIView *_URLContainer;
    UIView *_URLContainerClipView;
    UIView *_fakeTextFieldSelectionView;
    CGFloat _fakeSelectionStartOffset;
    CGFloat _fakeSelectionEndOffset;
    UIButton *_fakeClearButton;
    BOOL _usesLiftedAppearance;
    _SFToolbar *_leadingToolbar;
    _SFToolbar *_trailingToolbar;
    SFToolbarContainer *_leadingToolbarContainer;
    SFToolbarContainer *_trailingToolbarContainer;
    CGSize _cachedSecurityAnnotationLabelFittingSize;
    UIView *_securityAnnotationContainer;
    BOOL _shouldAnimateURLMovement;
    SFNavigationBarMetrics *_barMetrics;
    BOOL _shouldHidePlaceholderURLItemsForPencilInput;
    UIImageView *_searchIndicator;
    UIImageView *_lockView;
    UIImageView *_squishedSearchIndicator;
    UIImageView *_squishedLockView;
    UIView *_squishedURLAccessoryItemsContainer;
    NSArray *_URLAccessoryItems;
    _SFNavigationBarURLButton *_URLOutline;
    _SFFluidProgressView *_progressView;
    UIVisualEffectView *_backdrop;
    UIView *_separator;
    BOOL _lockViewNeedsUpdate;
    NSAttributedString *_attributedTextWhenExpanded;
    SFNavigationBarAccessoryButtonArrangement *_accessoryButtonArrangement;
    SFNavigationBarToggleButton *_formatToggleButton;
    _SFDimmingButton *_stopButton;
    _SFDimmingButton *_reloadButton;
    _UIClickInteraction *_formatClickInteraction;
    UIButton *_mediaStateMuteButton;
    NSInteger _visibleTrailingButtonType;
    NSInteger _formatButtonTapAction;
    UIButton *_cancelButton;
    CGFloat _cancelButtonIntrinsicWidth;
    NSTimer *_availabilityLabelHideTimer;
    id *_readerAvailabilityAnimationBlock;
    SFDismissButton *_dismissButton;
    NSUInteger _inputMode;
    id *_availabilityButtonDeferredAction;
    BOOL _showingButtonWithAvailabilityLabel;
}


@property (readonly, nonatomic) CGRect URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *URLOutlinePopoverSourceInfo;
@property (readonly, nonatomic) UIBlurEffect *backdropEffect; // ivar: _backdropEffect
@property (nonatomic, getter=isBackdropGroupDisabled) BOOL backdropGroupDisabled; // ivar: _backdropGroupDisabled
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic) CGFloat contentUnderStatusBarHeight; // ivar: _contentUnderStatusBarHeight
@property (readonly, nonatomic, getter=_controlsAlpha) CGFloat controlsAlpha;
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden; // ivar: _controlsHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultHeight;
@property (weak, nonatomic) NSObject<_SFNavigationBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat dismissButtonPadding;
@property (readonly, nonatomic) CGSize dismissButtonSize;
@property (readonly, nonatomic) _SFNavigationBarTheme *effectiveTheme; // ivar: _effectiveTheme
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *formatMenuButtonPopoverSourceInfo;
@property (nonatomic) BOOL hasToolbar;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) SFNavigationBarItem *item; // ivar: _item
@property (retain, nonatomic) SFLockdownStatusBar *lockdownStatusBar; // ivar: _lockdownStatusBar
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (nonatomic) CGFloat minimumBackdropHeight; // ivar: _minimumBackdropHeight
@property (readonly, nonatomic) CGFloat minimumHeight;
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *reloadButtonPopoverSourceInfo;
@property (readonly, nonatomic, getter=isSendingBarMetricsChangeNotification) BOOL sendingBarMetricsChangeNotification; // ivar: _sendingBarMetricsChangeNotification
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBlur; // ivar: _suppressesBlur
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (nonatomic) BOOL unifiedFieldShowsProgressView; // ivar: _unifiedFieldShowsProgressView
@property (nonatomic) BOOL usesFaintSeparator; // ivar: _usesFaintSeparator
@property (nonatomic) BOOL usesNarrowLayout; // ivar: _usesNarrowLayout
@property (readonly, nonatomic) CGFloat visualHeight;


+(CGFloat)estimatedDefaultHeightForStatusBarHeight:(CGFloat)arg0 ;
+(CGFloat)estimatedMinimumHeightForStatusBarHeight:(CGFloat)arg0 ;
+(CGFloat)separatorHeight;
+(NSInteger)_metricsCategory;
+(void)initialize;
-(BOOL)canBecomeFirstResponder;
-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(BOOL)containsBarItem:(NSInteger)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg0 canWriteAtLocation:(struct CGPoint )arg1 ;
-(BOOL)navigationBarURLButton:(id)arg0 shouldAllowLongPressAtPoint:(struct CGPoint )arg1 ;
-(BOOL)navigationBarURLButton:(id)arg0 shouldShowMenuForGestureWithRecognizer:(id)arg1 ;
-(BOOL)navigationBarURLButtonIsUsingNarrowLayout:(id)arg0 ;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg0 ;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg0 ;
-(BOOL)textFieldIsEditableForNavigationBarURLButton:(id)arg0 ;
-(CGFloat)placeholderHorizontalInset;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_dragInteraction:(id)arg0 viewToSnapshotItem:(id)arg1 ;
-(id)_placeholderText;
-(id)_timingFunctionForAnimation;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 inputMode:(NSUInteger)arg1 ;
-(id)newTextField;
-(id)popoverSourceInfoForBarItem:(NSInteger)arg0 ;
-(id)textFieldForNavigationBarURLButton:(id)arg0 ;
-(id)textForNavigationBarURLButton:(id)arg0 ;
-(struct CGRect )urlOutlineFrameRelativeToView:(id)arg0 ;
-(void)_URLTapped:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_compressedBarTapped;
-(void)_dismissButtonTapped:(id)arg0 ;
-(void)_formatToggleButtonTapped:(id)arg0 ;
-(void)_hideAvailabilityLabelNow;
-(void)_mediaStateMuteButtonTapped:(id)arg0 ;
-(void)_reloadButtonPressed;
-(void)_stopButtonPressed;
-(void)_updateAvailabilityButtonVisibilityForType:(NSInteger)arg0 animated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_updateSecurityWarningsVisibility;
-(void)_updateShowsLockIcon;
-(void)_updateText;
// -(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 afterImageDisappearsBlock:(id)arg4 afterDestinationLayerBouncesBlock:(unk)arg5  ;
-(void)animateSafariIconLinkFromPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)clearEphemeralUI;
-(void)clickInteractionDidClickDown:(id)arg0 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;
-(void)dealloc;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)navigationBarItemDidUpdateCustomPlaceholderText:(id)arg0 ;
-(void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg0 ;
-(void)navigationBarItemDidUpdateMediaStateIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateOverrideBarStyleForSecurityWarning:(id)arg0 ;
-(void)navigationBarItemDidUpdateSecurityAnnotation:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsLockIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsPageFormatButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsReaderButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg0 ;
-(void)navigationBarItemDidUpdateText:(id)arg0 ;
-(void)navigationBarURLButtonBeginSuppressingPlaceholder:(id)arg0 ;
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg0 ;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg0 ;
-(void)navigationBarURLButtonDidRequestFocusForPencilInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)navigationBarURLButtonEndSuppressingPlaceholder:(id)arg0 ;
-(void)setDismissButtonHidden:(BOOL)arg0 ;
-(void)setDismissButtonStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif