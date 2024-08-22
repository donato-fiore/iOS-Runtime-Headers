// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSRELATIVEDATETIMER_H
#define BSRELATIVEDATETIMER_H

@class NSCalendar, NSTimer, NSDate, NSString;
@protocol BSPowerMonitorObserver, BSRelativeDateTimerDelegate;

#import <Foundation/Foundation.h>


@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver>

 {
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    NSUInteger _currResolution;
    NSInteger _currValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BSRelativeDateTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(CGFloat)nextFireInterval;
-(id)date;
-(id)init;
-(void)_fireAndUpdateTimerIfNecessary;
-(void)_fireForLocaleEvent:(id)arg0 ;
-(void)dealloc;
-(void)fireAndSchedule;
-(void)invalidate;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg0 ;
-(void)setDate:(id)arg0 ;


@end


#endif