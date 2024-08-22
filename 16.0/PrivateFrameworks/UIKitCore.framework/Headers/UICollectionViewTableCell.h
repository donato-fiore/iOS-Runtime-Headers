// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWTABLECELL_H
#define UICOLLECTIONVIEWTABLECELL_H

@class NSMutableSet, NSString;
@protocol UITable_UITableViewCellDelegate;


#import "UICollectionViewCell.h"
#import "UIView.h"
#import "UIShadowView.h"
#import "UIColor.h"
#import "UICollectionViewLayout.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "UIScrollView.h"
#import "UITableViewCell.h"
#import "UICollectionViewTableLayoutAttributes.h"
#import "UICollectionViewTableLayout.h"
#import "UITableViewCollectionCell.h"

@interface UICollectionViewTableCell : UICollectionViewCell <UITable_UITableViewCellDelegate>

 {
    UIView *_swipeableView;
    UIShadowView *_borderShadowTopView;
    UIShadowView *_borderShadowBottomView;
    UIView *_selectedBackgroundViewToRestoreWhenInteractiveMoveEnds;
    NSInteger _accessoryType;
    NSMutableSet *_trackedAnimators;
    BOOL _editing;
    CGFloat _reorderingCenterX;
}


@property (readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property (nonatomic) NSInteger accessoryType;
@property (retain, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic, getter=_backgroundInset) CGFloat backgroundInset;
@property (nonatomic) BOOL borderShadowVisible; // ivar: _borderShadowVisible
@property (readonly, nonatomic, getter=_bottomPadding) CGFloat bottomPadding;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (readonly, nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;
@property (readonly, nonatomic, getter=_cellSafeAreaInsets) UIEdgeInsets cellSafeAreaInsets;
@property (weak, nonatomic) UICollectionViewLayout *currentLayout; // ivar: _currentLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) NSInteger editingAccessoryType;
@property (retain, nonatomic) UIView *editingAccessoryView;
@property (readonly, nonatomic, getter=_isEditingForSwipeDeletion) BOOL editingForSwipeDeletion;
@property (readonly, nonatomic) NSInteger editingStyle;
@property (readonly, nonatomic) CGFloat estimatedRowHeight;
@property (readonly, nonatomic) CGFloat estimatedSectionFooterHeight;
@property (readonly, nonatomic) CGFloat estimatedSectionHeaderHeight;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic, getter=_isInModalViewController) BOOL inModalViewController;
@property (readonly, nonatomic, getter=isInTableLayout) BOOL inTableLayout;
@property (nonatomic) NSInteger indentationLevel;
@property (nonatomic) CGFloat indentationWidth;
@property (readonly, nonatomic, getter=_indexBarExtentFromEdge) CGFloat indexBarExtentFromEdge;
@property (readonly, nonatomic, getter=_indexFrame) CGRect indexFrame;
@property (nonatomic) BOOL interactiveMoveEffectsVisible; // ivar: _interactiveMoveEffectsVisible
@property (retain, nonatomic) UIView *multipleSelectionBackgroundView;
@property (readonly, nonatomic, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;
@property (readonly, nonatomic, getter=_numberOfSections) NSInteger numberOfSections;
@property (nonatomic, getter=_offsetForRevealingDeleteConfirmationButton, setter=_setOffsetForRevealingDeleteConfirmationButton:) CGFloat offsetForRevealingDeleteConfirmationButton; // ivar: _offsetForRevealingDeleteConfirmationButton
@property (readonly, nonatomic) BOOL overlapsSectionHeaderViews;
@property (readonly, nonatomic, getter=_popoverControllerStyle) NSInteger popoverControllerStyle;
@property (readonly, nonatomic, getter=_rawSectionContentInset) UIEdgeInsets rawSectionContentInset;
@property (readonly, nonatomic, getter=_rawSeparatorInset) UIEdgeInsets rawSeparatorInset;
@property (readonly, nonatomic) CGFloat rowHeight;
@property (readonly, nonatomic, getter=_rowSpacing) CGFloat rowSpacing;
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property (readonly, nonatomic, getter=_sectionContentInset) UIEdgeInsets sectionContentInset;
@property (readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) BOOL sectionContentInsetFollowsLayoutMargins;
@property (readonly, nonatomic, getter=_sectionCornerRadius) CGFloat sectionCornerRadius;
@property (readonly, nonatomic) CGFloat sectionFooterHeight;
@property (readonly, nonatomic) CGFloat sectionHeaderHeight;
@property (readonly, nonatomic) BOOL selectionFollowsFocus;
@property (nonatomic) NSInteger selectionStyle;
@property (nonatomic) UIEdgeInsets separatorInset;
@property (readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) BOOL separatorInsetIsRelativeToCellEdges;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (readonly, nonatomic) BOOL showingDeleteConfirmation;
@property (readonly, nonatomic, getter=_isShowingIndex) BOOL showingIndex;
@property (nonatomic) BOOL showsReorderControl;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell; // ivar: _swipeToDeleteCell
@property (readonly, nonatomic) UIView *swipeableView;
@property (readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
@property (readonly, nonatomic, getter=_tableStyle) NSInteger tableStyle;
@property (retain, nonatomic) UITableViewCollectionCell *tableViewCell; // ivar: _tableViewCell
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic, getter=_topPadding) CGFloat topPadding;
@property (nonatomic) BOOL transitioningLayouts; // ivar: _transitioningLayouts
@property (readonly, nonatomic) BOOL usesVariableMargins;
@property (readonly, nonatomic, getter=_wasEditing) BOOL wasEditing;


-(BOOL)_beginReorderingForCell:(id)arg0 touch:(id)arg1 ;
-(BOOL)_canFocusCell:(id)arg0 ;
-(BOOL)_canPerformAction:(SEL)arg0 forCell:(id)arg1 sender:(id)arg2 ;
-(BOOL)_effectiveDefaultAllowsFocus;
-(BOOL)_isCellReorderable:(id)arg0 ;
-(BOOL)_isInteractiveMoveShadowInstalled;
-(BOOL)_isReorderControlActiveForCell:(id)arg0 ;
-(BOOL)_shouldDrawThickSeparators;
-(BOOL)_shouldHaveFooterViewForSection:(NSInteger)arg0 ;
-(BOOL)_shouldHaveHeaderViewForSection:(NSInteger)arg0 ;
-(BOOL)_shouldShowMenuForCell:(id)arg0 ;
-(BOOL)insetsContentViewsToSafeArea;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(CGFloat)_selectionAnimationDuration;
-(NSInteger)_cellFocusItemDeferral:(id)arg0 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)focusStyle;
-(id)_reorderingCell;
-(id)_titleForDeleteConfirmationButton:(id)arg0 ;
-(id)backgroundColor;
-(id)backgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)selectedBackgroundView;
-(struct CGRect )_calloutTargetRectForCell:(id)arg0 ;
-(struct UIEdgeInsets )_contentViewInset;
-(void)_accessoryButtonAction:(id)arg0 ;
-(void)_animateDeletionOfRowAtIndexPath:(id)arg0 ;
-(void)_animateDeletionOfRowWithCell:(id)arg0 ;
-(void)_cellDidBecomeFocused:(id)arg0 ;
-(void)_cellDidBecomeUnfocused:(id)arg0 ;
-(void)_cellDidHideSelectedBackground:(id)arg0 ;
-(void)_cellDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)_cellDidShowSelectedBackground:(id)arg0 ;
-(void)_commonSetupTableCell;
-(void)_didInsertRowForTableCell:(id)arg0 ;
-(void)_draggingReorderingCell:(id)arg0 yDelta:(CGFloat)arg1 touch:(id)arg2 ;
-(void)_endReorderingForCell:(id)arg0 wasCancelled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_headerFooterDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)_highlightCell:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 highlight:(BOOL)arg3 ;
-(void)_highlightDidEndForCell:(id)arg0 withInteraction:(id)arg1 ;
-(void)_insertInteractiveMoveShadowViews;
-(void)_layoutInteractiveMoveShadow;
-(void)_layoutTableViewCell;
-(void)_performAction:(SEL)arg0 forCell:(id)arg1 sender:(id)arg2 ;
-(void)_prepareHighlightForCell:(id)arg0 withInteraction:(id)arg1 ;
-(void)_removeInteractiveMoveShadowViews;
-(void)_setupForEditing:(BOOL)arg0 atIndexPath:(id)arg1 multiselect:(BOOL)arg2 editingStyle:(NSInteger)arg3 shouldIndentWhileEditing:(BOOL)arg4 showsReorderControl:(BOOL)arg5 accessoryType:(NSInteger)arg6 updateSeparators:(BOOL)arg7 ;
-(void)_swipeToDeleteCell:(id)arg0 ;
-(void)_trackAnimator:(id)arg0 ;
-(void)_updateCell:(id)arg0 withValue:(id)arg1 ;
-(void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg0 ;
-(void)_updateEditing;
-(void)_updateInternalCellForTableLayout:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_userSelectCell:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)awakeFromNib;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)didTransitionToState:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundView:(id)arg0 ;
-(void)setFocusStyle:(NSInteger)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelectedBackgroundView:(id)arg0 ;
-(void)updateCellForTableLayout:(BOOL)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif