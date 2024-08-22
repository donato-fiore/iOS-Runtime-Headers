// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCERECORDINGVIEWCONTROLLER_H
#define HUANNOUNCERECORDINGVIEWCONTROLLER_H

@class UIViewController, ANAnnounce, UILabel, HFAudioRecorder, UIBlurEffect, UIButton, NSLayoutConstraint, UIVisualEffectView, UIView, HMHome, NSString, UIImpactFeedbackGenerator, NSURL, UITapGestureRecognizer;
@protocol HFAudioRecorderDelegate, HFAccessoryObserver, HFMediaObjectObserver, UIGestureRecognizerDelegate;


#import "HUWaveformView.h"
#import "HURecordingButton.h"
#import "HUHomeControlServiceContext.h"

@interface HUAnnounceRecordingViewController : UIViewController <HFAudioRecorderDelegate, HFAccessoryObserver, HFMediaObjectObserver, UIGestureRecognizerDelegate>



@property (retain, nonatomic) ANAnnounce *announce; // ivar: _announce
@property (retain, nonatomic) UILabel *announcementDeliveryFailureLabel; // ivar: _announcementDeliveryFailureLabel
@property (retain, nonatomic) HFAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (retain, nonatomic) HUWaveformView *audioWaveformView; // ivar: _audioWaveformView
@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) NSLayoutConstraint *closeButtonTopConstraint; // ivar: _closeButtonTopConstraint
@property (retain, nonatomic) UIVisualEffectView *closeButtonVisualEffectView; // ivar: _closeButtonVisualEffectView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // ivar: _contentViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // ivar: _contentViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // ivar: _contentViewWidthConstraint
@property (retain, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *dismissLabel; // ivar: _dismissLabel
@property (retain, nonatomic) NSLayoutConstraint *dismissLabelTopConstraint; // ivar: _dismissLabelTopConstraint
@property (retain, nonatomic) UIVisualEffectView *dismissLabelVisualEffectView; // ivar: _dismissLabelVisualEffectView
@property (retain, nonatomic) UILabel *errorStatusLabel; // ivar: _errorStatusLabel
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *largeTitleLabel; // ivar: _largeTitleLabel
@property (retain, nonatomic) HURecordingButton *recordButton; // ivar: _recordButton
@property (retain, nonatomic) NSURL *recordedAnnouncementURL; // ivar: _recordedAnnouncementURL
@property (nonatomic) CGFloat recordedDuration; // ivar: _recordedDuration
@property (nonatomic) BOOL recordingDismissedByUser; // ivar: _recordingDismissedByUser
@property (retain, nonatomic) UILabel *recordingStateChangeLabel; // ivar: _recordingStateChangeLabel
@property (retain, nonatomic) HUHomeControlServiceContext *serviceContext; // ivar: _serviceContext
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)_areAllHomePodsOffline;
-(BOOL)_isHomeContext;
-(BOOL)_isRoomContext;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)_fontForTimeCodeLabel;
-(id)_largeTitleTextColor;
-(id)_stringForDuration:(CGFloat)arg0 ;
-(id)_waveformColor;
-(id)initWithServiceContext:(id)arg0 blurEffectStyle:(NSInteger)arg1 ;
-(void)_commonInit;
-(void)_deleteAudioFile;
-(void)_deleteRecording:(id)arg0 ;
-(void)_didPan:(id)arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_dismissDownRecordingView:(id)arg0 ;
-(void)_dismissUpRecordingView:(id)arg0 ;
-(void)_dismissViewOrDisplayError:(id)arg0 ;
-(void)_hideRecordingUI;
-(void)_restoreRecordingUI;
-(void)_submitAnalyticsForAnnounceRecordingCompletdSuccessfully:(BOOL)arg0 interruptedByUser:(BOOL)arg1 ;
-(void)_updateUIBasedOnReachabilityStatus;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)audioRecorderDidStartRecording:(id)arg0 ;
-(void)audioRecorderFailedToFinishRecording:(id)arg0 ;
-(void)audioRecorderFailedToStartRecording:(id)arg0 ;
-(void)audioRecorderFinishedRecording:(id)arg0 audioFile:(id)arg1 ;
-(void)beginRecording:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateAveragePower:(float)arg0 ;
-(void)sendAnnouncement:(id)arg0 ;
-(void)stopRecordAndSend:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif