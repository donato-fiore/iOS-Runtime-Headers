// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DTSCANVASVIEWCONTROLLER_H
#define DTSCANVASVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIButton, NSTimer, AVPlayer, ETBalloonPluginDataSource, NSString, NSArray;
@protocol ETCanvasViewDelegate, DTSColorPickerDelegate, DTSCanvasViewControllerSendDelegate;


#import "ETCanvasView.h"
#import "DTSColorPicker.h"
#import "ETMessage.h"

@interface DTSCanvasViewController : UIViewController <ETCanvasViewDelegate, DTSColorPickerDelegate>

 {
    NSMutableArray *_unplayedMessages;
    BOOL _isPlayingMessage;
    UIButton *_replayButton;
    BOOL _showingReplayButton;
    NSTimer *_composeSessionEndTimer;
    AVPlayer *_videoPlayer;
    UIButton *_audioToggleButton;
    UIButton *_cancelButton;
    UIButton *_skipButton;
}


@property (nonatomic, getter=isAutoPlayOnAppearanceDisabled) BOOL autoPlayOnAppearanceDisabled; // ivar: _autoPlayOnAppearanceDisabled
@property (copy, nonatomic) id *balloonPlaybackCompletion; // ivar: _balloonPlaybackCompletion
@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (retain, nonatomic) ETCanvasView *canvasView; // ivar: _canvasView
@property (retain, nonatomic) DTSColorPicker *colorPicker; // ivar: _colorPicker
@property (nonatomic, getter=isComposeDisabled) BOOL composeDisabled; // ivar: _composeDisabled
@property (nonatomic, getter=isComposingCompositeMessage) BOOL composingCompositeMessage; // ivar: _composingCompositeMessage
@property (nonatomic) unsigned short composingMessageType; // ivar: _composingMessageType
@property (weak, nonatomic) ETBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferMessageSend; // ivar: _deferMessageSend
@property (readonly, nonatomic) NSArray *deferredMessages; // ivar: _deferredMessages
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreAppearanceCallbacks; // ivar: _ignoreAppearanceCallbacks
@property (nonatomic) CGFloat mediaMessagePlayTrackerTime; // ivar: _mediaMessagePlayTrackerTime
@property (retain, nonatomic) ETMessage *messageForReplay; // ivar: _messageForReplay
@property (nonatomic) BOOL overrideAudioDefaultToOff; // ivar: _overrideAudioDefaultToOff
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isPlaybackEnabled) BOOL playbackEnabled; // ivar: _playbackEnabled
@property (nonatomic, getter=isPlayingCompositeMessage) BOOL playingCompositeMessage; // ivar: _playingCompositeMessage
@property (retain, nonatomic) ETMessage *playingMessage; // ivar: _playingMessage
@property (nonatomic, getter=isPlayingMessages) BOOL playingMessages; // ivar: _playingMessages
@property (weak, nonatomic) NSObject<DTSCanvasViewControllerSendDelegate> *sendDelegate; // ivar: _sendDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesCompactKeyboardLayout; // ivar: _usesCompactKeyboardLayout


+(id)audioToggleOffImage;
+(id)audioToggleOnImage;
+(id)replayButtonFont;
-(BOOL)_canComposeAfterMediaPlayback;
-(BOOL)_canLoopMessageDuringPlayback:(id)arg0 ;
-(BOOL)_canStartMessagePlaybackLoop;
-(BOOL)_isVisible;
-(BOOL)_shouldAutoSend;
-(BOOL)_shouldDimColorPicker;
-(BOOL)_shouldShowCancelButton;
-(BOOL)_shouldShowSkipButton;
-(BOOL)_tapRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_usingDemoHook;
-(BOOL)canExpireMessages;
-(BOOL)canReplay;
-(BOOL)canShowReplayButton;
-(BOOL)canvasView:(id)arg0 tapRecognizerShouldBegin:(id)arg1 ;
-(BOOL)canvasViewShouldSendWithTimer:(id)arg0 ;
-(BOOL)canvasViewShouldUseFastVerticalWisp:(id)arg0 ;
-(BOOL)dataSource:(id)arg0 addDemoHookToMessage:(*id)arg1 ;
-(BOOL)dataSourceShouldUseDemoHook:(id)arg0 ;
-(BOOL)dataSourceViewIsMostlyVisible:(id)arg0 ;
-(BOOL)hasMessageForReplay;
-(BOOL)shouldAutorotate;
-(CGFloat)_cornerButtonInset;
-(CGFloat)_nonAnimatedMessagePlaybackDuration;
-(CGFloat)_rightButtonInset;
-(CGFloat)minimumBottomMargin;
-(NSInteger)recentHeartRate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_audioToggleButton;
-(id)_cancelButton;
-(id)_playingParentMessage;
-(id)_replayButton;
-(id)_skipButton;
-(id)init;
-(void)_applicationDidBecomeActive;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillResignActive;
-(void)_audioToggleButtonTapped;
-(void)_cancelButtonTapped;
-(void)_clearComposeSessionEndTimer;
-(void)_composeSessionEndTimerFired;
-(void)_continueMessagePlaybackLoopWithDelay:(BOOL)arg0 ;
-(void)_exportDemoHookMessage;
-(void)_hideVideoPlayer;
-(void)_playMessage:(id)arg0 ;
-(void)_playNextMessage;
-(void)_relinquishAudio;
-(void)_reloadUnplayedMessages;
-(void)_schedulePlaybackOfCompositeMessageContent:(id)arg0 ;
-(void)_sendAutosendingComposition;
-(void)_sendDemoHookMessage;
-(void)_setAngerUsesForceTouch:(BOOL)arg0 ;
-(void)_setCachedMessageForReplay:(id)arg0 ;
-(void)_setReplayButton:(id)arg0 ;
-(void)_setShowingReplayButton:(BOOL)arg0 ;
-(void)_showDemoHookAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_skipButtonTapped;
-(void)_startComposeSessionEndTimer;
-(void)_startVideoPlayerWithMessage:(id)arg0 ;
-(void)_stopPlaybackAnimated:(BOOL)arg0 ;
-(void)_updateAudioOnOffButton;
-(void)_updateAudioOnOffButtonImage;
-(void)_updateCanvasInteractionEnabled;
-(void)_updateColorPickerEnabled;
-(void)_updatePlaybackControls;
-(void)_updateSendButton;
-(void)_updateSkipButtonFrame;
-(void)_updateVideoPlayerUI;
-(void)_videoMessageDidFinishPlaying:(id)arg0 ;
-(void)addUnplayedMessage:(id)arg0 ;
-(void)canvasView:(id)arg0 angerUsesForceTouch:(BOOL)arg1 ;
-(void)canvasView:(id)arg0 didBeginComposingMessageType:(unsigned short)arg1 ;
-(void)canvasView:(id)arg0 didBeginPlayingMessage:(id)arg1 ;
-(void)canvasView:(id)arg0 didEndComposingMessageType:(unsigned short)arg1 ;
-(void)canvasView:(id)arg0 didEndPlayingMessage:(id)arg1 ;
-(void)canvasView:(id)arg0 didUpdateComposingMessageType:(unsigned short)arg1 ;
-(void)canvasView:(id)arg0 sendMessage:(id)arg1 ;
-(void)canvasView:(id)arg0 willEndPlayingMessage:(id)arg1 ;
-(void)canvasViewDidBeginStroke:(id)arg0 ;
-(void)canvasViewDidEndMediaAppearance:(id)arg0 ;
-(void)canvasViewDidEndStroke:(id)arg0 ;
-(void)canvasViewDidPause:(id)arg0 ;
-(void)canvasViewDidStartMediaAppearance:(id)arg0 ;
-(void)canvasViewDidUnpause:(id)arg0 ;
-(void)canvasViewWillReachComposingSizeLimit:(id)arg0 ;
-(void)clearDeferredMessages;
-(void)colorPickerSelectedColorDidChange:(id)arg0 ;
-(void)colorPickerTapped:(id)arg0 ;
-(void)dataSource:(id)arg0 didReceiveSessionMessage:(id)arg1 ;
-(void)dataSource:(id)arg0 didUpdateAttachmentURL:(id)arg1 forMessageWithIdentifier:(id)arg2 ;
-(void)dataSource:(id)arg0 startPlaybackWithCompletion:(id)arg1 ;
-(void)dataSourceStopPlayback:(id)arg0 ;
-(void)didBeginComposingMessage;
-(void)didChangeColorPickerColor;
-(void)didEndComposingMessage;
-(void)didEndSessionPlayback;
-(void)replay;
-(void)startMessagePlaybackLoop;
-(void)updateVideoUI;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willBeginSessionPlayback;
-(void)willEndSessionPlaybackInterrupted:(BOOL)arg0 ;


@end


#endif