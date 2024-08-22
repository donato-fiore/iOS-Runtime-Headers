// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERTIMECONTROLLER_H
#define AVPLAYERTIMECONTROLLER_H

@class AVPlayer, NSArray;
@protocol AVTimeControlling;

#import <Foundation/Foundation.h>

#import "AVValueTiming.h"
#import "AVObservationController.h"

@interface AVPlayerTimeController : NSObject <AVTimeControlling>



@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, getter=isCompletelySeekable) BOOL completelySeekable;
@property (readonly, nonatomic) CGFloat contentDuration;
@property (readonly, nonatomic) CGFloat contentDurationWithinEndTimes;
@property (readonly, nonatomic) BOOL hasSeekableLiveStreamingContent;
@property (readonly, nonatomic) CGFloat maxTime;
@property (retain, nonatomic) AVValueTiming *maxTiming; // ivar: _maxTiming
@property (readonly, nonatomic) CGFloat minTime;
@property (retain, nonatomic) AVValueTiming *minTiming; // ivar: _minTiming
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) CGFloat seekToTime;
@property (readonly, nonatomic) NSArray *seekableTimeRanges;
@property (readonly, nonatomic, getter=isSeeking) BOOL seeking;
@property (retain, nonatomic) AVValueTiming *timing; // ivar: _timing


+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
-(id)initWithPlayer:(id)arg0 ;
-(struct ? )forwardPlaybackEndTime;
-(struct ? )reversePlaybackEndTime;
-(void)_updateMinAndMaxTiming;
-(void)_updateTiming;
-(void)dealloc;
-(void)seekToTime:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)startTimingObservation;
-(void)stopTimingObservation;


@end


#endif