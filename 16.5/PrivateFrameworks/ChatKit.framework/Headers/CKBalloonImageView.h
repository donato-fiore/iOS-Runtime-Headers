// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBALLOONIMAGEVIEW_H
#define CKBALLOONIMAGEVIEW_H

@class UIView, UIImage, NSString;



@interface CKBalloonImageView : UIView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL imageHidden; // ivar: _imageHidden
@property (retain, nonatomic) UIImage *invisibleInkEffectImage; // ivar: _invisibleInkEffectImage
@property (retain, nonatomic) NSString *stickerAccessibilityDescription; // ivar: _stickerAccessibilityDescription


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif