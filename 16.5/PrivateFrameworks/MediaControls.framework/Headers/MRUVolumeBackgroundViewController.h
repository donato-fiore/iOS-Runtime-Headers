// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVOLUMEBACKGROUNDVIEWCONTROLLER_H
#define MRUVOLUMEBACKGROUNDVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUListeningModeControllerDelegate, MRUSpatialAudioPreferencesControllerDelegate, MRUAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController, MRUVolumeBackgroundViewControllerDelegate;


#import "MRUAudioFormatController.h"
#import "MRUListeningModeController.h"
#import "MRUSystemOutputDeviceRouteController.h"
#import "MRUSpatialAudioPreferencesController.h"
#import "MRUVolumeBackgroundView.h"

@interface MRUVolumeBackgroundViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUListeningModeControllerDelegate, MRUSpatialAudioPreferencesControllerDelegate, MRUAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>



@property (retain, nonatomic) MRUAudioFormatController *audioFormatController; // ivar: _audioFormatController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVolumeBackgroundViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUListeningModeController *listeningModeController; // ivar: _listeningModeController
@property (retain, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController; // ivar: _outputDeviceRouteController
@property (retain, nonatomic) MRUSpatialAudioPreferencesController *spatialAudioPreferencesController; // ivar: _spatialAudioPreferencesController
@property (readonly) Class superclass;
@property (nonatomic) float systemVolumeValue; // ivar: _systemVolumeValue
@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithOutputDeviceRouteController:(id)arg0 ;
-(struct CGRect )effectiveContentFrameForContainerFrame:(struct CGRect )arg0 ;
-(void)audioFormatControllerDidChangeAudioFormat:(id)arg0 ;
-(void)audioFormatControllerDidChangeBundleID:(id)arg0 ;
-(void)collapseExpandableButtons;
-(void)didEndEditingPrimaryListeningModeButton:(id)arg0 ;
-(void)didEndEditingSecondartListeningModeButton:(id)arg0 ;
-(void)didTapPrimaryListeningModeButton:(id)arg0 ;
-(void)didTapSecondaryListeningModeButton:(id)arg0 ;
-(void)didTapSpatialAudioModeButton:(id)arg0 ;
-(void)listeningModeController:(id)arg0 didChangePrimaryListeningMode:(id)arg1 ;
-(void)listeningModeController:(id)arg0 didChangeSecondaryListeningMode:(id)arg1 ;
-(void)loadView;
-(void)performLayoutWithAnimation:(id)arg0 ;
-(void)primaryListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)secondaryListeningModeButtonDidChangeValue:(id)arg0 ;
-(void)spatialAudioModeButtonDidChangeValue:(id)arg0 ;
-(void)spatialAudioPreferencesController:(id)arg0 didChangeAccessoryStereoHFPStatus:(int)arg1 ;
-(void)spatialAudioPreferencesController:(id)arg0 didChangeHeadTrackingSupported:(BOOL)arg1 ;
-(void)spatialAudioPreferencesController:(id)arg0 didChangeMonoAudioEnabled:(BOOL)arg1 ;
-(void)spatialAudioPreferencesController:(id)arg0 didSpatialAudioSupported:(BOOL)arg1 ;
-(void)spatialAudioPreferencesControllerDidChangePreferences:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)updateNowPlayingAudioFormat;
-(void)updateNowPlayingIcon;
-(void)updatePrimaryListeningModeButton;
-(void)updatePrimaryRouteView;
-(void)updateSecondaryListeningModeButton;
-(void)updateSecondaryRouteView;
-(void)updateSpatialAudioModeButton;
-(void)updateVisibility;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif