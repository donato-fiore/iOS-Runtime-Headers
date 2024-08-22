// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIBUTTON_H
#define UIBUTTON_H

@class NSMutableDictionary, UIFont, NSAttributedString, NSString;
@protocol UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, UIMenuForcedAutomaticSelectionDelegate, UIButtonControl, NSCoding, _UIButtonConfigurationShim, UIButtonVisualProvider;


#import "UIControl.h"
#import "UITapGestureRecognizer.h"
#import "_UIButtonConfiguration.h"
#import "_UIButtonConfigurationState.h"
#import "UIColor.h"
#import "UILabel.h"
#import "UIButtonConfiguration.h"
#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"
#import "UIImageView.h"
#import "UIMenu.h"

@interface UIButton : UIControl <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, UIMenuForcedAutomaticSelectionDelegate, UIButtonControl, NSCoding>

 {
    NSUInteger _externalFlatEdge;
    ? _buttonVisualProviderFlags;
    id<_UIButtonConfigurationShim> *_configuration;
    NSMutableDictionary *_contentLookup;
    UIEdgeInsets _contentEdgeInsets;
    UIEdgeInsets _titleEdgeInsets;
    UIEdgeInsets _imageEdgeInsets;
    BOOL _initialized;
    NSUInteger _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    id<UIButtonVisualProvider> *_visualProvider;
    ? _buttonFlags;
    UIFont *_lazyTitleViewFont;
    BOOL _lazyTitleViewFontIsDefaultForIdiom;
}


@property (nonatomic, setter=_setAutomaticallyUpdatesButtonConfiguration:) BOOL _automaticallyUpdatesButtonConfiguration;
@property (nonatomic, setter=_setChangesSelectionAsPrimaryAction:) BOOL _changesSelectionAsPrimaryAction;
@property (copy, nonatomic, setter=_setConfiguration:) _UIButtonConfiguration *_configuration;
@property (readonly, copy, nonatomic) _UIButtonConfigurationState *_configurationState;
@property (copy, nonatomic, setter=_setConfigurationUpdateHandler:) id *_configurationUpdateHandler;
@property (retain, nonatomic, setter=_setCurrentConfiguration:) NSObject<_UIButtonConfigurationShim> *_currentConfiguration;
@property (readonly, retain, nonatomic) UIColor *_currentImageColor;
@property (nonatomic, getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:) BOOL _disableAutomaticTitleAnimations;
@property (setter=_setExternalFlatEdge:) NSUInteger _externalFlatEdge;
@property (nonatomic, setter=_setImageContentMode:) NSInteger _imageContentMode; // ivar: __imageContentMode
@property (nonatomic, setter=_setInternalTitlePaddingInsets:) UIEdgeInsets _internalTitlePaddingInsets; // ivar: _internalTitlePaddingInsets
@property (copy, nonatomic, setter=_setMenuProvider:) id *_menuProvider; // ivar: _menuProvider
@property (retain, nonatomic, getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:) UIColor *_plainButtonBackgroundColor; // ivar: __plainButtonBackgroundColor
@property (readonly, nonatomic) UILabel *_subtitleLabel;
@property (readonly, retain, nonatomic) NSObject<UIButtonVisualProvider> *_visualProvider;
@property (nonatomic, setter=_setWantsAccessibilityUnderline:) BOOL _wantsAccessibilityUnderline;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) BOOL adjustsImageWhenDisabled;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) BOOL automaticallyUpdatesConfiguration;
@property (readonly, nonatomic) NSUInteger behavioralStyle;
@property (readonly, nonatomic) NSInteger buttonType;
@property (nonatomic) BOOL changesSelectionAsPrimaryAction;
@property (copy, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) id *configurationUpdateHandler; // ivar: _configurationUpdateHandler
@property (nonatomic, getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:) BOOL contentBackgroundHidden;
@property (nonatomic) UIEdgeInsets contentEdgeInsets;
@property (readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property (readonly, nonatomic) UIImage *currentBackgroundImage;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *currentPreferredSymbolConfiguration;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly, nonatomic) UIColor *currentTitleColor;
@property (readonly, nonatomic) UIColor *currentTitleShadowColor;
@property (copy, nonatomic) id *cursorStyleProvider; // ivar: _cursorStyleProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHeld) BOOL held;
@property (readonly, nonatomic, getter=isHovered) BOOL hovered;
@property (nonatomic) UIEdgeInsets imageEdgeInsets;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) NSInteger lineBreakMode;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (copy, nonatomic) id *pointerStyleProvider; // ivar: _pointerStyleProvider
@property (nonatomic) NSUInteger preferredBehavioralStyle;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted;
@property (nonatomic) NSInteger role;
@property (nonatomic) BOOL showsTouchWhenHighlighted;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) UIEdgeInsets titleEdgeInsets;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) CGSize titleShadowOffset;


+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(BOOL)_buttonTypeIsModernUI:(NSInteger)arg0 ;
+(BOOL)_buttonTypeIsSystemProvided:(NSInteger)arg0 ;
+(BOOL)_buttonTypeIsiOSSystemProvided:(NSInteger)arg0 ;
+(CGFloat)_defaultNeighborSpacingForAxis:(NSInteger)arg0 ;
+(id)_defaultBackgroundImageColorForType:(NSInteger)arg0 andState:(NSUInteger)arg1 ;
+(id)_defaultBackgroundImageForType:(NSInteger)arg0 andState:(NSUInteger)arg1 ;
+(id)_defaultBackgroundImageNameForType:(NSInteger)arg0 andState:(NSUInteger)arg1 compact:(BOOL)arg2 ;
+(id)_defaultImageColorForState:(NSUInteger)arg0 button:(id)arg1 ;
+(id)_defaultImageColorForType:(NSInteger)arg0 andState:(NSUInteger)arg1 ;
+(id)_defaultImageForType:(NSInteger)arg0 andState:(NSUInteger)arg1 withConfiguration:(id)arg2 ;
+(id)_defaultImageNameForType:(NSInteger)arg0 andState:(NSUInteger)arg1 ;
+(id)_defaultNormalTitleColor;
+(id)_defaultNormalTitleShadowColor;
+(id)_defaultSymbolConfigurationForType:(NSInteger)arg0 andState:(NSUInteger)arg1 ;
+(id)_defaultSymbolConfigurationForType:(NSInteger)arg0 andState:(NSUInteger)arg1 compact:(BOOL)arg2 ;
+(id)_defaultTitleColorForState:(NSUInteger)arg0 button:(id)arg1 isTintColor:(*BOOL)arg2 ;
+(id)_systemButtonWithImage:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
+(id)buttonWithConfiguration:(id)arg0 primaryAction:(id)arg1 ;
+(id)buttonWithType:(NSInteger)arg0 ;
+(id)buttonWithType:(NSInteger)arg0 primaryAction:(id)arg1 ;
+(id)systemButtonWithImage:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
+(id)systemButtonWithPrimaryAction:(id)arg0 ;
+(void)_registerVisualProviderClass:(Class)arg0 forIdiom:(NSInteger)arg1 ;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
+(void)_setVisuallyHighlighted:(BOOL)arg0 forViews:(id)arg1 initialPress:(BOOL)arg2 ;
+(void)_setVisuallyHighlighted:(BOOL)arg0 forViews:(id)arg1 initialPress:(BOOL)arg2 baseAlpha:(CGFloat)arg3 ;
+(void)_setVisuallyHighlighted:(BOOL)arg0 forViews:(id)arg1 initialPress:(BOOL)arg2 highlightBlock:(id)arg3 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)_blurEnabled;
-(BOOL)_canHaveTitle;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_hasBaseline;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hasDrawingStyle;
-(BOOL)_hasHighlightColor;
-(BOOL)_hasImageForProperty:(id)arg0 ;
-(BOOL)_hasVisibleDefaultSelectionIndicator;
-(BOOL)_isCarPlaySystemTypeButton;
-(BOOL)_isEffectivelyDisabledExternalButton;
-(BOOL)_isInCarPlay;
-(BOOL)_isModernButton;
-(BOOL)_isOn;
-(BOOL)_isPopUpMenuButtonWithMenu:(id)arg0 ;
-(BOOL)_isSystemProvidedButton;
-(BOOL)_isTitleFrozen;
-(BOOL)_isToggleButton;
-(BOOL)_isiOSSystemProvidedButton;
-(BOOL)_likelyToHaveTitle;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)_pointerInteractionCanBeAssisted;
-(BOOL)_requiresLayoutForPropertyChange;
-(BOOL)_selectorOverridden:(SEL)arg0 ;
-(BOOL)_shouldAdjustToTraitCollection;
-(BOOL)_shouldHaveFloatingAppearance;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize )arg0 oldSize:(struct CGSize )arg1 ;
-(BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
-(BOOL)_supportsMacIdiom;
-(BOOL)_unconditionallyWantsSetBoundsFromISEngineLayout;
-(BOOL)_visualEffectViewEnabled;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(BOOL)autosizesToFit;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isSpringLoaded;
-(BOOL)scalesLargeContentImage;
-(CGFloat)_additionalBaselineSpacingForEdge:(int)arg0 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(id)arg1 nextToNeighbor:(id)arg2 edge:(int)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 ;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_baselineOffsetFromNearestEdgeForLayoutAttribute:(NSInteger)arg0 ;
-(CGFloat)_drawingStrokeForState:(NSUInteger)arg0 ;
-(CGFloat)_drawingStrokeForStyle:(NSInteger)arg0 ;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_highlightCornerRadius;
-(CGFloat)_preferredMaxLayoutWidth;
-(CGFloat)_scaleFactorForImage;
-(CGFloat)_selectedIndicatorAlpha;
-(NSInteger)_drawingStyleForState:(NSUInteger)arg0 ;
-(NSInteger)_drawingStyleForStroke:(CGFloat)arg0 ;
-(NSInteger)_externalDrawingStyleForState:(NSUInteger)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(NSUInteger)defaultAccessibilityTraits;
-(id)_allButtonContent;
-(id)_archivableContent:(*id)arg0 ;
-(id)_attributedSubtitleForState:(NSUInteger)arg0 ;
-(id)_attributedTitleForState:(NSUInteger)arg0 ;
-(id)_attributedTitleForState:(NSUInteger)arg0 adjustedToTraitCollection:(id)arg1 ;
-(id)_backgroundForState:(NSUInteger)arg0 usesBackgroundForNormalState:(*BOOL)arg1 ;
-(id)_backgroundView;
-(id)_borderColorForState:(NSUInteger)arg0 ;
-(id)_contentBackdropView;
-(id)_contentForState:(NSUInteger)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_createPointerInteraction;
-(id)_defaultFocusEffect;
-(id)_defaultFontForIdiom:(NSInteger)arg0 ;
-(id)_defaultImageForState:(NSUInteger)arg0 withConfiguration:(id)arg1 ;
-(id)_effectiveContentView;
-(id)_encodableSubviews;
-(id)_externalBorderColorForState:(NSUInteger)arg0 ;
-(id)_externalFocusedTitleColor;
-(id)_externalImageColorForState:(NSUInteger)arg0 ;
-(id)_externalTitleColorForState:(NSUInteger)arg0 isTintColor:(*BOOL)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(id)_imageColorForState:(NSUInteger)arg0 ;
-(id)_imageForState:(NSUInteger)arg0 applyingConfiguration:(BOOL)arg1 usesImageForNormalState:(*BOOL)arg2 ;
-(id)_layoutDebuggingTitle;
-(id)_lazyTitleViewFontIsDefaultForIdiom:(*BOOL)arg0 ;
-(id)_letterpressStyleForState:(NSUInteger)arg0 ;
-(id)_pointerEffect;
-(id)_pointerEffectPreviewParameters;
-(id)_pointerEffectWithPreview:(id)arg0 ;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)_preferredConfigurationForState:(NSUInteger)arg0 ;
-(id)_preferredConfigurationForState:(NSUInteger)arg0 includeDefault:(BOOL)arg1 ;
-(id)_selectedIndicatorViewWithImage:(id)arg0 ;
-(id)_selectionIndicatorView;
-(id)_shadowColorForState:(NSUInteger)arg0 ;
-(id)_shapeInContainer:(id)arg0 ;
-(id)_shapeInContainer:(id)arg0 proposal:(id)arg1 ;
-(id)_subtitleForState:(NSUInteger)arg0 ;
-(id)_titleColorForState:(NSUInteger)arg0 ;
-(id)_titleColorForState:(NSUInteger)arg0 suppressTintColorFollowing:(*BOOL)arg1 ;
-(id)_titleForState:(NSUInteger)arg0 ;
-(id)_titleOrImageViewForBaselineLayout;
-(id)_titleView;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg0 ;
-(id)attributedTitleForState:(NSUInteger)arg0 ;
-(id)backgroundImageForState:(NSUInteger)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)image;
-(id)imageForState:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 primaryAction:(id)arg1 ;
-(id)largeContentImage;
-(id)largeContentTitle;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)preferredSymbolConfigurationForImageInState:(NSUInteger)arg0 ;
-(id)title;
-(id)titleColorForState:(NSUInteger)arg0 ;
-(id)titleForState:(NSUInteger)arg0 ;
-(id)titleShadowColorForState:(NSUInteger)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)visualProviderClassForTraitCollection:(id)arg0 ;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGPoint )pressFeedbackPosition;
-(struct CGRect )_clippedHighlightBounds;
-(struct CGRect )_highlightBounds;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGRect )backgroundRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )_effectiveSizeForImage:(id)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )_roundSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct UIEdgeInsets )_combinedContentPaddingInsets;
-(struct UIEdgeInsets )_pathImageEdgeInsets;
-(struct UIEdgeInsets )_pathTitleEdgeInsets;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_applyCarPlaySystemButtonCustomizations;
-(void)_commonInitForPrimaryAction:(id)arg0 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_installSelectGestureRecognizer;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_invalidateForPropertyChange;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_refreshVisualProvider;
-(void)_refreshVisualProviderForTraitCollection:(id)arg0 ;
-(void)_refreshVisualProviderForTraitCollection:(id)arg0 populatingAPIProperties:(BOOL)arg1 ;
-(void)_resetLazyTitleViewFont;
-(void)_selectGestureChanged:(id)arg0 ;
-(void)_sendActionsForEvents:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(void)_setAttributedSubtitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setAttributedTitle:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setBackground:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setBlurEnabled:(BOOL)arg0 ;
-(void)_setContent:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setContentHuggingPriorities:(struct CGSize )arg0 ;
-(void)_setDefaultFontForIdiom;
-(void)_setDrawingStroke:(CGFloat)arg0 forState:(NSUInteger)arg1 ;
-(void)_setDrawingStyle:(NSInteger)arg0 forState:(NSUInteger)arg1 ;
-(void)_setFrame:(struct CGRect )arg0 deferLayout:(BOOL)arg1 ;
-(void)_setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setHighlightedWithoutUpdatingState:(BOOL)arg0 ;
-(void)_setImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setImageColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setImageColor:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setLazyTitleViewFont:(id)arg0 isDefaultForIdiom:(BOOL)arg1 ;
-(void)_setLetterpressStyle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setNeedsUpdateConfiguration;
-(void)_setOn:(BOOL)arg0 ;
-(void)_setShadowColor:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setShouldHandleScrollerMouseEvent:(BOOL)arg0 ;
-(void)_setSubtitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setTitle:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setTitleColor:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)_setTitleFrozen:(BOOL)arg0 ;
-(void)_setVisualEffectViewEnabled:(BOOL)arg0 backgroundColor:(id)arg1 ;
-(void)_setVisualProvider:(id)arg0 ;
-(void)_takeContentFromArchivableContent:(id)arg0 ;
-(void)_titleViewLabelMetricsChanged;
-(void)_uikit_applyValueFromTraitStorage:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_updateBaselineInformationDependentOnBounds;
-(void)_updateConfigurationUsingState:(id)arg0 ;
-(void)_updateContextMenuEnabled;
-(void)_updateForAutomaticSelection;
-(void)_willMoveToWindow:(id)arg0 ;
-(void)crossfadeToImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forcedSelectionOfMenu:(id)arg0 willChangeTo:(id)arg1 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setAutosizesToFit:(BOOL)arg0 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBackgroundImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)setContentVerticalAlignment:(NSInteger)arg0 ;
-(void)setDisabledDimsImage:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setNeedsLayout;
-(void)setNeedsUpdateConfiguration;
-(void)setPreferredSymbolConfiguration:(id)arg0 forImageInState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setShowPressFeedback:(BOOL)arg0 ;
-(void)setShowsMenuAsPrimaryAction:(BOOL)arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setTitleColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitleColor:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setTitleShadowColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitleShadowColor:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfiguration;
-(void)updateConstraints;


@end


#endif