// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITEFFECTCELL_H
#define PUPHOTOEDITEFFECTCELL_H

@class UICollectionViewCell, NSLayoutConstraint, NSArray, UIView, UIImage, UIImageView, NSString, UILabel;



@interface PUPhotoEditEffectCell : UICollectionViewCell {
    NSLayoutConstraint *_bottomLabelConstraint;
    NSLayoutConstraint *_gapConstraint;
    NSArray *_constraints;
}


@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UIImageView *selectionView; // ivar: _selectionView


+(id)selectionOutlineImage;
-(id)_colorForIsSelected:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setSubview:(id)arg0 visible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateConstraints;


@end


#endif