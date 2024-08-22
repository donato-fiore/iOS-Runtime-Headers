// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWATCHDEVICEIMAGEOVERLAYVIEW_H
#define PKWATCHDEVICEIMAGEOVERLAYVIEW_H

@class UIView, UIImage;


#import "PKWatchHeroImageView.h"

@interface PKWatchDeviceImageOverlayView : UIView {
    PKWatchHeroImageView *_watchView;
}


@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;


@end


#endif