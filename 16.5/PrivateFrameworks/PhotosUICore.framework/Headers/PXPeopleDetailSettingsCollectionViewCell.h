// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEDETAILSETTINGSCOLLECTIONVIEWCELL_H
#define PXPEOPLEDETAILSETTINGSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSNumberFormatter, UIView, UIImageView, UIImage, NSString, UILabel;



@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {
    NSNumberFormatter *_quantityNumberFormatter;
    CGRect _unitRect;
}


@property (nonatomic, getter=isActionIndicatorHidden) BOOL actionIndicatorHidden;
@property (retain, nonatomic) UIView *actionIndicatorView; // ivar: _actionIndicatorView
@property (readonly, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) NSUInteger photoQuantity; // ivar: _photoQuantity
@property (retain, nonatomic) UILabel *quantityLabel; // ivar: _quantityLabel
@property (retain, nonatomic) UIView *selectionView; // ivar: _selectionView
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha


+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 forAvatarPercentage:(CGFloat)arg1 withSizeClass:(NSInteger)arg2 isFavorite:(BOOL)arg3 ;
-(CGFloat)avatarCenterYOffset;
-(NSInteger)_preferredSizeClass;
-(id)_placeHolderColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateType;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif