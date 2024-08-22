// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPINNINGONBOARDINGTITLECELL_H
#define CKPINNINGONBOARDINGTITLECELL_H

@class UICollectionViewCell, UILayoutGuide, NSLayoutConstraint, UILabel;



@interface CKPinningOnboardingTitleCell : UICollectionViewCell

@property (nonatomic) BOOL isInCollapsedState; // ivar: _isInCollapsedState
@property (retain, nonatomic) UILayoutGuide *labelMarginGuide; // ivar: _labelMarginGuide
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginLayoutConstraint; // ivar: _leadingMarginLayoutConstraint
@property (nonatomic) NSInteger pinnedConversationViewLayoutStyle; // ivar: _pinnedConversationViewLayoutStyle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSLayoutConstraint *subtitleSpacingConstraint; // ivar: _subtitleSpacingConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginLayoutConstraint; // ivar: _trailingMarginLayoutConstraint


+(id)reuseIdentifier;
-(CGFloat)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(NSInteger)arg0 inCollapsedState:(BOOL)arg1 ;
-(void)updateConstraints;


@end


#endif