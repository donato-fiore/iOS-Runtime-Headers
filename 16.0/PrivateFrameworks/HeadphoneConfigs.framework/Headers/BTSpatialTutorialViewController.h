// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSPATIALTUTORIALVIEWCONTROLLER_H
#define BTSPATIALTUTORIALVIEWCONTROLLER_H

@class UIViewController, OBWelcomeController, UIStackView, UISegmentedControl, UIView, VPSpatialTutorialContentView, UIAlertController, NSMutableArray, RMMediaSession;


#import "BTSDevice.h"

@interface BTSpatialTutorialViewController : UIViewController {
    OBWelcomeController *_welcomeController;
    UIStackView *_stackView;
    UISegmentedControl *_segmentedControl;
    UIView *_spacerView;
    VPSpatialTutorialContentView *_spatialTutorialContentView;
    UIAlertController *_alert;
    NSMutableArray *_constraints;
    RMMediaSession *_mediaSession;
    BOOL _mediaSessionStarted;
    BOOL _budsInEar;
    BOOL _alertShowing;
}


@property (retain, nonatomic) BTSDevice *currentDevice; // ivar: _currentDevice


-(id)initWithDevice:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)checkStatusAndPlay;
-(void)deviceDisconnectedHandler:(id)arg0 ;
-(void)dismissWelcomeController;
-(void)handleAudioSessionInterruption:(id)arg0 ;
-(void)handleMediaServerConnectionDied:(id)arg0 ;
-(void)inEarStatusChangedHandler:(id)arg0 ;
-(void)initCommon;
-(void)powerChangedHandler:(id)arg0 ;
-(void)quitSpatialTutorial:(id)arg0 ;
-(void)segmentControlValueChanged:(id)arg0 ;
-(void)setupConstraints;
-(void)setupStackView;
-(void)setupWelcomeController;
-(void)showAlert;
-(void)startPlayingContent;
-(void)stopPlayingContent;
-(void)updateInEarState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif