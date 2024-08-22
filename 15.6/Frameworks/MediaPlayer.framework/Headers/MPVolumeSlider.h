// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPVOLUMESLIDER_H
#define MPVOLUMESLIDER_H

@class UISlider, NSTimer, UILabel, UIImageView, UIView, NSString, UILayoutGuide, UIImage, UIWindowScene;
@protocol MPVolumeControllerDelegate, MPVolumeDisplaying;


#import "MPAVEndpointRoute.h"
#import "MPAVOutputDeviceRoute.h"
#import "MPAVController.h"
#import "MPAVRoute.h"
#import "MPVolumeController.h"

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, MPVolumeDisplaying>

 {
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    UIImageView *_thumbImageView;
    BOOL _isOffScreen;
    BOOL _forcingOffscreenVisibility;
    BOOL _thumbIsDefault;
    BOOL _configuredLayoutGuide;
    UIView *_volumeWarningView;
    BOOL _volumeWarningBlinking;
    BOOL _beganTrackingFromEUVolumeLimit;
    CGFloat _originalMinTrackViewAlphaOverride;
    CGFloat _originalMinValueViewAlphaOverride;
    CGFloat _originalMaxValueViewAlphaOverride;
    BOOL _isCurrentlyTracking;
    float _setVolumeStartValue;
    int _coalescedVolumeDidChangeLogCount;
}


@property (nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPAVEndpointRoute *groupRoute; // ivar: _groupRoute
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (nonatomic, getter=isInOptimisticState) BOOL optimisticState; // ivar: _optimisticState
@property (nonatomic) float optimisticValue; // ivar: _optimisticValue
@property (retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // ivar: _outputDeviceRoute
@property (retain, nonatomic) MPAVController *player; // ivar: _player
@property (retain, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *thumbView;
@property (readonly, nonatomic) UILayoutGuide *trackLayoutGuide; // ivar: _trackLayoutGuide
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (retain, nonatomic) MPVolumeController *volumeController; // ivar: _volumeController
@property (retain, nonatomic) UIImage *volumeWarningTrackImage; // ivar: _volumeWarningTrackImage
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(float)maximumValue;
-(float)minimumValue;
-(id)_maxTrackImageForStyle:(NSInteger)arg0 ;
-(id)_minTrackImageForStyle:(NSInteger)arg0 ;
-(id)_newVolumeWarningView;
-(id)_thumbImageForStyle:(NSInteger)arg0 ;
-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 endpointRoute:(id)arg2 outputDeviceRoute:(id)arg3 ;
-(struct CGRect )hitRect;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_beginBlinkingWarningView;
-(void)_blinkWarningView;
-(void)_commitVolumeChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_endBlinkingWarningView;
-(void)_endTracking;
-(void)_layoutForAvailableRoutes;
-(void)_layoutVolumeWarningView;
-(void)_logVolumeValueDidChange:(float)arg0 ;
-(void)_resetThumbImageForState:(NSUInteger)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setThumbImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)setVolumeDataSource:(id)arg0 ;
-(void)updateVolume;
-(void)volumeController:(id)arg0 EUVolumeLimitDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 EUVolumeLimitEnforcedDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeControlCapabilitiesDidChange:(unsigned int)arg1 ;
-(void)volumeController:(id)arg0 volumeControlLabelDidChange:(id)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 volumeWarningStateDidChange:(NSInteger)arg1 ;


@end


#endif