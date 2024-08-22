// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUNOWPLAYINGVOLUMECONTROLSVIEW_H
#define MRUNOWPLAYINGVOLUMECONTROLSVIEW_H

@class UIView;


#import "MRUNowPlayingVolumeSlider.h"
#import "MRUVolumeStepperView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingVolumeControlsView : UIView

@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (readonly, nonatomic) MRUNowPlayingVolumeSlider *slider; // ivar: _slider
@property (readonly, nonatomic) MRUVolumeStepperView *stepper; // ivar: _stepper
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateVolumeCapabilities;


@end


#endif