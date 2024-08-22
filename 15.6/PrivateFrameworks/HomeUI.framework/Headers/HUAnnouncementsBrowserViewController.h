// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUANNOUNCEMENTSBROWSERVIEWCONTROLLER_H
#define HUANNOUNCEMENTSBROWSERVIEWCONTROLLER_H

@class UIViewController, ANAnnounce, UILabel, HFAudioRecorder, NSLayoutConstraint, UIBlurEffect, HMHome, NSString, UIImpactFeedbackGenerator, UIVisualEffectView, UIView, UILongPressGestureRecognizer, UIButton, NSDictionary, NSURL, UIScrollView, UIStackView;
@protocol HFAudioRecorderDelegate, HUAnnouncementsGlobeViewDelegate, HFAccessoryObserver, HFMediaObjectObserver, HUAnnouncementsBrowserViewControllerDelegate;


#import "HUAnnouncementGlobeView.h"
#import "HUWaveformView.h"
#import "HURecordingButton.h"

@interface HUAnnouncementsBrowserViewController : UIViewController <HFAudioRecorderDelegate, HUAnnouncementsGlobeViewDelegate, HFAccessoryObserver, HFMediaObjectObserver>



@property (retain, nonatomic) ANAnnounce *announce; // ivar: _announce
@property (retain, nonatomic) UILabel *announcementDeliveryFailureLabel; // ivar: _announcementDeliveryFailureLabel
@property (retain, nonatomic) HUAnnouncementGlobeView *announcementGlobeView; // ivar: _announcementGlobeView
@property (retain, nonatomic) UILabel *announcementProgressLabel; // ivar: _announcementProgressLabel
@property (retain, nonatomic) HFAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (retain, nonatomic) HUWaveformView *audioWaveformView; // ivar: _audioWaveformView
@property (retain, nonatomic) NSLayoutConstraint *audioWaveformViewLeadingConstraint; // ivar: _audioWaveformViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *audioWaveformViewTrailingConstraint; // ivar: _audioWaveformViewTrailingConstraint
@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAnnouncementsBrowserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *errorStatusLabel; // ivar: _errorStatusLabel
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTearingDown; // ivar: _isTearingDown
@property (retain, nonatomic) UILabel *largeTitleLabel; // ivar: _largeTitleLabel
@property (retain, nonatomic) UIVisualEffectView *largeTitleVisualEffectView; // ivar: _largeTitleVisualEffectView
@property (retain, nonatomic) UIView *lightedCircleView; // ivar: _lightedCircleView
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) UIButton *nextAnnouncementButton; // ivar: _nextAnnouncementButton
@property (nonatomic) CGFloat notificationDismissTimeInterval; // ivar: _notificationDismissTimeInterval
@property (nonatomic) CGFloat notificationLaunchTimeInterval; // ivar: _notificationLaunchTimeInterval
@property (retain, nonatomic) NSDictionary *notificationPayload; // ivar: _notificationPayload
@property (copy, nonatomic) NSString *recipientTitle; // ivar: _recipientTitle
@property (retain, nonatomic) HURecordingButton *recordButton; // ivar: _recordButton
@property (retain, nonatomic) UILabel *recordButtonLabel; // ivar: _recordButtonLabel
@property (retain, nonatomic) UIVisualEffectView *recordButtonLabelVisualEffectView; // ivar: _recordButtonLabelVisualEffectView
@property (retain, nonatomic) NSURL *recordedAnnouncementURL; // ivar: _recordedAnnouncementURL
@property (nonatomic) CGFloat recordedDuration; // ivar: _recordedDuration
@property (retain, nonatomic) NSString *senderName; // ivar: _senderName
@property (nonatomic) BOOL shouldNotSendCurrentRecording; // ivar: _shouldNotSendCurrentRecording
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UIVisualEffectView *subTitleVisualEffectView; // ivar: _subTitleVisualEffectView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIScrollView *transcriptionScrollView; // ivar: _transcriptionScrollView
@property (retain, nonatomic) UIStackView *transcriptionStackView; // ivar: _transcriptionStackView
@property (retain, nonatomic) UILabel *transcriptionText; // ivar: _transcriptionText
@property (retain, nonatomic) UILabel *transcriptionTitleLabel; // ivar: _transcriptionTitleLabel


-(BOOL)_isHomeContext;
-(BOOL)_isNotificationPayloadValid;
-(BOOL)_isRoomContext;
-(id)_announcerNameFromNotificationPayload:(id)arg0 ;
-(id)_backgroundColorForNextAnnouncementButton;
-(id)_fontForAnnouncementProgressLabel;
-(id)_lightedCircleBackgroundColorForCurrentInterfaceStyle;
-(id)_lightedCircleShadowColorForCurrentInterfaceStyle;
-(id)_waveformColor;
-(id)initWithNotificationPayload:(id)arg0 delegate:(id)arg1 ;
-(void)_addCommonTranscriptionConstraints;
-(void)_addTranscriptionConstraintsForValidNotificationPayload;
-(void)_applyTranscriptionText:(id)arg0 ;
-(void)_beginRecordingReply:(id)arg0 ;
-(void)_commonInit;
-(void)_configureSubViewsForValidNotificationPayload;
-(void)_configureVisualStyleForLightedCircleView;
-(void)_deleteAudioFile;
-(void)_deleteRecording:(id)arg0 ;
-(void)_dismissViewOrDisplayError:(id)arg0 ;
-(void)_hideRecordingUI;
-(void)_recordButtonLongPressGesture:(id)arg0 ;
-(void)_recordButtonTapped:(id)arg0 ;
-(void)_sendAnnouncement:(id)arg0 ;
-(void)_sendAnnouncementReply:(id)arg0 ;
-(void)_setupRecipientInformation;
-(void)_skipToNextAnnouncement:(id)arg0 ;
-(void)_stopRecordingAndSendReply:(id)arg0 ;
-(void)_submitAnalyticsForAnnounceNotificationUsage;
-(void)_submitAnalyticsForAnnounceRecordingCompletedSuccessfully:(BOOL)arg0 interruptedByUser:(BOOL)arg1 ;
-(void)_updateUIBasedOnReachabilityStatus;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)audioRecorderDidStartRecording:(id)arg0 ;
-(void)audioRecorderFailedToFinishRecording:(id)arg0 ;
-(void)audioRecorderFailedToStartRecording:(id)arg0 ;
-(void)audioRecorderFinishedRecording:(id)arg0 audioFile:(id)arg1 ;
-(void)dealloc;
-(void)didSelectItemWithInfo:(id)arg0 totalNumberOfAnnouncements:(NSUInteger)arg1 ;
-(void)didUpdateAveragePower:(float)arg0 ;
-(void)tearDownAudioActivity;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif