// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEGMENTEDCONTROL_H
#define UISEGMENTEDCONTROL_H

@class NSMutableArray, NSString;
@protocol _UIBasicAnimationFactory, UIPopoverPresentationControllerDelegate, _UIHostedFocusSystemDelegate, CAAnimationDelegate, NSCoding;


#import "UIControl.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UISegment.h"
#import "UIColor.h"
#import "UIVibrancyEffect.h"
#import "UILongPressGestureRecognizer.h"
#import "_UIHostedFocusSystem.h"

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, UIPopoverPresentationControllerDelegate, _UIHostedFocusSystemDelegate, CAAnimationDelegate, NSCoding>

 {
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    UIView *_backdropView;
    NSMutableArray *_segments;
    NSInteger _selectedSegment;
    NSInteger _highlightedSegment;
    NSInteger _selectionIndicatorSegment;
    NSInteger _hoveredSegment;
    UISegment *_focusedSegment;
    NSInteger _barStyle;
    id *_appearanceStorage;
    CGFloat _enabledAlpha;
    UIColor *_selectedSegmentTintColor;
    UIColor *_backgroundTintColor;
    UIVibrancyEffect *_selectedSegmentVibrancyEffect;
    CGFloat _innerSegmentSpacing;
    ? _segmentedControlFlags;
}


@property (getter=_animatingOutDynamicShadow, setter=_setAnimatingOutDynamicShdaow:) BOOL animatingOutDynamicShadow;
@property (nonatomic) BOOL apportionsSegmentWidthsByContent;
@property (retain, nonatomic) UILongPressGestureRecognizer *axLongPressGestureRecognizer; // ivar: _axLongPressGestureRecognizer
@property int controlSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_internalFocusSystem) _UIHostedFocusSystem *internalFocusSystem; // ivar: _internalFocusSystem
@property (nonatomic, getter=isMomentary) BOOL momentary;
@property (readonly, nonatomic) NSUInteger numberOfSegments;
@property (retain, nonatomic) UIView *removedSegment; // ivar: _removedSegment
@property (nonatomic) NSInteger segmentedControlStyle;
@property (nonatomic) NSInteger selectedSegmentIndex;
@property (retain, nonatomic) UIColor *selectedSegmentTintColor;
@property (readonly) Class superclass;
@property (readonly, getter=_useDynamicShadow) BOOL useDynamicShadow;


+(BOOL)_selectFocusedSegmentAfterFocusUpdateForTraitCollection:(id)arg0 ;
+(BOOL)_updateDynamicShadowView:(id)arg0 withAnimationDelegate:(id)arg1 useDynamicShadow:(BOOL)arg2 animated:(BOOL)arg3 ;
+(BOOL)_useShadowForSelectedTintColor:(id)arg0 traitCollection:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(CGFloat)_cornerRadiusForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_defaultHeight;
+(CGFloat)_defaultHeightForIdiom:(NSInteger)arg0 size:(int)arg1 ;
+(CGFloat)_defaultHeightForTraitCollection:(id)arg0 ;
+(CGFloat)_defaultHeightForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_dividerWidthForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_lineWidthForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_sectionIndicatorInsetForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_sectionIndicatorOverflowForTraitCollection:(id)arg0 size:(int)arg1 ;
+(CGFloat)_selectionOffsetAdjustmentForSegment:(id)arg0 ;
+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightForStyle:(NSInteger)arg0 ;
+(CGFloat)defaultHeightForStyle:(NSInteger)arg0 size:(int)arg1 ;
+(id)_fontForTraitCollection:(id)arg0 size:(int)arg1 selected:(BOOL)arg2 ;
+(id)_modernBackgroundSelected:(BOOL)arg0 disableShadow:(BOOL)arg1 maximumSize:(struct CGSize )arg2 highlighted:(BOOL)arg3 traitCollection:(id)arg4 tintColor:(id)arg5 size:(int)arg6 ;
+(id)_modernDividerImageBackground:(BOOL)arg0 traitCollection:(id)arg1 tintColor:(id)arg2 size:(int)arg3 ;
+(id)_selectionOpacityAnimationFromValue:(float)arg0 toValue:(float)arg1 ;
+(id)_selectionPopAnimationForKey:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
+(struct CATransform3D )_hiddenSelectionTransformForTraitCollection:(id)arg0 ;
+(struct CATransform3D )_highlightSelectionTransformForTraitCollection:(id)arg0 ;
+(struct CGColor *)_backgroundPrimaryColorSelected:(BOOL)arg0 highlighted:(BOOL)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 ;
+(struct CGColor *)_dividerPrimaryColorBackground:(BOOL)arg0 traitCollection:(id)arg1 tintColor:(id)arg2 ;
+(struct CGRect )_selectionFrameForBounds:(struct CGRect )arg0 size:(int)arg1 traitCollection:(id)arg2 accessibilityView:(BOOL)arg3 ;
+(void)_registerStyleProvider:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_alwaysEmitValueChanged;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_disableSlidingControl;
-(BOOL)_focusSystem:(id)arg0 containsChildOfHostEnvironment:(id)arg1 ;
-(BOOL)_hasEnabledSegment;
-(BOOL)_shouldConsumeEventWithPresses:(id)arg0 ;
-(BOOL)_shouldSelectSegmentAtIndex:(NSInteger)arg0 ;
-(BOOL)_usesNewAnimations;
-(BOOL)adjustsForContentSizeCategory;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isEnabledForSegment:(NSUInteger)arg0 ;
-(BOOL)isEnabledForSegmentAtIndex:(NSUInteger)arg0 ;
-(BOOL)isSpringLoaded;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(BOOL)transparentBackground;
-(BOOL)useBlockyMagnificationInClassic;
-(CGFloat)_backgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)_barHeight;
-(CGFloat)_interSegmentSpacing;
-(CGFloat)widthForSegmentAtIndex:(NSUInteger)arg0 ;
-(NSInteger)_segmentIndexToHighlight:(*BOOL)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)barStyle;
-(NSInteger)segmentControlStyle;
-(NSInteger)segmentIndexForActionIdentifier:(id)arg0 ;
-(NSInteger)selectedSegment;
-(NSUInteger)_controlEventsForActionTriggered;
-(float)widthForSegment:(NSUInteger)arg0 ;
-(id)_attributedTitleForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)_backgroundTintColor;
-(id)_badgeValueForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_createAndAddSegmentAtIndex:(int)arg0 position:(unsigned int)arg1 withInfo:(id)arg2 ;
-(id)_createSegmentAtIndex:(int)arg0 position:(unsigned int)arg1 withInfo:(id)arg2 ;
-(id)_defaultFocusEffect;
-(id)_focusMapContainerForFocusSystem:(id)arg0 ;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg0 ;
-(id)_segmentAtIndex:(int)arg0 ;
-(id)_selectedSegmentVibrancyEffect;
-(id)_tintColorArchivingKey;
-(id)_uiktest_labelsWithState:(NSUInteger)arg0 ;
-(id)_uiktest_segmentAtIndex:(NSUInteger)arg0 ;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg0 ;
-(id)_viewToAddFocusLayer;
-(id)actionForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(id)imageForSegment:(NSUInteger)arg0 ;
-(id)imageForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)infoViewForSegment:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 actions:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 withStyle:(NSInteger)arg1 withItems:(id)arg2 ;
-(id)initWithItems:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)titleForSegment:(NSUInteger)arg0 ;
-(id)titleForSegmentAtIndex:(NSUInteger)arg0 ;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)viewForLastBaselineLayout;
-(int)_closestSegmentIndexAtPoint:(struct CGPoint )arg0 ;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGRect )bounds;
-(struct CGRect )frame;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )contentOffsetForSegment:(NSUInteger)arg0 ;
-(struct CGSize )contentOffsetForSegmentAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIOffset )contentPositionAdjustmentForSegmentType:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(void)__initWithFrameCommonOperations;
// -(void)_animateContentChangeWithAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)_axLongPressHandler:(id)arg0 ;
-(void)_cancelDelayedFocusAction;
-(void)_clearSelectedSegment;
-(void)_commonSegmentedControlInit;
-(void)_diagnoseFocusabilityForReport:(id)arg0 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_emitValueChanged;
-(void)_focusSystem:(id)arg0 didFinishUpdatingFocusInContext:(id)arg1 ;
-(void)_highlightSegment:(NSInteger)arg0 ;
-(void)_insertSegment:(int)arg0 withInfo:(id)arg1 animated:(BOOL)arg2 ;
-(void)_insertSegmentWithAttributedTitle:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_insertSelectionViewForSegment:(id)arg0 ;
-(void)_installVisualStyleDefaults;
-(void)_resetForAppearanceChange;
-(void)_selectFocusedSegment;
-(void)_sendDelayedFocusActionIfNecessary;
-(void)_sendValueChanged;
-(void)_setAction:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)_setAlwaysEmitValueChanged:(BOOL)arg0 ;
-(void)_setAppearanceIsTiled:(BOOL)arg0 leftCapWidth:(NSUInteger)arg1 rightCapWidth:(NSUInteger)arg2 ;
-(void)_setAttributedTitle:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)_setAutosizeText:(BOOL)arg0 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackgroundTintColor:(id)arg0 ;
-(void)_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBadgeValue:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)_setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_setEnabled:(BOOL)arg0 forcePropagateToSegments:(BOOL)arg1 ;
-(void)_setHighlightedSegmentHighlighted:(BOOL)arg0 ;
-(void)_setHoverOnSegment:(NSInteger)arg0 hovered:(BOOL)arg1 ;
-(void)_setInterSegmentSpacing:(CGFloat)arg0 ;
-(void)_setNeedsAppearanceUpdate;
-(void)_setNeedsBackgroundAndContentViewUpdate;
-(void)_setSegmentedControlAppearance:(struct ? *)arg0 ;
-(void)_setSelected:(BOOL)arg0 forSegmentAtIndex:(int)arg1 forceInfoDisplay:(BOOL)arg2 ;
-(void)_setSelected:(BOOL)arg0 highlighted:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3 ;
-(void)_setSelectedSegmentVibrancyEffect:(id)arg0 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setUsesNewAnimations:(BOOL)arg0 ;
-(void)_tapSegmentAtPoint:(struct CGPoint )arg0 touchDown:(BOOL)arg1 ;
-(void)_updateAxLongPressGestureRecognizer;
-(void)_updateDividerImageForSegmentAtIndex:(NSUInteger)arg0 ;
-(void)_updateDynamicShadow:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateSelectionIndicator;
-(void)_updateSelectionToSegment:(id)arg0 highlight:(BOOL)arg1 shouldAnimate:(BOOL)arg2 sameSegment:(BOOL)arg3 ;
-(void)addSegmentWithTitle:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)hoverOffSegment:(NSInteger)arg0 ;
-(void)hoverOnSegment:(NSInteger)arg0 ;
-(void)insertSegment:(NSUInteger)arg0 withImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertSegment:(NSUInteger)arg0 withTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertSegmentWithAction:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertSegmentWithImage:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)insertSegmentWithTitle:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)removeAllSegments;
-(void)removeSegment:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)removeSegmentAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)selectSegment:(int)arg0 ;
-(void)setAction:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg0 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg0 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentOffset:(struct CGSize )arg0 forSegment:(NSUInteger)arg1 ;
-(void)setContentOffset:(struct CGSize )arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setContentPositionAdjustment:(struct UIOffset )arg0 forSegmentType:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setImage:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setImagePadding:(struct CGSize )arg0 forSegment:(NSUInteger)arg1 ;
-(void)setSegmentControlStyle:(NSInteger)arg0 ;
-(void)setSelectedSegment:(NSInteger)arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTransparentBackground:(BOOL)arg0 ;
-(void)setWidth:(CGFloat)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setWidth:(float)arg0 forSegment:(NSUInteger)arg1 ;
-(void)sizeToFit;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForMiniBarState:(BOOL)arg0 ;


@end


#endif