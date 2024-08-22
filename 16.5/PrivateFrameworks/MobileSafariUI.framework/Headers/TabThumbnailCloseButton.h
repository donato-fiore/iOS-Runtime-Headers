// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABTHUMBNAILCLOSEBUTTON_H
#define TABTHUMBNAILCLOSEBUTTON_H

@class UIButton, UIVisualEffectView, UIImageView, UIImage;



@interface TabThumbnailCloseButton : UIButton {
    UIVisualEffectView *_backdropEffectView;
    UIVisualEffectView *_vibrantEffectView;
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIImage *image;


+(id)backgroundColor;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif