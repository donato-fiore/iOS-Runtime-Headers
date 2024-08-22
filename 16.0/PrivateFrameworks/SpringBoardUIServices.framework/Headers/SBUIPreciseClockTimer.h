// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPRECISECLOCKTIMER_H
#define SBUIPRECISECLOCKTIMER_H

@class CADisplayLink, NSMutableDictionary, NSCalendar;

#import <Foundation/Foundation.h>


@interface SBUIPreciseClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    NSUInteger _nextToken;
    NSCalendar *_calendar;
    NSInteger _lastHour;
    NSInteger _lastMinute;
}




+(id)now;
+(id)sharedInstance;
-(id)init;
-(id)startMinuteUpdatesWithHandler:(id)arg0 ;
-(void)_handleTimePassed;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(CGFloat)arg0 ;
-(void)dealloc;
-(void)stopMinuteUpdatesForToken:(id)arg0 ;


@end


#endif