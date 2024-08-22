// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMCAMERALANDINGVIEW_H
#define SKUIREDEEMCAMERALANDINGVIEW_H

@class UIView, UILabel, UIImageView, UIButton, UIImage;



@interface SKUIRedeemCameraLandingView : UIView {
    UILabel *_bodyLabel;
    UILabel *_headerLabel;
    UIImageView *_imageView;
}


@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) NSInteger spacingStyle; // ivar: _spacingStyle


-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif