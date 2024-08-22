// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKWATCHDEVICEAPPCAROUSELVIEW_H
#define PKWATCHDEVICEAPPCAROUSELVIEW_H

@class UIView, UIImageView, UIImage;


#import "PKWatchHeroImageView.h"

@interface PKWatchDeviceAppCarouselView : UIView {
    PKWatchHeroImageView *_watchDeviceImageView;
    UIImageView *_carouselImageView;
    UIImageView *_appIconImageView;
}


@property (retain, nonatomic) UIImage *appIconImage; // ivar: _appIconImage


-(id)_carouselViewImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_appIconSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif