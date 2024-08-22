// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEMPTYCONTENTPLACEHOLDERVIEW_H
#define SKUIEMPTYCONTENTPLACEHOLDERVIEW_H

@class UIView, UIImageView, UILabel, UIButton, UIImage, NSString;



@interface SKUIEmptyContentPlaceholderView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}


@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) UIEdgeInsets placeholderImageInsets; // ivar: _imageInsets
@property (copy, nonatomic) NSString *placeholderMessage;
@property (readonly, nonatomic) UILabel *placeholderMessageLabel;
@property (nonatomic) BOOL showsSignInButton;
@property (readonly, nonatomic) UIButton *signInButton;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)maskPlaceholdersInBackdropView:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif