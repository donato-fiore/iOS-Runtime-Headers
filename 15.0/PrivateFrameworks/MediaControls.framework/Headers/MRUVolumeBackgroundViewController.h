// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVOLUMEBACKGROUNDVIEWCONTROLLER_H
#define MRUVOLUMEBACKGROUNDVIEWCONTROLLER_H

@class UIViewController, MRNowPlayingAudioFormatController, NSString, NSTimer;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRNowPlayingAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController, MRUVolumeBackgroundViewControllerDelegate;


#import "MRUSystemOutputDeviceRouteController.h"
#import "MRUVolumeBackgroundView.h"

@interface MRUVolumeBackgroundViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRNowPlayingAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>



@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // ivar: _audioFormatController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVolumeBackgroundViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController; // ivar: _outputDeviceRouteController
@property (retain, nonatomic) NSTimer *primaryUpdateTimer; // ivar: _primaryUpdateTimer
@property (retain, nonatomic) NSTimer *secondaryUpdateTimer; // ivar: _secondaryUpdateTimer
@property (readonly) Class superclass;
@property (nonatomic) float systemVolumeValue; // ivar: _systemVolumeValue
@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithOutputDeviceRouteController:(id)arg0 ;
-(id)listeningModeErrorMessageForOutputDevice:(id)arg0 ;
-(struct CGRect )effectiveContentFrameForContainerFrame:(struct CGRect )arg0 ;
-(void)collapseExpandableButtons;
-(void)didTapPrimaryListeningModeButton:(id)arg0 ;
-(void)didTapSecondaryListeningModeButton:(id)arg0 ;
-(void)loadView;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeAudioFormatContentInfo:(id)arg1 ;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeBundleID:(id)arg1 displayName:(id)arg2 ;
-(void)performLayoutWithAnimation:(id)arg0 ;
-(void)primaryListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)secondaryListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)setListeningMode:(id)arg0 forButton:(id)arg1 outputDeviceRoute:(id)arg2 completion:(id)arg3 ;
-(void)spatialAudioModeButtonDidChangeValue:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)updateListeningModeButton:(id)arg0 forOutputDeviceRoute:(id)arg1 ;
-(void)updateNowPlayingAudioFormat;
-(void)updateNowPlayingIcon;
-(void)updatePrimaryListeningModeButton;
-(void)updatePrimaryRouteView;
-(void)updateSecondaryListeningModeButton;
-(void)updateSecondaryRouteView;
-(void)updateSpatialAudioModeButton;
-(void)updateVisibility;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif