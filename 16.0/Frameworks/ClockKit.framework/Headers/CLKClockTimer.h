// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCLOCKTIMER_H
#define CLKCLOCKTIMER_H

@class CADisplayLink, NSHashTable, NSDate, NSCalendar;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CLKClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSHashTable" _handlersByUpdateFrequency;
    NSHashTable *_allHandlers;
    NSUInteger _nextToken;
    NSDate *_lastNow;
    NSInteger _lastHour;
    NSInteger _lastMinute;
    NSInteger _lastSecond;
    NSInteger _last15fps;
    NSInteger _last30fps;
    NSInteger _last60fps;
    BOOL _paused;
    BOOL _isForeground;
    BOOL _backlightOn;
    BOOL _permittedToRun;
    NSObject<OS_dispatch_source> *_signalSource;
    NSDate *_waitTimerScheduledFireTime;
    NSObject<OS_dispatch_source> *_waitForNextEventTimer;
    NSCalendar *_calendar;
}


@property (nonatomic) BOOL ignoreScreenState; // ivar: _ignoreScreenState


+(id)now;
+(id)sharedInstance;
-(BOOL)_hasHandlers;
-(CGFloat)_timeUntilNextHighAccuracyEventFromHour:(NSInteger)arg0 minute:(NSInteger)arg1 second:(NSInteger)arg2 nanosecond:(NSInteger)arg3 ;
-(CGFloat)_timeUntilNextHighAccuracyEventFromNow;
-(NSInteger)_minimumPossibleUpdateFrequency;
// -(id)_nextTokenWithUpdateFrequency:(NSInteger)arg0 wantsCommit:(BOOL)arg1 wantsHighAccuracy:(BOOL)arg2 identificationLog:(id)arg3 handler:(unk)arg4  ;
-(id)init;
// -(id)start15fpsUpdatesWithHandler:(id)arg0 identificationLog:(unk)arg1  ;
// -(id)start30fpsUpdatesWithHandler:(id)arg0 identificationLog:(unk)arg1  ;
// -(id)start60fpsUpdatesWithHandler:(id)arg0 identificationLog:(unk)arg1  ;
// -(id)startMinuteUpdatesWithHandler:(id)arg0 identificationLog:(unk)arg1  ;
// -(id)startSecondUpdatesWithHandler:(id)arg0 identificationLog:(unk)arg1  ;
// -(id)startUpdatesWithUpdateFrequency:(NSInteger)arg0 withHandler:(id)arg1 identificationLog:(unk)arg2  ;
-(void)_cancelWaitTimer;
-(void)_createDisplayLinkIfNeeded;
-(void)_dumpIndentificationLogs;
-(void)_handleTimePassed;
-(void)_maybeClearLastSeenTimeComponents;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_setDisplayLinkFrameInterval:(NSInteger)arg0 ;
-(void)_updateDisplayLink;
-(void)_updateDisplayLinkWithTimeUntilNextHighAccuracyEvent:(CGFloat)arg0 withMinimumUpdateFrequency:(NSInteger)arg1 ;
-(void)_updateIsPermittedToRun;
-(void)dealloc;
-(void)pause;
-(void)setHandler:(id)arg0 wantsCommit:(BOOL)arg1 ;
-(void)stopUpdatesForToken:(id)arg0 ;
-(void)unpause;


@end


#endif