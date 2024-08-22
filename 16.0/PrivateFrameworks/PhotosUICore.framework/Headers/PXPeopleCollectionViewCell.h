// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLECOLLECTIONVIEWCELL_H
#define PXPEOPLECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIButton, UIView, UIImage, NSString, UILabel;
@protocol PXPeopleCollectionViewCellDelegate;



@interface PXPeopleCollectionViewCell : UICollectionViewCell {
    CGRect _unitRect;
}


@property (readonly, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIButton *checkmarkCircle; // ivar: _checkmarkCircle
@property (retain, nonatomic) UIButton *checkmarkView; // ivar: _checkmarkView
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (retain, nonatomic) UIButton *favoriteBackgroundViewBackground; // ivar: _favoriteBackgroundViewBackground
@property (retain, nonatomic) UIButton *favoriteButton; // ivar: _favoriteButton
@property (retain, nonatomic) UIView *highlightOverlayView; // ivar: _highlightOverlayView
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (weak, nonatomic) NSObject<PXPeopleCollectionViewCellDelegate> *peopleCellDelegate; // ivar: _peopleCellDelegate
@property (nonatomic) BOOL ppt_fullImageLoaded; // ivar: _ppt_fullImageLoaded
@property (nonatomic) NSUInteger selectionStyle; // ivar: _selectionStyle
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (retain, nonatomic) UIButton *unfavoriteButton; // ivar: _unfavoriteButton


-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFocusRingForced:(BOOL)arg0 ;
-(void)_updateSelection;
-(void)_updateTitleAndFavoriteBadgeForLayoutChange;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)toggleFavorite:(id)arg0 ;


@end


#endif