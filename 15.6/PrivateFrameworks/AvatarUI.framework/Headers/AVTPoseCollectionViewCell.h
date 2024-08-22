// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPOSECOLLECTIONVIEWCELL_H
#define AVTPOSECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSUUID, UIImage, UIImageView, UIViewPropertyAnimator, CAShapeLayer;



@interface AVTPoseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSUUID *contextIdentifier; // ivar: _contextIdentifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIViewPropertyAnimator *scaleDownTransformAnimator; // ivar: _scaleDownTransformAnimator
@property (retain, nonatomic) UIViewPropertyAnimator *scaleUpWithBounceTransformAnimator; // ivar: _scaleUpWithBounceTransformAnimator
@property (retain, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer
@property (retain, nonatomic) UIImageView *transitionImageView; // ivar: _transitionImageView


+(struct CGPath *)selectionPathInBounds:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelAnimations;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImage:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif