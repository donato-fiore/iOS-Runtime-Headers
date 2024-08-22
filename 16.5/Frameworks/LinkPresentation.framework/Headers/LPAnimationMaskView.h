// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPANIMATIONMASKVIEW_H
#define LPANIMATIONMASKVIEW_H

@class UIView, UIImage;



@interface LPAnimationMaskView : UIView {
    UIView *_imageView;
}


@property (nonatomic) NSInteger animationOrigin; // ivar: _animationOrigin
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, retain, nonatomic) UIView *imageView;


-(id)init;
-(void)layoutSubviews;


@end


#endif