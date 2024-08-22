// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITEFFECTCELL_H
#define PUPHOTOEDITEFFECTCELL_H

@class UICollectionViewCell, NSLayoutConstraint, NSArray, UIView, UIImageView, UILabel, UIImage, NSString;



@interface PUPhotoEditEffectCell : UICollectionViewCell {
    NSLayoutConstraint *_bottomLabelConstraint;
    NSLayoutConstraint *_gapConstraint;
    NSArray *_constraints;
}


@property (retain, nonatomic, setter=_setHighlightView:) UIView *_highlightView; // ivar: __highlightView
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // ivar: __imageView
@property (retain, nonatomic, setter=_setNameLabel:) UILabel *_nameLabel; // ivar: __nameLabel
@property (retain, nonatomic, setter=_setSelectionView:) UIImageView *_selectionView; // ivar: __selectionView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *name; // ivar: _name


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