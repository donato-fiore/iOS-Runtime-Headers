// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERCONTROLLERTIMERESOLVER_H
#define AVPLAYERCONTROLLERTIMERESOLVER_H

@protocol AVTimeControlling;

#import <Foundation/Foundation.h>

#import "AVTimer.h"

@interface AVPlayerControllerTimeResolver : NSObject {
    id<AVTimeControlling> *_playerController;
    CGFloat _interval;
    CGFloat _resolution;
    CGFloat _currentTime;
    AVTimer *_timer;
}


@property CGFloat currentTime;
@property (readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property CGFloat currentTimeWithinEndTimes;
@property CGFloat interval;
@property CGFloat maxTime; // ivar: _maxTime
@property CGFloat minTime; // ivar: _minTime
@property (retain) NSObject<AVTimeControlling> *playerController;
@property (readonly) CGFloat remainingTargetTimeWithinEndTimes;
@property (readonly) CGFloat remainingTime;
@property (readonly) CGFloat remainingTimeWithinEndTimes;
@property CGFloat resolution;
@property (readonly) CGFloat seekableTimeRangeDuration;
@property CGFloat targetTime;
@property CGFloat targetTimeWithinEndTimes;


+(BOOL)automaticallyNotifiesObserversOfCurrentTime;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTime;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+(id)keyPathsForValuesAffectingTargetTime;
+(id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif