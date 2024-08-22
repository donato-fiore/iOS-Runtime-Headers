// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLAYBACKUPNEXTCONFIG_H
#define VUIPLAYBACKUPNEXTCONFIG_H


#import <Foundation/Foundation.h>


@interface VUIPlaybackUpNextConfig : NSObject

@property (nonatomic) CGFloat autoPlayTimerDuration; // ivar: _autoPlayTimerDuration
@property (nonatomic) CGFloat bootstrapInterval; // ivar: _bootstrapInterval
@property (nonatomic) CGFloat documentUpdateOffsetInterval; // ivar: _documentUpdateOffsetInterval
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger maximumAutoPlayableItems; // ivar: _maximumAutoPlayableItems
@property (nonatomic) CGFloat minAutoPlayStopTime; // ivar: _minAutoPlayStopTime
@property (nonatomic) CGFloat minTimeIntervalFromEndToDisplay; // ivar: _minTimeIntervalFromEndToDisplay


-(id)init;


@end


#endif