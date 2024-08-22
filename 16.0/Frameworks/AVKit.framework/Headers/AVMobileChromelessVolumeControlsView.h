// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMELESSVOLUMECONTROLSVIEW_H
#define AVMOBILECHROMELESSVOLUMECONTROLSVIEW_H

@class UISelectionFeedbackGenerator, UIView, UIViewPropertyAnimator, NSString;
@protocol AVMobileVolumeChromlesButtonControlDelegate, AVMobileChromelessSliderDelegate, AVShadowCasting, AVMobileChromelessVolumeControlsViewDelegate;


#import "AVView.h"
#import "AVMobileVolumeChromelessButtonControl.h"
#import "AVMobileChromelessSlider.h"

@interface AVMobileChromelessVolumeControlsView : AVView <AVMobileVolumeChromlesButtonControlDelegate, AVMobileChromelessSliderDelegate, AVShadowCasting>

 {
    UISelectionFeedbackGenerator *_feedbackGenerator;
    AVMobileVolumeChromelessButtonControl *_volumeButton;
    UIView *_volumeControls;
    AVMobileChromelessSlider *_volumeSlider;
    UIViewPropertyAnimator *_emphasizedAnimator;
    CGRect _sliderShadowPathRect;
    CGRect _buttonShadowPathRect;
    BOOL _drawsShadow;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<AVMobileChromelessVolumeControlsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsShadow;
@property (nonatomic, getter=isEmphasized) BOOL emphasized; // ivar: _emphasized
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTracking;
@property (nonatomic, getter=isMuted) BOOL mute; // ivar: _mute
@property (nonatomic) BOOL prefersVolumeSliderIncluded; // ivar: _prefersVolumeSliderIncluded
@property (readonly) Class superclass;
@property (nonatomic) CGFloat volume; // ivar: _volume
@property (nonatomic) BOOL volumeSliderHidesWithAlphaChange; // ivar: _volumeSliderHidesWithAlphaChange


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_handleVolumeControlButtonTap;
-(void)_layoutVolumeControlView;
-(void)_updateVolumeButtonIconState;
-(void)_updateVolumeSliderEmphasizedScale;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)sliderDidBeginTracking:(id)arg0 ;
-(void)sliderDidEndTracking:(id)arg0 ;
-(void)volumeControlButtonPanningDidContinueWithXDelta:(CGFloat)arg0 ;


@end


#endif