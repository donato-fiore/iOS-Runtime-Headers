// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKWATCHDEVICEIMAGEOVERLAYVIEW_H
#define PKWATCHDEVICEIMAGEOVERLAYVIEW_H

@class UIView, UIImageView, UIImage;



@interface PKWatchDeviceImageOverlayView : UIView {
    UIImageView *_watchImageView;
    UIImageView *_overlayImageView;
}


@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage


-(CGFloat)_watchScreenCenterXOffset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;


@end


#endif