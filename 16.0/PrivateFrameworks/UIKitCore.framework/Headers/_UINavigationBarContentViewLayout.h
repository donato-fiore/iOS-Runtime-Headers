// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARCONTENTVIEWLAYOUT_H
#define _UINAVIGATIONBARCONTENTVIEWLAYOUT_H

@class NSLayoutConstraint, NSArray, UIView<_UINavigationBarAugmentedTitleView>, NSString;
@protocol _UIButtonBarDelegate, _UINavigationBarLayoutParticipating;

#import <Foundation/Foundation.h>

#import "_UINavigationBarContentView.h"
#import "UITextField.h"
#import "UIView.h"
#import "UIBarButtonItemGroup.h"
#import "UIBarButtonItem.h"
#import "_UINavigationBarTitleRenamerSession.h"
#import "UIDeferredMenuElement.h"
#import "UITraitCollection.h"
#import "_UIButtonBarButton.h"
#import "_UIBarButtonItemData.h"
#import "UILayoutGuide.h"
#import "_UIButtonBar.h"
#import "UIDocumentProperties.h"
#import "_UIBarButtonItemSearchBarGroup.h"
#import "_UINavigationItemRenameHandler.h"
#import "_UINavigationBarTitleControl.h"

@interface _UINavigationBarContentViewLayout : NSObject <_UIButtonBarDelegate, _UINavigationBarLayoutParticipating>

 {
    _UINavigationBarContentView *_contentView;
    UITextField *_renamingContentView;
    UIView *_titleIconView;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;
    NSLayoutConstraint *_leadingBarToTitleSpacer;
    NSLayoutConstraint *_titleToCenterBarSpacer;
    NSLayoutConstraint *_centerBarToTrailingBarSpacer;
    NSLayoutConstraint *_titleToTrailingBarSpacer;
    NSArray *_layoutGuideConstraints;
    NSArray *_alignmentConstraints;
    NSArray *_heightConstraints;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;
    NSArray *_leadingBarConstraints;
    NSArray *_titleViewConstraints;
    NSArray *_renamingContentViewConstraints;
    NSArray *_augmentedTitleViewConstraints;
    NSArray *_centerBarConstraints;
    NSArray *_trailingBarConstraints;
    UIBarButtonItemGroup *_overflowGroup;
    UIBarButtonItem *_overflowItem;
    UIView *_titleViewSnapshot;
    BOOL _titleEnabled;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) _UINavigationBarTitleRenamerSession *activeRenamerSession; // ivar: _activeRenamerSession
@property (retain, nonatomic) UIDeferredMenuElement *additionalOverflowItems; // ivar: _additionalOverflowItems
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) UITraitCollection *augmentedTitleNavigationBarTraits; // ivar: _augmentedTitleNavigationBarTraits
@property (retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // ivar: _augmentedTitleView
@property (retain, nonatomic) _UIButtonBarButton *backButton; // ivar: _backButton
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // ivar: _backButtonAppearance
@property (readonly, nonatomic) UILayoutGuide *backButtonGuide; // ivar: _backButtonGuide
@property (readonly, nonatomic) CGFloat baseHeight;
@property (readonly, nonatomic) CGFloat baselineOffsetFromTop;
@property (readonly, nonatomic) _UIButtonBar *centerBar; // ivar: _centerBar
@property (retain, nonatomic) NSArray *centerBarGroups;
@property (readonly, nonatomic) UILayoutGuide *centerBarGuide; // ivar: _centerBarGuide
@property (nonatomic) NSInteger centerGroupsMode; // ivar: _centerGroupsMode
@property (readonly, copy, nonatomic) NSString *currentBackButtonTitle;
@property (readonly, nonatomic) ? currentButtonBarLayoutInfo; // ivar: _currentButtonBarLayoutInfo
@property (nonatomic) NSInteger currentContentSize; // ivar: _currentContentSize
@property (readonly, nonatomic) CGFloat currentHeight;
@property (copy, nonatomic) NSString *customizationIdentifier; // ivar: _customizationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDocumentProperties *documentProperties; // ivar: _documentProperties
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // ivar: _doneItemAppearance
@property (readonly, nonatomic) NSInteger expectedInactiveInlineSearchBarLayoutState;
@property (retain, nonatomic) UIBarButtonItemGroup *fixedTrailingGroup; // ivar: _fixedTrailingGroup
@property (nonatomic) BOOL hasFakedBackButton; // ivar: _hasFakedBackButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIBarButtonItemSearchBarGroup *inlineSearchBarGroup; // ivar: _inlineSearchBarGroup
@property (nonatomic) CGFloat inlineTitleViewAlpha; // ivar: _inlineTitleViewAlpha
@property (nonatomic) BOOL keepsSnapshotsInHierarchy; // ivar: _keepsSnapshotsInHierarchy
@property (nonatomic) CGFloat largeTitleHeight; // ivar: _largeTitleHeight
@property (nonatomic) ? largeTitleHeightRange; // ivar: _largeTitleHeightRange
@property (nonatomic) NSDirectionalEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly, nonatomic) _UIButtonBar *leadingBar; // ivar: _leadingBar
@property (readonly, nonatomic) UILayoutGuide *leadingBarGuide; // ivar: _leadingBarGuide
@property (readonly, nonatomic) UIView *leadingBarSnapshot; // ivar: _leadingBarSnapshot
@property (retain, nonatomic) NSArray *leadingGroups;
@property (nonatomic) BOOL leadingGroupsEnabled; // ivar: _leadingGroupsEnabled
@property (readonly, nonatomic) UIBarButtonItem *leadingVisibleItem;
@property (nonatomic) CGFloat maximumBackButtonWidth; // ivar: _maximumBackButtonWidth
@property (nonatomic) CGFloat minimumBackButtonWidth; // ivar: _minimumBackButtonWidth
@property (readonly, nonatomic) _UIButtonBarButton *overflowButton;
@property (readonly, nonatomic) UIBarButtonItem *overflowItem;
@property (nonatomic) CGFloat overrideHeight; // ivar: _overrideHeight
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // ivar: _plainItemAppearance
@property (retain, nonatomic) _UINavigationItemRenameHandler *renameHandler; // ivar: _renameHandler
@property (readonly, nonatomic) NSInteger resolvedAlignment; // ivar: _resolvedAlignment
@property (readonly, nonatomic) CGFloat resolvedHeight; // ivar: _resolvedHeight
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UINavigationBarTitleControl *titleControl; // ivar: _titleControl
@property (copy, nonatomic) id *titleMenuProvider; // ivar: _titleMenuProvider
@property (nonatomic) UIOffset titlePositionAdjustment; // ivar: _titlePositionAdjustment
@property (readonly, nonatomic) UILayoutGuide *titleViewGuide; // ivar: _titleViewGuide
@property (readonly, nonatomic) _UIButtonBar *trailingBar; // ivar: _trailingBar
@property (readonly, nonatomic) UILayoutGuide *trailingBarGuide; // ivar: _trailingBarGuide
@property (readonly, nonatomic) UIView *trailingBarSnapshot; // ivar: _trailingBarSnapshot
@property (readonly, nonatomic) UIBarButtonItem *trailingClippingItem;
@property (retain, nonatomic) NSArray *trailingGroups;
@property (nonatomic) BOOL trailingGroupsEnabled; // ivar: _trailingGroupsEnabled
@property (readonly, nonatomic) UIBarButtonItem *trailingVisibleItem;
@property (nonatomic) BOOL useLeadingAlignedTitle; // ivar: _useLeadingAlignedTitle


-(BOOL)_canCustomizeBar;
-(BOOL)_inActiveRenameSession;
-(BOOL)_overflowRequired;
-(BOOL)_renameShouldTakeOverContentView;
-(BOOL)canUpdateAdditionalOverflowItemsInPlace;
-(CGFloat)_contentHeight;
-(CGFloat)_idealBackButtonWidth;
-(CGFloat)_idealTitleWidth;
-(CGFloat)_inlineTitleBaselineOffset;
-(id)_fixedItemsMenu;
-(id)_newButtonBar;
-(id)initWithContentView:(id)arg0 ;
-(id)traitOverridesForChild:(id)arg0 ;
-(struct ? )_buttonBarLayoutInfo;
-(void)_activateAllConstraints;
-(void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg0 ;
-(void)_applyInlineTitleViewAlphaImmediately;
-(void)_createTitleControlIfNecessary;
-(void)_deactivateAllConstraints;
-(void)_deactivateConstraintsIfNecessary:(id)arg0 ;
-(void)_didTriggerRenameAction;
-(void)_disableLayoutFlushing:(BOOL)arg0 ;
-(void)_getInitialLeadingFreeSpace:(*CGFloat)arg0 trailingFreeSpace:(*CGFloat)arg1 layoutWidth:(*CGFloat)arg2 compressibleLeadingAllowance:(*CGFloat)arg3 ;
-(void)_prepareOverflowItem;
-(void)_setOverflowGroupHidden:(BOOL)arg0 ;
-(void)_setOverflowGroupVisibleForCalculation:(BOOL)arg0 ;
-(void)_updateAlignmentConstraints;
-(void)_updateAugmentedTitleViewConstraints;
-(void)_updateAugmentedTitleViewLayout;
-(void)_updateBackButtonConstraints;
-(void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
-(void)_updateCenterBarConstraints;
-(void)_updateConditionalGuideConstraintsForActiveLayout:(BOOL)arg0 ;
-(void)_updateDocumentIconViewIfNecessary;
-(void)_updateHeightConstraints;
-(void)_updateLeadingBarConstraints;
-(void)_updateMarginConstraints;
-(void)_updateRenamingContentViewConfiguration;
-(void)_updateRenamingContentViewConstraints;
-(void)_updateRenamingContentViewIfNecessary;
-(void)_updateSubviewOrder;
-(void)_updateTitleControl;
-(void)_updateTitleViewConstraints;
-(void)_updateTrailingBarConstraints;
-(void)buttonBarDidLayout:(id)arg0 ;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)configureWithTitle:(id)arg0 attributes:(id)arg1 compressionResistancePriority:(float)arg2 ;
-(void)configureWithTitleView:(id)arg0 compressionResistancePriority:(float)arg1 ;
-(void)configureWithoutTitle;
-(void)freeze;
-(void)layoutSubviews;
-(void)removeAllSnapshots;
-(void)removeContent;
-(void)replaceLeadingBarWithSnapshot;
-(void)replaceTitleViewWithSnapshot;
-(void)replaceTrailingBarWithSnapshot;
-(void)setContentHidden:(BOOL)arg0 ;
-(void)unfreeze;
-(void)updateAlphas;
-(void)updateAugmentedTitleViewBackButtonConstraints;
-(void)updateAugmentedTitleViewHeight;
-(void)updateAugmentedTitleViewLayout;
-(void)updateLayoutData:(id)arg0 layoutWidth:(CGFloat)arg1 ;
-(void)updateSpacingConstraints;
-(void)updateTitleHeight;


@end


#endif