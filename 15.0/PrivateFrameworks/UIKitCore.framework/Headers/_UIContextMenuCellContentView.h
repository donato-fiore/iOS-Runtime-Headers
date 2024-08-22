// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUCELLCONTENTVIEW_H
#define _UICONTEXTMENUCELLCONTENTVIEW_H

@class NSLayoutConstraint, NSArray, UISPasteVariant;


#import "UIView.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "UIStackView.h"
#import "_UISlotView.h"

@interface _UIContextMenuCellContentView : UIView

@property (retain, nonatomic) UILabel *emphasizedTitleLabel; // ivar: _emphasizedTitleLabel
@property (retain, nonatomic) UIImageView *emphasizedTrailingImageView; // ivar: _emphasizedTrailingImageView
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) NSLayoutConstraint *labelStackViewTrailingToTrailingViewCenterX; // ivar: _labelStackViewTrailingToTrailingViewCenterX
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineToBottom; // ivar: _lastBaselineToBottom
@property (retain, nonatomic) UIImageView *leadingImageView; // ivar: _leadingImageView
@property (retain, nonatomic) NSLayoutConstraint *leadingToLabelStackViewLeading; // ivar: _leadingToLabelStackViewLeading
@property (retain, nonatomic) NSLayoutConstraint *leadingViewCenterX; // ivar: _leadingViewCenterX
@property (retain, nonatomic) NSArray *managedConstraints; // ivar: _managedConstraints
@property (readonly, nonatomic) NSUInteger measuredNumberOfTitleLines;
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // ivar: _minHeightConstraint
@property (nonatomic) BOOL needsConstraintRebuild; // ivar: _needsConstraintRebuild
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // ivar: _nonSymbolImageHeight
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // ivar: _nonSymbolImageWidth
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger overrideNumberOfTitleLines; // ivar: _overrideNumberOfTitleLines
@property (retain, nonatomic) UISPasteVariant *pasteVariant; // ivar: _pasteVariant
@property (nonatomic) NSUInteger preferredLineLimit; // ivar: _preferredLineLimit
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView; // ivar: _securePasteButtonSlotView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *topToFirstBaseline; // ivar: _topToFirstBaseline
@property (retain, nonatomic) UIImageView *trailingImageView; // ivar: _trailingImageView
@property (readonly, nonatomic) UIView *trailingView;
@property (retain, nonatomic) NSLayoutConstraint *trailingViewCenterXToTrailing; // ivar: _trailingViewCenterXToTrailing


-(id)_childIndicatorImage;
-(id)_contentImageViewForImage:(id)arg0 ;
-(id)_leadingSymbolImageConfiguration;
-(id)_primaryContentColorForCurrentState;
-(id)_primaryTitleLabel;
-(id)_selectionImage;
-(id)_subtitleTextColor;
-(id)_symbolConfigurationForCurrentTraitsUsingBoldFont:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_maxImageSize;
-(void)_hideContents;
-(void)_installLabelStackViewIfNeeded;
-(void)_installTitleLabelIfNeeded;
-(void)_setupSecureView;
-(void)_updateAppearanceForStateChange;
-(void)_updateAttachedConstraintsForViewHierarchyChange;
-(void)_updateForOptionsChangeFromPreviousOptions:(NSUInteger)arg0 ;
-(void)_updateTitleLabelNumberOfLines;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setLeadingImage:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTrailingImage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif