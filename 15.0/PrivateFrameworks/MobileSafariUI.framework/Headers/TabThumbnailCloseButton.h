// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABTHUMBNAILCLOSEBUTTON_H
#define TABTHUMBNAILCLOSEBUTTON_H

@class UIButton, UIVisualEffectView, UIImageView;



@interface TabThumbnailCloseButton : UIButton {
    UIVisualEffectView *_backdropEffectView;
    UIVisualEffectView *_vibrantEffectView;
    UIImageView *_imageView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif