// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSTACKBACKDROPVIEW_H
#define _TVSTACKBACKDROPVIEW_H

@class UIView, UIImageView, UIVisualEffectView, UIImage;



@interface _TVStackBackdropView : UIView {
    UIImageView *_imageView;
    UIVisualEffectView *_visualEffectView;
}


@property (nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)initWithBlurEffectStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif