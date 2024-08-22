// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSVOLUMEBACKGROUNDVIEWCONTROLLER_H
#define MEDIACONTROLSVOLUMEBACKGROUNDVIEWCONTROLLER_H

@class CCUISliderModuleBackgroundViewController, MRNowPlayingAudioFormatController, NSString, NSTimer;
@protocol UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver, MRNowPlayingAudioFormatControllerDelegate;


#import "MRUVolumeNowPlayingView.h"
#import "MediaControlsBluetoothListeningModeButton.h"
#import "MediaControlsRouteView.h"
#import "MediaControlsExpandableButton.h"
#import "MediaControlsVolumeController.h"

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver, MRNowPlayingAudioFormatControllerDelegate>



@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // ivar: _audioFormatController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUVolumeNowPlayingView *nowPlayingView; // ivar: _nowPlayingView
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *primaryBluetoothListeningModeButton; // ivar: _primaryBluetoothListeningModeButton
@property (retain, nonatomic) MediaControlsRouteView *primaryRouteView; // ivar: _primaryRouteView
@property (retain, nonatomic) NSTimer *primaryUpdateTimer; // ivar: _primaryUpdateTimer
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *secondaryBluetoothListeningModeButton; // ivar: _secondaryBluetoothListeningModeButton
@property (retain, nonatomic) MediaControlsRouteView *secondaryRouteView; // ivar: _secondaryRouteView
@property (retain, nonatomic) NSTimer *secondaryUpdateTimer; // ivar: _secondaryUpdateTimer
@property (retain, nonatomic) MediaControlsExpandableButton *spatialExpandableButton; // ivar: _spatialExpandableButton
@property (readonly) Class superclass;
@property (retain, nonatomic) MediaControlsVolumeController *volumeController; // ivar: _volumeController


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_horizontalPadding;
-(CGFloat)_verticalPadding;
-(id)listeningModeErrorMessageForOutputDevice:(id)arg0 ;
-(struct CGRect )effectiveContentFrameForContainerFrame:(struct CGRect )arg0 ;
-(void)_configureOptionsButton:(id)arg0 forRouteType:(NSInteger)arg1 ;
-(void)_configurePrimaryOptionsButtonIfNeeded;
-(void)_configureRouteView:(id)arg0 forRouteType:(NSInteger)arg1 ;
-(void)_configureRouteViews;
-(void)_configureSecondaryOptionsButtonIfNeeded;
-(void)_performLayoutWithAnimation:(id)arg0 ;
-(void)_springAnimate:(id)arg0 ;
-(void)_updateButton:(id)arg0 routeType:(NSInteger)arg1 ;
-(void)_updateButtonAxis;
-(void)_updateVisibility;
-(void)collapseBluetoothListeningModeButtons;
-(void)didTapPrimaryBluetoothListeningModeButton:(id)arg0 ;
-(void)didTapSecondaryBluetoothListeningModeButton:(id)arg0 ;
-(void)mediaControlsVolumeController:(id)arg0 didChangeVolumeAvailable:(BOOL)arg1 effectiveVolume:(float)arg2 forRoute:(NSInteger)arg3 ;
-(void)mediaControlsVolumeController:(id)arg0 didUpdateSplitRoute:(BOOL)arg1 ;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeAudioFormatContentInfo:(id)arg1 ;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeBundleID:(id)arg1 displayName:(id)arg2 ;
-(void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)spatialAudioButtonDidChangeValue:(id)arg0 ;
-(void)updateNowPlayingAudioFormat;
-(void)updateNowPlayingIcon;
-(void)updateSpatialAudioModeButton;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif