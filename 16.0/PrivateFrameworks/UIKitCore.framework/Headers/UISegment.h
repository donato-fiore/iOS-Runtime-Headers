// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEGMENT_H
#define UISEGMENT_H

@class UIView<UISegmentBezelView>, NSString, NSArray;
@protocol CAAnimationDelegate, UISegmentProtocol;


#import "UIImageView.h"
#import "UIView.h"
#import "_UISegmentedControlAppearanceStorage.h"
#import "_UIFloatingContentView.h"
#import "_UIBadgeView.h"
#import "UIAction.h"

@interface UISegment : UIImageView <CAAnimationDelegate, UISegmentProtocol>

 {
    UIView *_info;
    UIImageView *_backgroundView;
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    UIView<UISegmentBezelView> *_bezelView;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    _UIFloatingContentView *_floatingContentView;
    CGFloat _width;
    CGSize _contentOffset;
    NSInteger _barStyle;
    NSUInteger _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id *_objectValue;
    ? _segmentFlags;
}


@property (copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints; // ivar: _infoConstraints
@property (copy, nonatomic) UIAction *action; // ivar: _action
@property (copy, nonatomic) NSString *badgeValue;
@property (readonly) UIView *badgeView;
@property (readonly, nonatomic) int controlSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isMomentary) BOOL momentary;
@property (nonatomic) CGFloat requestedScaleFactor; // ivar: _requestedScaleFactor
@property (readonly, nonatomic, getter=isRightHighlighted) BOOL rightHighlighted;
@property (readonly, nonatomic, getter=isRightSelected) BOOL rightSelected;
@property (nonatomic) unsigned int segmentPosition;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;


+(id)_backgroundImageWithStorage:(id)arg0 mini:(BOOL)arg1 state:(NSUInteger)arg2 position:(unsigned int)arg3 drawMode:(*unsigned int)arg4 isCustom:(*BOOL)arg5 defaultBlock:(id)arg6 ;
-(BOOL)_effectiveDisableShadow;
-(BOOL)_effectiveUseDynamicShadow;
-(BOOL)_hasSelectedColor;
-(BOOL)_isContainedInHostedFocusSystem;
-(BOOL)canBecomeFocused;
-(BOOL)isAnimatingSelectionIndicator;
-(BOOL)isHovered;
-(BOOL)isSelectionIndicatorDragged;
-(BOOL)showDivider;
-(BOOL)useBlockyMagnificationInClassic;
-(CGFloat)_barHeight;
-(CGFloat)_idealWidth;
-(Class)_segmentedControlClass;
-(NSUInteger)_segmentState;
-(id)_attributedTextForState:(NSUInteger)arg0 selected:(BOOL)arg1 forceSelectedAppearance:(BOOL)arg2 ;
-(id)_dividerImage;
-(id)_dividerImageIsCustom:(*BOOL)arg0 ;
-(id)_effectiveBackgroundTintColor;
-(id)_effectiveBackgroundView;
-(id)_effectiveContentView;
-(id)_effectiveSelectedSegmentTintColor;
-(id)_effectiveVibrancyEffect;
-(id)_encodableSubviews;
-(id)_floatingContentView;
-(id)_parentSegmentedControl;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)_segmentLabel;
-(id)_stateTextAttibutes:(id)arg0 segmentState:(NSUInteger)arg1 ;
-(id)_tintColorArchivingKey;
-(id)disabledTextColor;
-(id)focusEffect;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 size:(int)arg1 barStyle:(NSInteger)arg2 tintColor:(id)arg3 appearanceStorage:(id)arg4 position:(unsigned int)arg5 autosizeText:(BOOL)arg6 adjustsForContentSizeCategory:(BOOL)arg7 traitCollection:(id)arg8 ;
-(id)label;
-(id)objectValue;
-(id)viewForLastBaselineLayout;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CATransform3D )_highlightSelectionInfoTransform;
-(struct CGRect )_contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )contentRect;
-(struct CGSize )_maximumTextSize;
-(struct CGSize )contentSize;
-(struct UIEdgeInsets )_paddingInsets;
-(void)_finishInitialSegmentSetup;
-(void)_forceInfoDisplay;
-(void)_insertSelectionView;
-(void)_invalidateInfoConstraints;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_positionInfo;
-(void)_positionInfoWithoutAnimation;
-(void)_removeSelectionIndicator;
-(void)_setEnabledAppearance:(BOOL)arg0 ;
-(void)_setSelectionIndicatorDragged:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateBackgroundAndContentViews;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(void)_updateDynamicShadow:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateFloatingContentControlState:(NSUInteger)arg0 context:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateHighlight;
-(void)_updateSelectionIndicator;
-(void)_updateSelectionToTransform:(struct CATransform3D )arg0 infoTransform:(struct CATransform3D )arg1 hideSelection:(BOOL)arg2 shouldAnimate:(BOOL)arg3 ;
-(void)_updateTextColors;
-(void)animateAdd:(BOOL)arg0 ;
-(void)animateRemoveForWidth:(CGFloat)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertDividerView;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg0 ;
-(void)setAnimatingSelectionIndicator:(BOOL)arg0 ;
-(void)setAutosizeText:(BOOL)arg0 ;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentOffset:(struct CGSize )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHovered:(BOOL)arg0 ;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(void)setObjectValue:(id)arg0 ;
-(void)setSelectionIndicatorDragged:(BOOL)arg0 ;
-(void)setShowDivider:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setUsesAXTextSize:(BOOL)arg0 ;
-(void)setWasSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateDividerViewForChangedSegment:(id)arg0 ;
-(void)updateForAppearance:(id)arg0 ;
-(void)updateMasking;


@end


#endif