// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCLOSEBUTTON_H
#define SFCLOSEBUTTON_H

@class UIButton, UIImageView, UIVisualEffectView;



@interface SFCloseButton : UIButton {
    UIImageView *_imageView;
    UIVisualEffectView *_blurEffectView;
}


@property (readonly, nonatomic) UIImageView *imageView;


-(id)initWithStyle:(NSInteger)arg0 primaryAction:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif