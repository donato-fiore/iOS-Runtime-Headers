// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKCFACEDETAILCOLLECTIONCELL_H
#define _NTKCFACEDETAILCOLLECTIONCELL_H

@class UICollectionViewCell, UIImageView, CAShapeLayer, UIImage, NSString;


#import "_NTKCFaceDetailCollectionCellLabel.h"

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell {
    UIImageView *_imageView;
    CAShapeLayer *_outlineView;
    _NTKCFaceDetailCollectionCellLabel *_label;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat outlineOutset; // ivar: _outlineOutset
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) CGRect swatchFrame; // ivar: _swatchFrame
@property (nonatomic) NSInteger swatchImageContentMode; // ivar: _swatchImageContentMode
@property (retain, nonatomic) NSString *text; // ivar: _text


+(CGFloat)outlineLineWidth;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif