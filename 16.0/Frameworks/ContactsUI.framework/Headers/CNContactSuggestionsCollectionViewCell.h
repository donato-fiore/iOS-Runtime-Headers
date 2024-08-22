// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSUGGESTIONSCOLLECTIONVIEWCELL_H
#define CNCONTACTSUGGESTIONSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, NSString, UIImage, UILabel;



@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIImageView *checkImageBackgroundView; // ivar: _checkImageBackgroundView
@property (retain, nonatomic) UIImageView *checkImageView; // ivar: _checkImageView
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


+(id)cellIdentifier;
-(BOOL)useAccessibleLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setCheckMarkHidden:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setUpCheckMarkConstraints;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif