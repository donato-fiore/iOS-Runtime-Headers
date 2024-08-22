// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFICONCOLLECTIONVIEWCELL_IOS_H
#define PDFICONCOLLECTIONVIEWCELL_IOS_H

@class UICollectionViewCell, UIView, NSLayoutConstraint, UIButton, UIImageView;


#import "PDFPage.h"

@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell {
    UIView *_overlayView;
    NSLayoutConstraint *_ratioConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
}


@property (retain, nonatomic) UIButton *actionsButton; // ivar: _actionsButton
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) PDFPage *page; // ivar: _page


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)prepareForReuse;
-(void)setNeedsUpdate;
-(void)setSelected:(BOOL)arg0 ;
-(void)setThumbnailWidth:(CGFloat)arg0 ;
-(void)setupSubviews;
-(void)updateAspectConstraintWithSize:(struct CGSize )arg0 ;
-(void)updateOverlay;


@end


#endif