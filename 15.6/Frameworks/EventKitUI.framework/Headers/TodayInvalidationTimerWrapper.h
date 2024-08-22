// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TODAYINVALIDATIONTIMERWRAPPER_H
#define TODAYINVALIDATIONTIMERWRAPPER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}




-(BOOL)todayChangedAfterInvalidation;
-(id)initWithCalendar:(id)arg0 ;
-(void)_killTimeZoneTimer;
-(void)_setupTimeZoneTimerWithCalendar:(id)arg0 ;
-(void)dealloc;
-(void)invalidateTodayAndNotifyIfChanged;


@end


#endif