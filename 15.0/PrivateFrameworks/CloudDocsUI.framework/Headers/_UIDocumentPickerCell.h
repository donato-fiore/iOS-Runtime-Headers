// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERCELL_H
#define _UIDOCUMENTPICKERCELL_H

@class UICollectionViewTableCell, UILongPressGestureRecognizer, NSArray, UIView, NSLayoutConstraint, UIProgressView, UIImageView, NSMutableArray, UILabel;


#import "_UIDocumentPickerDocumentCollectionViewController.h"
#import "_UIDocumentPickerContainerItem.h"

@interface _UIDocumentPickerCell : UICollectionViewTableCell

@property (retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // ivar: _actionGestureRecognizer
@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (retain, nonatomic) UIView *cachedSelectedBackgroundView; // ivar: _cachedSelectedBackgroundView
@property (nonatomic) NSInteger cellStyle; // ivar: _cellStyle
@property (weak, nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSArray *gridConstraints; // ivar: _gridConstraints
@property (retain, nonatomic) NSLayoutConstraint *indentationConstraint; // ivar: _indentationConstraint
@property (retain, nonatomic) UIView *indentationHelperView; // ivar: _indentationHelperView
@property (retain, nonatomic) NSArray *indentedConstraints; // ivar: _indentedConstraints
@property (retain, nonatomic) _UIDocumentPickerContainerItem *item; // ivar: _item
@property (retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // ivar: _pickableDiagnosticGestureRecognizer
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) UIImageView *selectionView; // ivar: _selectionView
@property (retain, nonatomic) NSMutableArray *selectionViewConstraints; // ivar: _selectionViewConstraints
@property (retain, nonatomic) UIView *selectionViewsThumbnailView; // ivar: _selectionViewsThumbnailView
@property (retain, nonatomic) UILabel *subtitle2Label; // ivar: _subtitle2Label
@property (retain, nonatomic) UILabel *subtitleJoiner; // ivar: _subtitleJoiner
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSArray *tableConstraints; // ivar: _tableConstraints
@property (retain, nonatomic) UIImageView *tagView; // ivar: _tagView
@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // ivar: _thumbnailCenterHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // ivar: _thumbnailCenterWidthConstraint
@property (retain, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic, getter=isTransitioningLayout) BOOL transitioningLayout; // ivar: _transitioningLayout


+(id)_subtitleFontForTable:(BOOL)arg0 ;
+(id)_titleFontForTable:(BOOL)arg0 ;
+(struct CGSize )defaultSizeForCellStyle:(NSInteger)arg0 traitCollection:(id)arg1 ;
+(struct CGSize )thumbnailSizeForTraits:(id)arg0 cellStyle:(NSInteger)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)_activityAction:(id)arg0 ;
-(void)_deleteAction:(id)arg0 ;
-(void)_dynamicTypeSizeChanged:(id)arg0 ;
-(void)_infoAction:(id)arg0 ;
-(void)_moreAction:(id)arg0 ;
-(void)_moveAction:(id)arg0 ;
-(void)_renameAction:(id)arg0 ;
-(void)_showActions:(id)arg0 ;
-(void)_showPickableDiagnostic;
-(void)_udpateLabelAlpha;
-(void)_updateAccessoryType;
-(void)_updateConstraintsForCellStyle;
-(void)_updateFonts;
-(void)_updateIconSize;
-(void)_updateSelectionState:(BOOL)arg0 ;
-(void)_updateSeparatorInset;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)prepareForReuse;
-(void)reloadItem:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateActionGestureRecognizer;
-(void)updateForEditingState:(BOOL)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;


@end


#endif