// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARCONTENTVIEWLAYOUT_H
#define _UINAVIGATIONBARCONTENTVIEWLAYOUT_H

@class NSLayoutConstraint, NSArray, UIView<_UINavigationBarAugmentedTitleView>;

#import <Foundation/Foundation.h>

#import "UIBarButtonItemGroup.h"
#import "UITraitCollection.h"
#import "_UIButtonBarButton.h"
#import "_UIBarButtonItemData.h"
#import "UILayoutGuide.h"
#import "UIView.h"
#import "_UINavigationBarContentView.h"
#import "UILabel.h"
#import "_UIButtonBar.h"
#import "_UITAMICAdaptorView.h"

@interface _UINavigationBarContentViewLayout : NSObject {
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;
    NSLayoutConstraint *_leadingBarToTitleSpacer;
    NSLayoutConstraint *_titleToTrailingBarSpacer;
    NSArray *_layoutGuideConstraints;
    NSArray *_alignmentConstraints;
    NSArray *_heightConstraints;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;
    NSArray *_leadingBarConstraints;
    NSArray *_titleViewConstraints;
    NSArray *_augmentedTitleViewContraints;
    NSArray *_trailingBarConstraints;
    UIBarButtonItemGroup *_leadingBarGroup;
    UIBarButtonItemGroup *_trailingBarGroup;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) UITraitCollection *augmentedTitleNavigationBarTraits; // ivar: _augmentedTitleNavigationBarTraits
@property (retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // ivar: _augmentedTitleView
@property (retain, nonatomic) _UIButtonBarButton *backButton; // ivar: _backButton
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // ivar: _backButtonAppearance
@property (readonly, nonatomic) UILayoutGuide *backButtonGuide; // ivar: _backButtonGuide
@property (readonly, nonatomic) UIView *backButtonSnapshot; // ivar: _backButtonSnapshot
@property (readonly, nonatomic) CGFloat baseHeight;
@property (readonly, nonatomic) CGFloat baselineOffsetFromTop;
@property (readonly, nonatomic) _UINavigationBarContentView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger currentContentSize; // ivar: _currentContentSize
@property (readonly, nonatomic) CGFloat currentHeight;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // ivar: _doneItemAppearance
@property (readonly, nonatomic) UIView *effectiveTitleView;
@property (nonatomic) BOOL hasFakedBackButton; // ivar: _hasFakedBackButton
@property (retain, nonatomic) UILabel *inlineTitleView; // ivar: _inlineTitleView
@property (nonatomic) CGFloat inlineTitleViewAlpha; // ivar: _inlineTitleViewAlpha
@property (nonatomic) BOOL keepsSnapshotsInHierarchy; // ivar: _keepsSnapshotsInHierarchy
@property (nonatomic) CGFloat largeTitleHeight; // ivar: _largeTitleHeight
@property (nonatomic) ? largeTitleHeightRange; // ivar: _largeTitleHeightRange
@property (nonatomic) NSDirectionalEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (retain, nonatomic) _UIButtonBar *leadingBar; // ivar: _leadingBar
@property (readonly, nonatomic) UILayoutGuide *leadingBarGuide; // ivar: _leadingBarGuide
@property (retain, nonatomic) NSArray *leadingBarItems;
@property (readonly, nonatomic) UIView *leadingBarSnapshot; // ivar: _leadingBarSnapshot
@property (nonatomic) CGFloat maximumBackButtonWidth; // ivar: _maximumBackButtonWidth
@property (nonatomic) CGFloat minimumBackButtonWidth; // ivar: _minimumBackButtonWidth
@property (nonatomic) CGFloat overrideSize; // ivar: _overrideSize
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // ivar: _plainItemAppearance
@property (readonly, nonatomic) NSInteger resolvedAlignment; // ivar: _resolvedAlignment
@property (readonly, nonatomic) CGFloat resolvedSize; // ivar: _resolvedSize
@property (nonatomic) UIOffset titlePositionAdjustment; // ivar: _titlePositionAdjustment
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (readonly, nonatomic) UILayoutGuide *titleViewGuide; // ivar: _titleViewGuide
@property (readonly, nonatomic) UIView *titleViewSnapshot; // ivar: _titleViewSnapshot
@property (readonly, nonatomic) _UITAMICAdaptorView *titleViewWrapperView; // ivar: _titleViewWrapperView
@property (retain, nonatomic) _UIButtonBar *trailingBar; // ivar: _trailingBar
@property (readonly, nonatomic) UILayoutGuide *trailingBarGuide; // ivar: _trailingBarGuide
@property (retain, nonatomic) NSArray *trailingBarItems;
@property (readonly, nonatomic) UIView *trailingBarSnapshot; // ivar: _trailingBarSnapshot


-(CGFloat)_contentHeight;
-(CGFloat)_inlineTitleBaselineOffset;
-(id)description;
-(id)initWithContentView:(id)arg0 ;
-(id)traitOverridesForChild:(id)arg0 ;
-(void)_activateAllConstraints;
-(void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg0 ;
-(void)_deactivateAllConstraints;
-(void)_deactivateConstraintsIfNecessary:(id)arg0 ;
-(void)_disableLayoutFlushing:(BOOL)arg0 ;
-(void)_prepareTitleViewAndWrapIfNecessary;
-(void)_updateAlignmentConstraints;
-(void)_updateAugmentedTitleViewConstraints;
-(void)_updateAugmentedTitleViewLayout;
-(void)_updateBackButtonConstraints;
-(void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
-(void)_updateHeightConstraints;
-(void)_updateLeadingBarConstraints;
-(void)_updateMarginConstraints;
-(void)_updateSubviewOrder;
-(void)_updateTitleViewConstraints;
-(void)_updateTrailingBarConstraints;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)freeze;
-(void)removeAllSnapshots;
-(void)removeContent;
-(void)replaceBackButtonWithSnapshot;
-(void)replaceLeadingBarWithSnapshot;
-(void)replaceTitleViewWithSnapshot;
-(void)replaceTrailingBarWithSnapshot;
-(void)setContentHidden:(BOOL)arg0 ;
-(void)unfreeze;
-(void)updateAlphas;
-(void)updateAugmentedTitleViewBackButtonConstraints;
-(void)updateAugmentedTitleViewHeight;
-(void)updateAugmentedTitleViewLayout;
-(void)updateSpacingConstraints;
-(void)updateTitleHeight;


@end


#endif