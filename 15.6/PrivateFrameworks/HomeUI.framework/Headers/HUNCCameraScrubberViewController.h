// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNCCAMERASCRUBBERVIEWCONTROLLER_H
#define HUNCCAMERASCRUBBERVIEWCONTROLLER_H

@class UIViewController, NSDate, HMCameraClip, NSString, CADisplayLink, UIButton, UIView, HFCameraPlaybackEngine, UIProgressView;
@protocol HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing;



@interface HUNCCameraScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing>



@property (retain, nonatomic) NSDate *clipStartDate; // ivar: _clipStartDate
@property (retain, nonatomic) HMCameraClip *currentClip; // ivar: _currentClip
@property (readonly, nonatomic) CGFloat currentScrubberResolution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) UIButton *liveButton; // ivar: _liveButton
@property (retain, nonatomic) UIView *panTrackingView; // ivar: _panTrackingView
@property (retain, nonatomic) UIView *playPauseBackgroundView; // ivar: _playPauseBackgroundView
@property (retain, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) UIProgressView *progressSlider; // ivar: _progressSlider
@property (readonly) Class superclass;


-(CGFloat)_playbackLength;
-(id)initWithPlaybackEngine:(id)arg0 currentClip:(id)arg1 startDate:(id)arg2 ;
-(void)_createAndStartDisplayLink;
-(void)_displayLinkUpdated:(id)arg0 ;
-(void)_loopPlaybackIfNeeded;
-(void)_removeDisplayLink;
-(void)_seekToCurrentScrubberValue;
-(void)_updateScrubberDisplayLinkState;
-(void)_updateSliderPosition;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)playPauseButtonPressed:(id)arg0 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)showClipScrubber;
-(void)toggleLive;
-(void)userDidPan:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif