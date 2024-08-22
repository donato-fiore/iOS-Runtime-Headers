// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCAPSULENAVIGATIONBAR_H
#define SFCAPSULENAVIGATIONBAR_H

@class UIView, UIImageView, NSMutableDictionary, UIAction, NSLayoutConstraint, NSArray, UILayoutGuide, NSIndexSet, NSMutableSet, NSHashTable, NSTimer, NSSet, NSString, UITextField;
@protocol SFNavigationBarItemObserver, _SFBarRegistrationObserving, SFCapsuleContentView, _SFFluidProgressViewDelegate, _SFNavigationBarCommon, _SFBarRegistrationToken, WBSUserDefaultObservation, _SFPopoverSourceInfo, SFCapsuleNavigationBarButtonProvider, _SFNavigationBarDelegateCommon, SFCapsuleContentViewSizeUpdating;


#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "_SFDimmingButton.h"
#import "_SFFluidProgressView.h"
#import "SFNavigationBarItem.h"
#import "_SFBarTheme.h"

@interface SFCapsuleNavigationBar : UIView <SFNavigationBarItemObserver, _SFBarRegistrationObserving, SFCapsuleContentView, _SFFluidProgressViewDelegate, _SFNavigationBarCommon>

 {
    SFUnifiedTabBarItemTitleContainerView *_titleContainer;
    UIImageView *_lockView;
    NSMutableDictionary *_buttons;
    _SFDimmingButton *_accessoryButton;
    UIAction *_currentAction;
    id<_SFBarRegistrationToken> *_registration;
    NSLayoutConstraint *_lockIconToTextLayoutGuideConstraint;
    NSArray *_accessoryButtonVisibleHorizontalConstraints;
    NSArray *_accessoryButtonHiddenHorizontalConstraints;
    NSArray *_leadingButtonConstraints;
    NSArray *_trailingButtonConstraints;
    NSArray *_buttonSpacingGuides;
    NSArray *_textVerticalAlignmentConstraints;
    NSLayoutConstraint *_titleHorizontalCenterConstraint;
    NSLayoutConstraint *_titleHorizontalLeadingConstraint;
    UILayoutGuide *_textVerticalAlignmentGuide;
    _SFFluidProgressView *_progressView;
    NSArray *_labelLayoutInfos;
    NSArray *_iconLayoutInfos;
    NSIndexSet *_indexesOfIconsAfterTitle;
    NSMutableSet *_hiddenLabelTypes;
    NSHashTable *_contentObservers;
    NSTimer *_subtitleTimer;
    CGFloat _lastTitleContainerWidth;
    BOOL _isForSizing;
    BOOL _deferButtonAlphaUpdatesDuringLayout;
    UIImageView *_expandBarButton;
    id<WBSUserDefaultObservation> *_debugObservation;
    NSArray *_progressViewConstraints;
}


@property (readonly, nonatomic) CGRect URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *URLOutlinePopoverSourceInfo;
@property (weak, nonatomic) NSObject<SFCapsuleNavigationBarButtonProvider> *buttonProvider; // ivar: _buttonProvider
@property (copy, nonatomic) NSSet *buttonsToKeepVisibleWhenMinimized; // ivar: _buttonsToKeepVisibleWhenMinimized
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFNavigationBarDelegateCommon> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *formatMenuButtonPopoverSourceInfo;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic, getter=_iconTypes) NSArray *iconTypes; // ivar: _iconTypes
@property (nonatomic) BOOL isMinimized; // ivar: _isMinimized
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) SFNavigationBarItem *item; // ivar: _item
@property (readonly, nonatomic) CGRect keyContentRect;
@property (nonatomic) CGAffineTransform keyContentTransform; // ivar: _keyContentTransform
@property (readonly, copy, nonatomic, getter=_labelTypes) NSArray *labelTypes; // ivar: _labelTypes
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (copy, nonatomic) NSArray *leadingButtons; // ivar: _leadingButtons
@property (nonatomic) CGFloat minimizationPercent; // ivar: _minimizationPercent
@property (nonatomic) CGFloat minimizedContentHorizontalInset;
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly, nonatomic) BOOL showingTransientLabel; // ivar: _showingTransientLabel
@property (weak, nonatomic) NSObject<SFCapsuleContentViewSizeUpdating> *sizeUpdater; // ivar: _sizeUpdater
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField;
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (readonly, nonatomic) CGFloat timeRemainingForTransientLabel;
@property (copy, nonatomic) NSArray *trailingButtons; // ivar: _trailingButtons
@property (readonly, nonatomic) BOOL usesSingleButtonRow; // ivar: _usesSingleButtonRow


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_isTemporaryLabel:(NSInteger)arg0 ;
-(BOOL)_lockIconExtendsIntoMargin;
-(BOOL)_progressViewAlignsToTopWhenMinimized;
-(BOOL)_shouldCenterButtonsBetweenEdgeAndTitle:(id)arg0 ;
-(BOOL)_shouldCenterLabels;
-(BOOL)_shouldHideButtons;
-(BOOL)_shouldHideButtonsForMinimized:(BOOL)arg0 ;
-(BOOL)_shouldUseButtonRowForTraitCollection:(id)arg0 ;
-(BOOL)_showsReaderAvailabilityText;
-(BOOL)_showsTranslationAvailabilityText;
-(BOOL)_transitionFromButtons:(id)arg0 toButtons:(id)arg1 withConstraintsToDeactivate:(id)arg2 ;
-(CGFloat)_interButtonSpacing;
-(CGFloat)_titleToButtonSpacing;
-(id)_horizontalAlignmentConstraintForLabel:(id)arg0 ;
-(id)_iconForLabelType:(NSInteger)arg0 ;
-(id)_imageForToggleReaderAction;
-(id)_newActionForAccessoryButton;
-(id)_reloadAction;
-(id)_stopAction;
-(id)_textColorForLabelType:(NSInteger)arg0 ;
-(id)_textForSubtitleType:(NSInteger)arg0 ;
-(id)_textStyleForLabelType:(NSInteger)arg0 withLabelTypes:(id)arg1 ;
-(id)_toggleReaderAction;
-(id)_translateAction;
-(id)initForSizingWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popoverSourceInfoForBarItem:(NSInteger)arg0 ;
-(struct CGPoint )_minimumEdgeMargin;
-(struct CGPoint )_titleToEdgeMargin;
-(void)_createLeadingButtonConstraints;
-(void)_createSingleRowButtonConstraints;
-(void)_createTrailingButtonConstraints;
-(void)_invalidateHeight;
-(void)_startTemporaryLabelTimerIfNeeded;
-(void)_subtitleMarqueeStarted:(id)arg0 ;
-(void)_subtitleTimerFired:(id)arg0 ;
-(void)_updateAccessoryAction;
-(void)_updateButtonAlphaForMinimizedPercent:(CGFloat)arg0 ;
-(void)_updateLabelContents;
-(void)_updateLabelContentsAtIndexes:(id)arg0 iconsAtIndexes:(id)arg1 ;
-(void)_updateLabelTypesAnimated:(BOOL)arg0 ;
-(void)_updateLabelTypesForMinimized:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateLockViewAlpha;
-(void)_updateLockViewHorizontalConstraint;
-(void)_updateNotSecureAnnotation;
-(void)_updatePageFormatButtonForNavigationBarItem:(id)arg0 shouldResetDiscovery:(BOOL)arg1 ;
-(void)_updatePlaceholderText;
-(void)_updateProgressViewFillColor;
-(void)_updateShowsPrivateAnnotation;
-(void)_updateShowsProgressView;
-(void)_updateTitleContainerAlignment;
-(void)_updateTitleContainerAlpha;
-(void)addContentObserver:(id)arg0 ;
// -(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 afterImageDisappearsBlock:(id)arg4 afterDestinationLayerBouncesBlock:(unk)arg5  ;
-(void)animateSafariIconLinkFromPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)didCompleteBarRegistrationWithToken:(id)arg0 ;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg0 ;
-(void)navigationBarItemDidUpdateMediaStateIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateNeedsExtensionBadge:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsExtensionsAvailability:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsLockIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsNotSecureAnnotation:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsReaderButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg0 ;
-(void)navigationBarItemDidUpdateText:(id)arg0 ;
-(void)prepareForSizingNavigationBar:(id)arg0 ;
-(void)removeContentObserver:(id)arg0 ;
-(void)setMinimized:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityIdentifier;
-(void)updateConstraints;
-(void)willChangeToMinimized:(BOOL)arg0 coordinator:(id)arg1 ;


@end


#endif