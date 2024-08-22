// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBROWSECATEGORYCOLLECTIONVIEWCELL_H
#define MUBROWSECATEGORYCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIFont, UILabel, NSLayoutConstraint;


#import "MUBrowseCategoryItem.h"

@interface MUBrowseCategoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MUBrowseCategoryItem *browseItem; // ivar: _browseItem
@property (retain, nonatomic) UIImageView *highlightedImageView; // ivar: _highlightedImageView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (retain, nonatomic) UIFont *preferredTitleLabelFont; // ivar: _preferredTitleLabelFont
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // ivar: _titleLabelTopConstraint


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif