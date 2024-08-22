// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRISUGGESTIONSCOLLECTIONVIEWCELL_H
#define SIRISUGGESTIONSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIView, UIStackView, WBSForYouLinkRecommendation, NSLayoutConstraint, UIButton, _SFSiteIconView;
@protocol SiriSuggestionsCollectionViewCellDelegate;


#import "VibrantLabelView.h"

@interface SiriSuggestionsCollectionViewCell : UICollectionViewCell {
    VibrantLabelView *_titleLabel;
    VibrantLabelView *_addressLabel;
    VibrantLabelView *_footnoteLabel;
    UIImageView *_contactImageView;
    UIView *_labelContainerView;
    UIStackView *_contentStackView;
    WBSForYouLinkRecommendation *_linkRecommendation;
    NSLayoutConstraint *_buttonWidthConstraint;
    UIButton *_actionButton;
    UIImageView *_badgeView;
    NSLayoutConstraint *_actionButtonTrailingConstraint;
    BOOL _usesVibrantEffect;
    BOOL _isEditing;
    _SFSiteIconView *_iconView;
    UIView *_cardView;
    id<SiriSuggestionsCollectionViewCellDelegate> *_delegate;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectActionButton:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif