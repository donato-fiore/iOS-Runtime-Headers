// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISUNSCHEDULECONTROLLER_H
#define _UISUNSCHEDULECONTROLLER_H

@class NSMapTable, GEOAlmanac, NSTimer;

#import <Foundation/Foundation.h>


@interface _UISunScheduleController : NSObject {
    NSMapTable *_observers;
    GEOAlmanac *_almanac;
    BOOL _hasTimeZoneLocation;
    ? _timeZoneLocation;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
    CGFloat _sunsetAbsolute;
    CGFloat _sunriseAbsolute;
}


@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;


-(id)init;
-(id)nextTransition:(BOOL)arg0 ;
-(void)_invalidateNextEventTimer;
-(void)_notifyChange;
-(void)_setNextEventTimerToAbsoluteTime:(CGFloat)arg0 ;
-(void)_significantTimeChange;
-(void)_timeZoneChange;
-(void)_updateGeoCity;
-(void)_updateInScheduleTime:(BOOL)arg0 ;
-(void)_updateStatus;
-(void)_updateStatusWithAbsoluteTime:(CGFloat)arg0 ;
-(void)_updateSunriseSunsetTimesRelativeTo:(CGFloat)arg0 ;
-(void)addObserver:(id)arg0 changeHandler:(id)arg1 ;
-(void)dealloc;
-(void)forceUpdate;
-(void)removeObserver:(id)arg0 ;


@end


#endif