// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NANOWPLAYINGVOLUMECONTROL_H
#define NANOWPLAYINGVOLUMECONTROL_H

@class UIView, UIVisualEffectView, UIImageView, MPVolumeSlider;



@interface NANowPlayingVolumeControl : UIView

@property (retain, nonatomic) UIVisualEffectView *lighteningEffectView; // ivar: _lighteningEffectView
@property (retain, nonatomic) UIImageView *volumeMaxImageView; // ivar: _volumeMaxImageView
@property (retain, nonatomic) UIImageView *volumeMinImageView; // ivar: _volumeMinImageView
@property (retain, nonatomic) MPVolumeSlider *volumeSlider; // ivar: _volumeSlider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif