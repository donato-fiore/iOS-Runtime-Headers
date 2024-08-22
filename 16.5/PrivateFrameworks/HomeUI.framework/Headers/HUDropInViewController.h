// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDROPINVIEWCONTROLLER_H
#define HUDROPINVIEWCONTROLLER_H

@class UIViewController, DIDropInSession, UIBlurEffect, NSLayoutConstraint, UIButton, UIVisualEffectView, UIView, HMAccessory, HMHome, NSString, UITextView, UILabel, DIAudioPowerController, DIDropInCenter, NSArray, UIImpactFeedbackGenerator, UIImageView, HMAudioAnalysisLastKnownEventSubscriber, HMCameraProfile, UIActivityIndicatorView, NSTimer, UITapGestureRecognizer;
@protocol HFAccessoryObserver, HFMediaObjectObserver, UIGestureRecognizerDelegate, HMAudioAnalysisLastKnownEventSubscriberDelegate, DIDropInCenterDelegate, DIDeviceManagerDelegate, DIDropInSessionManagerDelegate, DIDeviceDelegate, DIDropInSessionDelegate, DIAudioPowerControllerDelegate, HFCameraLiveStreamControllerDelegate, HUPreloadableViewController;


#import "HUWaveformView.h"
#import "HULegibilityLabel.h"
#import "HUIconView.h"
#import "HUCameraLiveStreamViewController.h"
#import "HUHomeControlServiceContext.h"

@interface HUDropInViewController : UIViewController <HFAccessoryObserver, HFMediaObjectObserver, UIGestureRecognizerDelegate, HMAudioAnalysisLastKnownEventSubscriberDelegate, DIDropInCenterDelegate, DIDeviceManagerDelegate, DIDropInSessionManagerDelegate, DIDeviceDelegate, DIDropInSessionDelegate, DIAudioPowerControllerDelegate, HFCameraLiveStreamControllerDelegate, HUPreloadableViewController>



@property (retain, nonatomic) DIDropInSession *activeDropInSession; // ivar: _activeDropInSession
@property (retain, nonatomic) HUWaveformView *audioWaveformView; // ivar: _audioWaveformView
@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) NSLayoutConstraint *cameraLiveStreamViewTopConstraintToDescriptionTextView; // ivar: _cameraLiveStreamViewTopConstraintToDescriptionTextView
@property (retain, nonatomic) NSLayoutConstraint *cameraLiveStreamViewTopConstraintToSpinnerLabel; // ivar: _cameraLiveStreamViewTopConstraintToSpinnerLabel
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) NSLayoutConstraint *closeButtonTopConstraint; // ivar: _closeButtonTopConstraint
@property (retain, nonatomic) UIVisualEffectView *closeButtonVisualEffectView; // ivar: _closeButtonVisualEffectView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // ivar: _contentViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // ivar: _contentViewWidthConstraint
@property (retain, nonatomic) HMAccessory *currentAccessory; // ivar: _currentAccessory
@property (retain, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HULegibilityLabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UITextView *descriptionTextView; // ivar: _descriptionTextView
@property (retain, nonatomic) UILabel *dismissLabel; // ivar: _dismissLabel
@property (retain, nonatomic) NSLayoutConstraint *dismissLabelTopConstraint; // ivar: _dismissLabelTopConstraint
@property (retain, nonatomic) UIVisualEffectView *dismissLabelVisualEffectView; // ivar: _dismissLabelVisualEffectView
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) DIAudioPowerController *dropInAudioPowerController; // ivar: _dropInAudioPowerController
@property (retain, nonatomic) DIDropInCenter *dropInCenter; // ivar: _dropInCenter
@property (retain, nonatomic) NSArray *eventBulletins; // ivar: _eventBulletins
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL hasAttemptedDropInSessionCall; // ivar: _hasAttemptedDropInSessionCall
@property (nonatomic) BOOL hasAttemptedEndingDropInSessionCall; // ivar: _hasAttemptedEndingDropInSessionCall
@property (nonatomic) BOOL hasSessionStarted; // ivar: _hasSessionStarted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HMAudioAnalysisLastKnownEventSubscriber *lastKnownEventSubscriber; // ivar: _lastKnownEventSubscriber
@property (retain, nonatomic) UIView *liveCameraView; // ivar: _liveCameraView
@property (retain, nonatomic) HUCameraLiveStreamViewController *liveStreamController; // ivar: _liveStreamController
@property (retain, nonatomic) HMCameraProfile *nearbyCameraProfile; // ivar: _nearbyCameraProfile
@property (nonatomic) CGFloat recordedDuration; // ivar: _recordedDuration
@property (retain, nonatomic) HUHomeControlServiceContext *serviceContext; // ivar: _serviceContext
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UILabel *spinnerLabel; // ivar: _spinnerLabel
@property (retain, nonatomic) NSTimer *startSessionRequestTimer; // ivar: _startSessionRequestTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *talkButton; // ivar: _talkButton
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)_recordButtonMicOffColor;
-(id)_recordButtonMicOnColor;
-(id)_waveformColor;
-(id)hu_preloadContent;
-(id)initWithServiceContext:(id)arg0 blurEffectStyle:(NSInteger)arg1 ;
-(void)_cancelStartSessionRequestTimerIfNeeded;
-(void)_cleanUp;
-(void)_didPan:(id)arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_dismissDownRecordingView:(id)arg0 ;
-(void)_dismissRecordingUIWithError:(id)arg0 ;
-(void)_dismissUpRecordingView:(id)arg0 ;
-(void)_endDropInSession;
-(void)_hideSpinner;
-(void)_launchDropInSessionIfNeeded;
-(void)_preloadContent:(id)arg0 ;
-(void)_refreshHomeGraph:(id)arg0 ;
-(void)_showSpinner;
-(void)_toggleMicrophone:(id)arg0 ;
-(void)_updateRecordingUIWithConnectedState;
-(void)_updateRecordingUIWithDefaultState;
-(void)_updateRecordingUIWithMicrophoneOff;
-(void)_updateRecordingUIWithMicrophoneOn;
-(void)controller:(id)arg0 didUpdateAudioPowerForDropInDevice:(float)arg1 ;
-(void)dealloc;
-(void)device:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)manager:(id)arg0 didAddDevice:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateActiveSession:(id)arg1 ;
-(void)managerDidUpdateDevices:(id)arg0 ;
-(void)serverDisconnectedForDropInCenter:(id)arg0 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)session:(id)arg0 didUpdateUplinkMuteStatus:(BOOL)arg1 ;
-(void)streamControllerStateDidUpdate:(id)arg0 ;
-(void)subscriber:(id)arg0 didUpdateBulletins:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif