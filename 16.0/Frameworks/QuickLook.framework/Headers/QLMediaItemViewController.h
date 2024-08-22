// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLMEDIAITEMVIEWCONTROLLER_H
#define QLMEDIAITEMVIEWCONTROLLER_H

@class NSMutableDictionary, UIView, UILabel, UIScrollView, NSLayoutConstraint, NSTimer, NSNumber, NSString, UITapGestureRecognizer;
@protocol QLMediaScrubberGestureDelegate, UIGestureRecognizerDelegate;


#import "QLMediaItemBaseViewController.h"
#import "QLMediaScrubberGesture.h"

@interface QLMediaItemViewController : QLMediaItemBaseViewController <QLMediaScrubberGestureDelegate, UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_playingInfo;
    UIView *_timeLabelBackground;
    UILabel *_timeLabel;
    UIScrollView *_scrubberScrollView;
    NSLayoutConstraint *_timeLabelConstraintX;
    NSLayoutConstraint *_timeLabelConstraintY;
    NSTimer *_playbackTimeHiddenTimer;
    NSInteger _playbackTimeFormat;
    BOOL _wasPlayingBeforeStartScrubbing;
    NSNumber *_isSeeking;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) QLMediaScrubberGesture *scrubGesture; // ivar: _scrubGesture
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToPlayGesture; // ivar: _tapToPlayGesture


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldHandleRegisteringForCommandCenterHandlers;
-(NSInteger)togglePlaybackFromControlCenter:(id)arg0 ;
-(NSInteger)userScrubbedInControlCenter:(id)arg0 ;
-(NSInteger)userTappedPauseInControlCenter:(id)arg0 ;
-(NSInteger)userTappedPlayInControlCenter:(id)arg0 ;
-(id)_playingInfoWithPlaybackDuration:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 ;
-(id)labelTextWithFormat:(NSInteger)arg0 elapsedInterval:(CGFloat)arg1 remainingInterval:(CGFloat)arg2 ;
-(id)registeredKeyCommands;
-(id)stringFromTimeInterval:(CGFloat)arg0 ;
-(id)timeLabelScrollView;
-(void)_registerForCommandCenterHandlers;
-(void)_unregisterForCommandCenterHandlers;
-(void)_updateCommandCenterPlayingInfoWithCurrentPlaybackTimeInformation;
-(void)dealloc;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg0 ;
-(void)hideTimeLabel;
-(void)hideTimeLabelAfterDelay;
-(void)hideTimeLabelAnimated:(BOOL)arg0 ;
-(void)hostApplicationDidEnterBackground:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observePlayingTime:(struct ? )arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewIsAppearingWithProgress:(CGFloat)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)removeTimeLabel;
-(void)scrubber:(id)arg0 didChangeValue:(float)arg1 ;
-(void)scrubberDidEndScrubbing:(id)arg0 ;
-(void)scrubberDidStartScrubbing:(id)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTimeLabelNeedsUpdate;
-(void)setUpTimeLabelIfNeeded;
-(void)showTimeLabel;
-(void)showTimeLabelIfNeeded;
-(void)tapToPlayGestureChanged:(id)arg0 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;


@end


#endif