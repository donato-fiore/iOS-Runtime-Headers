// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTIMAGEVIEW_H
#define REUPNEXTIMAGEVIEW_H

@class UIView, UIImageView, UIColor, UIImage;



@interface REUpNextImageView : UIView {
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
}


@property (retain, nonatomic) UIColor *fallbackTintColor; // ivar: _fallbackTintColor
@property (retain, nonatomic) UIImage *overrideImage; // ivar: _overrideImage


-(BOOL)_hasMultipartImages;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateColors;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif