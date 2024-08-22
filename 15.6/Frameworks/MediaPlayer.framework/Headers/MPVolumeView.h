// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPVOLUMEVIEW_H
#define MPVOLUMEVIEW_H

@class UIView, UIButton, UILabel, NSString, UIImage;
@protocol MPAVLightweightRoutingControllerDelegate, NSCoding;


#import "MPAVLightweightRoutingController.h"
#import "MPMediaControls.h"
#import "MPVolumeSlider.h"

@interface MPVolumeView : UIView <MPAVLightweightRoutingControllerDelegate, NSCoding>

 {
    MPAVLightweightRoutingController *_lightweightRoutingController;
    BOOL _hasNonDefaultRouteButtonImages;
    BOOL _hasNonDefaultMaxVolumeSliderImage;
    BOOL _hasNonDefaultMinVolumeSliderImage;
    BOOL _hidesRouteLabelWhenNoRouteChoice;
    UIButton *_routeButton;
    BOOL _routeDiscoveryEnabled;
    UILabel *_routeLabel;
    BOOL _showingButton;
    BOOL _showingLabel;
    BOOL _showingSlider;
    BOOL _showsRouteButton;
    BOOL _showsVolumeSlider;
    NSInteger _style;
    MPMediaControls *_mediaControls;
    MPVolumeSlider *_volumeSlider;
    BOOL _volumeSliderShrinksFromBothEnds;
    BOOL _wirelessRouteIsPicked;
    BOOL _wirelessRoutesAvailable;
    BOOL _pushedRouteDiscoveryModeState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;
@property (readonly, nonatomic) BOOL isShowingRouteButton;
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic) BOOL showsRouteButton;
@property (nonatomic) BOOL showsVolumeSlider;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPVolumeSlider *volumeSlider;
@property (nonatomic) BOOL volumeSliderShrinksFromBothEnds;
@property (retain, nonatomic) UIImage *volumeWarningSliderImage;
@property (readonly, nonatomic, getter=isWirelessRouteActive) BOOL wirelessRouteActive;
@property (readonly, nonatomic, getter=areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)arg0 ;
-(id)_routeButton;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)maximumVolumeSliderImageForState:(NSUInteger)arg0 ;
-(id)minimumVolumeSliderImageForState:(NSUInteger)arg0 ;
-(id)routeButtonImageForState:(NSUInteger)arg0 ;
-(id)volumeThumbImageForState:(NSUInteger)arg0 ;
-(struct CGRect )routeButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )volumeSliderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )volumeThumbRectForBounds:(struct CGRect )arg0 volumeSliderRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_createSubviews;
-(void)_displayAudioRoutePicker;
-(void)_getDefaultVolumeSliderFrame:(struct CGRect *)arg0 routeButtonFrame:(struct CGRect *)arg1 forBounds:(struct CGRect )arg2 ;
-(void)_initWithStyle:(NSInteger)arg0 ;
-(void)_loadAudioRoutePickerIfNeeded;
-(void)_setRouteDiscoveryEnabled:(BOOL)arg0 ;
-(void)_startPrewarmingAudioRoutePicker;
-(void)_stopPrewarmingAudioRoutePicker;
-(void)_updateWirelessRouteStatus;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)lightweightRoutingController:(id)arg0 didChangeDevicePresenceDetected:(BOOL)arg1 ;
-(void)lightweightRoutingController:(id)arg0 didChangePickedRoutes:(id)arg1 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setMaximumVolumeSliderImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setRouteButtonImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setVolumeThumbImage:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif