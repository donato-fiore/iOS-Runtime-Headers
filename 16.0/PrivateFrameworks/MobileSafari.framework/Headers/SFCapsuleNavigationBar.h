// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCAPSULENAVIGATIONBAR_H
#define SFCAPSULENAVIGATIONBAR_H

@class UIControl, NSMutableDictionary, NSArray, UIView, UIAction, UILayoutGuide, NSIndexSet, NSMutableSet, NSTimer, NSString, NSNumber, PKScribbleInteraction, UITextField;
@protocol SFNavigationBarItemObserver, _SFBarRegistrationObserving, SFCapsuleContentView, _SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, _SFNavigationBarCommon, _SFBarRegistrationToken, WBSUserDefaultObservation, _SFPopoverSourceInfo, _SFNavigationBarDelegateCommon, SFCapsuleContentViewSizeUpdating;


#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "_SFFluidProgressView.h"
#import "SFNavigationBarItem.h"
#import "_SFBarTheme.h"

@interface SFCapsuleNavigationBar : UIControl <SFNavigationBarItemObserver, _SFBarRegistrationObserving, SFCapsuleContentView, _SFFluidProgressViewDelegate, PKScribbleInteractionDelegate, _SFNavigationBarCommon>

 {
    SFUnifiedTabBarItemTitleContainerView *_titleContainer;
    NSMutableDictionary *_buttons;
    NSArray *_externalLeadingButtons;
    NSArray *_leadingButtons;
    UIView *_searchIndicatorView;
    UIAction *_currentAction;
    id<_SFBarRegistrationToken> *_registration;
    NSArray *_leadingButtonConstraints;
    NSArray *_trailingButtonConstraints;
    NSArray *_buttonSpacingGuides;
    NSArray *_textVerticalAlignmentConstraints;
    UILayoutGuide *_textVerticalAlignmentGuide;
    _SFFluidProgressView *_progressView;
    NSArray *_labelLayoutInfos;
    NSArray *_iconLayoutInfos;
    NSIndexSet *_indexesOfIconsAfterTitle;
    NSMutableSet *_hiddenLabelTypes;
    NSTimer *_subtitleTimer;
    CGFloat _lastTitleContainerWidth;
    BOOL _isForSizing;
    BOOL _deferButtonAlphaUpdatesDuringLayout;
    id<WBSUserDefaultObservation> *_debugObservation;
    NSArray *_progressViewConstraints;
}


@property (readonly, nonatomic) CGRect URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *URLOutlinePopoverSourceInfo;
@property (copy, nonatomic) id *buttonPointerStyleProvider; // ivar: _buttonPointerStyleProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFNavigationBarDelegateCommon> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *formatMenuButtonPopoverSourceInfo;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_hidesTitle, setter=_setHidesTitle:) BOOL hidesTitle; // ivar: _hidesTitle
@property (copy, nonatomic) id *highlightObserver; // ivar: _highlightObserver
@property (readonly, copy, nonatomic, getter=_iconTypes) NSArray *iconTypes; // ivar: _iconTypes
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (nonatomic) BOOL isMinimized; // ivar: _isMinimized
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) SFNavigationBarItem *item; // ivar: _item
@property (readonly, nonatomic) CGFloat keyContentBaselineBottomInset;
@property (readonly, nonatomic) CGFloat keyContentCapHeightTopInset;
@property (readonly, nonatomic) CGRect keyContentRect;
@property (nonatomic) CGAffineTransform keyContentTransform; // ivar: _keyContentTransform
@property (readonly, copy, nonatomic, getter=_labelTypes) NSArray *labelTypes; // ivar: _labelTypes
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (copy, nonatomic) NSArray *leadingButtons;
@property (readonly, nonatomic) NSNumber *microphoneContentOriginX;
@property (nonatomic) CGAffineTransform microphoneContentTransform; // ivar: _microphoneContentTransform
@property (nonatomic) CGFloat minimizationPercent; // ivar: _minimizationPercent
@property (nonatomic) CGFloat minimizedContentHorizontalInset; // ivar: _minimizedContentHorizontalInset
@property (nonatomic) CGFloat nonKeyContentAlpha; // ivar: _nonKeyContentAlpha
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly, nonatomic) PKScribbleInteraction *scribbleInteraction; // ivar: _scribbleInteraction
@property (readonly, nonatomic) BOOL showingTransientLabel; // ivar: _showingTransientLabel
@property (weak, nonatomic) NSObject<SFCapsuleContentViewSizeUpdating> *sizeUpdater; // ivar: _sizeUpdater
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField;
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (copy, nonatomic) NSArray *trailingButtons; // ivar: _trailingButtons
@property (weak, nonatomic) UIView *unclippedContainer; // ivar: _unclippedContainer
@property (readonly, nonatomic) CGSize urlSize;


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_isTemporaryLabel:(NSInteger)arg0 ;
-(BOOL)_progressViewAlignsToTopWhenMinimized;
-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg0 ;
-(BOOL)_shouldCenterButtonsBetweenEdgeAndTitle:(id)arg0 ;
-(BOOL)_shouldCenterLabels;
-(BOOL)_shouldHideButtons;
-(BOOL)_shouldHideButtonsForMinimized:(BOOL)arg0 ;
-(BOOL)_showsReaderAvailabilityText;
-(BOOL)_showsSearchIconInTitleContainer;
-(BOOL)_showsTranslationAvailabilityText;
-(BOOL)_transitionFromButtons:(id)arg0 toButtons:(id)arg1 withConstraintsToDeactivate:(id)arg2 ;
-(CGFloat)_interButtonSpacing;
-(CGFloat)_titleToButtonSpacing;
-(CGFloat)horizontalPointerPaddingForButton:(id)arg0 ;
-(id)_horizontalAlignmentConstraintForLabel:(id)arg0 ;
-(id)_iconForLabelType:(NSInteger)arg0 ;
-(id)_textColorForLabelType:(NSInteger)arg0 ;
-(id)_textForSubtitleType:(NSInteger)arg0 ;
-(id)_textStyleForLabelType:(NSInteger)arg0 withLabelTypes:(id)arg1 ;
-(id)initForSizingWithFrame:(struct CGRect )arg0 ;
-(id)initForSizingWithFrame:(struct CGRect )arg0 layoutStyle:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 layoutStyle:(NSInteger)arg1 ;
-(id)popoverSourceInfoForBarItem:(NSInteger)arg0 ;
-(struct CGPoint )_minimumEdgeMargin;
-(struct CGPoint )_titleToEdgeMargin;
-(struct CGRect )urlOutlineFrameRelativeToView:(id)arg0 ;
-(void)_createLeadingButtonConstraints;
-(void)_createTrailingButtonConstraints;
-(void)_invalidateHeight;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)_startTemporaryLabelTimerIfNeeded;
-(void)_subtitleMarqueeStarted:(id)arg0 ;
-(void)_subtitleTimerFired:(id)arg0 ;
-(void)_updateButtonAlphaForMinimizedPercent:(CGFloat)arg0 ;
-(void)_updateButtonsTransform;
-(void)_updateLabelContents;
-(void)_updateLabelContentsAtIndexes:(id)arg0 iconsAtIndexes:(id)arg1 ;
-(void)_updateLabelTypesAnimated:(BOOL)arg0 ;
-(void)_updateLabelTypesForMinimized:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updatePageFormatButtonForNavigationBarItem:(id)arg0 shouldResetDiscovery:(BOOL)arg1 ;
-(void)_updatePlaceholderText;
-(void)_updateProgressViewFillColor;
-(void)_updateSecurityAnnotation;
-(void)_updateShowsPrivateAnnotation;
-(void)_updateShowsProgressView;
-(void)_updateTitleContainerAlpha;
// -(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 afterImageDisappearsBlock:(id)arg4 afterDestinationLayerBouncesBlock:(unk)arg5  ;
-(void)animateSafariIconLinkFromPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)didCompleteBarRegistrationWithToken:(id)arg0 ;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg0 ;
-(void)navigationBarItemDidUpdateMediaStateIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateNeedsExtensionBadge:(id)arg0 ;
-(void)navigationBarItemDidUpdateSecurityAnnotation:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsExtensionsAvailability:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsLockIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsReaderButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg0 ;
-(void)navigationBarItemDidUpdateText:(id)arg0 ;
-(void)prepareForSizingNavigationBar:(id)arg0 ;
-(void)setMinimized:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityIdentifier;
-(void)updateConstraints;
-(void)willChangeToMinimized:(BOOL)arg0 coordinator:(id)arg1 ;


@end


#endif