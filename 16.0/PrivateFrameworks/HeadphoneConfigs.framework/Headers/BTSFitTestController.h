// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSFITTESTCONTROLLER_H
#define BTSFITTESTCONTROLLER_H

@class UIViewController, OBWelcomeController, OBTrayButton, OBLinkTrayButton, NSLayoutConstraint, AVSystemController, AVAudioPlayer, UIView, UIStackView, UIImageView, UILabel, UIImage, UIActivityIndicatorView;


#import "BTSDevice.h"

@interface BTSFitTestController : UIViewController {
    BTSDevice *currentDevice;
    OBWelcomeController *_fitTestController;
    OBTrayButton *_playButton;
    OBLinkTrayButton *_debugCopyResultsButton;
    NSLayoutConstraint *_topSpacerConstraint;
    AVSystemController *_avSystemController;
    AVAudioPlayer *_player;
    UIView *_fitTestContentView;
    UIStackView *_stackViewImages;
    UIImageView *_leftImView;
    UIImageView *_rightImView;
    UIView *_leftBudLabel;
    UILabel *_leftBudLabelText;
    UIView *_rightBudLabel;
    UILabel *_rightBudLabelText;
    UILabel *_leftBudResultLabel;
    UILabel *_rightBudResultLabel;
    UIImage *_buttonImage;
    UIActivityIndicatorView *_spinner;
    UILabel *_resultDetailLabel;
    BOOL _budsInEar;
    BOOL _testActive;
    BOOL _callActive;
    BOOL _darkMode;
    BOOL _volumeModified;
    float _initialVolume;
}




-(BOOL)isCallActive;
-(BOOL)isDebugModeEnabled;
-(BOOL)isSmallScreenDevice;
-(float)getConfidenceThreshold;
-(float)getSealThreshold;
-(id)getImageFileName:(unsigned int)arg0 forSide:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)cleanupAudio;
-(void)copyToClipboard;
-(void)dealloc;
-(void)deviceDisconnectedHandler:(id)arg0 ;
-(void)dismissFitTest;
-(void)fitTestStopped;
-(void)handleAudioSessionInterruption:(id)arg0 ;
-(void)handleCallIsActiveDidChangeNotification:(id)arg0 ;
-(void)handleMediaServerConnectionDied:(id)arg0 ;
-(void)inEarStatusChanged:(id)arg0 ;
-(void)loadView;
-(void)powerChangedHandler:(id)arg0 ;
-(void)removeDoneButton;
-(void)resetVolume;
-(void)sealValueChanged:(id)arg0 ;
-(void)setCancelAction;
-(void)setupConstraints;
-(void)setupFitTestContentView;
-(void)startFitTest;
-(void)updateFitTestActiveState;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif