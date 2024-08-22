// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUNOWPLAYINGVOLUMECONTROLSVIEW_H
#define MRUNOWPLAYINGVOLUMECONTROLSVIEW_H

@class UIView, NSString, UIImageView, UIWindowScene;
@protocol MRUVolumeControllerDelegate, MPVolumeDisplaying, MRUStepperDelegate, MRUVisualStylingProviderObserver, MRUGroupSliderDelegate;


#import "MRUGroupSlider.h"
#import "MRUStepper.h"
#import "MRUVisualStylingProvider.h"
#import "MRUVolumeController.h"
#import "MRUVolumeGroupCoordinator.h"

@interface MRUNowPlayingVolumeControlsView : UIView <MRUVolumeControllerDelegate, MPVolumeDisplaying, MRUStepperDelegate, MRUVisualStylingProviderObserver, MRUGroupSliderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) UIImageView *maxImageView; // ivar: _maxImageView
@property (retain, nonatomic) UIImageView *minImageView; // ivar: _minImageView
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (retain, nonatomic) MRUGroupSlider *slider; // ivar: _slider
@property (retain, nonatomic) MRUStepper *stepper; // ivar: _stepper
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (retain, nonatomic) MRUVolumeController *volumeController; // ivar: _volumeController
@property (retain, nonatomic) MRUVolumeGroupCoordinator *volumeGroupCoordinator; // ivar: _volumeGroupCoordinator
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)sliderShouldAllowLongPress:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)sliderLongPressActionDidBegin:(id)arg0 ;
-(void)sliderLongPressActionDidCancel:(id)arg0 ;
-(void)sliderLongPressActionDidFinish:(id)arg0 ;
-(void)sliderTounchDown:(id)arg0 ;
-(void)sliderTounchUp:(id)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)stepperDecrementHoldBegan:(id)arg0 ;
-(void)stepperDecrementHoldEnded:(id)arg0 ;
-(void)stepperDidDecrement:(id)arg0 ;
-(void)stepperDidIncrement:(id)arg0 ;
-(void)stepperIncrementHoldBegan:(id)arg0 ;
-(void)stepperIncrementHoldEnded:(id)arg0 ;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)updateVolumeAnimated:(BOOL)arg0 ;
-(void)visualStylingProviderDidChange:(id)arg0 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeControlCapabilitiesDidChange:(unsigned int)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif