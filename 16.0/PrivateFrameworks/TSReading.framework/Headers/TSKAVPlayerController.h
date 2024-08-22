// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAVPLAYERCONTROLLER_H
#define TSKAVPLAYERCONTROLLER_H

@class AVPlayer;
@protocol TSKAVPlayerControllerDelegate;

#import <Foundation/Foundation.h>


@interface TSKAVPlayerController : NSObject {
    float mRateBeforeScrubbing;
    NSUInteger mScrubbingCount;
    BOOL mIsObservingStatus;
    NSUInteger mAdditionalReferences;
}


@property (nonatomic) CGFloat absoluteCurrentTime; // ivar: _absoluteCurrentTime
@property (readonly, nonatomic) CGFloat absoluteDuration;
@property (readonly, nonatomic) BOOL canPlay; // ivar: mCanPlay
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, nonatomic) NSObject<TSKAVPlayerControllerDelegate> *delegate; // ivar: mDelegate
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat endTime;
@property (nonatomic, getter=isFastForwarding) BOOL fastForwarding; // ivar: mFastForwarding
@property (nonatomic, getter=isFastReversing) BOOL fastReversing; // ivar: mFastReversing
@property (readonly, nonatomic) AVPlayer *player; // ivar: mPlayer
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: mPlaying
@property (readonly, nonatomic) CGFloat remainingTime;
@property (nonatomic) NSInteger repeatMode; // ivar: mRepeatMode
@property (readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) CGFloat startTime;
@property (nonatomic) float volume; // ivar: mVolume


+(BOOL)automaticallyNotifiesObserversOfEndTime;
+(BOOL)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingEndTime;
+(id)keyPathsForValuesAffectingStartTime;
-(BOOL)p_canFastForward;
-(BOOL)p_canFastReverse;
-(id)init;
-(id)initWithPlayer:(id)arg0 delegate:(id)arg1 ;
-(void)addAdditionalReference;
-(void)beginScrubbing;
-(void)dealloc;
-(void)endScrubbing;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_applicationDidResignActive;
-(void)p_applyVolumeToPlayerItem;
-(void)p_closedCaptioningStatusDidChange:(id)arg0 ;
-(void)p_playbackDidFailWithError:(id)arg0 ;
-(void)p_playerItemDidPlayToEndTime:(id)arg0 ;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_updateClosedCaptionDisplayEnabled;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg0 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)seekBackwardByOneFrame;
-(void)seekForwardByOneFrame;
-(void)seekToBeginning;
-(void)seekToEnd;
-(void)teardown;


@end


#endif