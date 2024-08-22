// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTRACEPLAYERSCHEDULER_H
#define MNTRACEPLAYERSCHEDULER_H

@class NSTimer, NSMutableArray;
@protocol MNTracePlayerSchedulerDelegate;

#import <Foundation/Foundation.h>

#import "MNTracePlayerTimelineStream.h"

@interface MNTracePlayerScheduler : NSObject {
    NSTimer *_timer;
    CGFloat _lastTimerScheduleTime;
    NSMutableArray *_timelineStreams;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}


@property (weak, nonatomic) NSObject<MNTracePlayerSchedulerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat position; // ivar: _position
@property (nonatomic) CGFloat speedMultiplier; // ivar: _speedMultiplier


-(id)init;
-(void)_timerUpdated:(id)arg0 ;
-(void)_update;
-(void)addTimelineStream:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)removeAllTimelineStreams;
-(void)removeTimelineStream:(id)arg0 ;
-(void)resume;


@end


#endif