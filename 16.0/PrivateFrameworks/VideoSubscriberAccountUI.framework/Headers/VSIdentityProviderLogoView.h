// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERLOGOVIEW_H
#define VSIDENTITYPROVIDERLOGOVIEW_H

@class UIView, UIImageView, UIImage;



@interface VSIdentityProviderLogoView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImage *logo;
@property (readonly, nonatomic) CGFloat marginLength;
@property (readonly, nonatomic) CGSize preferredImageSize;


-(CGFloat)_height;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif