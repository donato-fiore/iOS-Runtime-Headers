// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUIMAGEVIEW_H
#define MUIMAGEVIEW_H

@class UIView, UIImageView, UIImage;



@interface MUImageView : UIView {
    UIImageView *_fallbackImageView;
}


@property (readonly, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView
@property (nonatomic) UIImage *fallbackImage;
@property (nonatomic) UIImage *image;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)layoutSubviews;


@end


#endif