// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASGRIDCOLLECTIONVIEWCELL_H
#define VIDEOSEXTRASGRIDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, UILabel;


#import "VideosExtrasConstrainedArtworkContainerView.h"

@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell {
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    NSLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
}


@property (readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainer; // ivar: _artworkContainer
@property (weak, nonatomic) IKLockupElement *lockupElement; // ivar: _lockupElement
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForLockup:(id)arg0 cellStyle:(id)arg1 ;
-(void)configureForLockup:(id)arg0 cellStyle:(id)arg1 withSizing:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif