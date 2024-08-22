// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROVERRIDABLEDATEPROVIDER_H
#define PROVERRIDABLEDATEPROVIDER_H

@class NSHashTable, NSCalendar, NSTimer, NSDate, NSString;
@protocol PRDateProviding;

#import <Foundation/Foundation.h>


@interface PROverridableDateProvider : NSObject <PRDateProviding>

 {
    NSHashTable *_minuteObservers;
    NSCalendar *_calendar;
    NSTimer *_minuteTimer;
}


@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (readonly) Class superclass;


-(id)init;
-(void)_minuteTimerFired;
-(void)_notifyObserversDidUpdateDate:(id)arg0 ;
-(void)_scheduleNextMinuteTimer;
-(void)addMinuteUpdateObserver:(id)arg0 ;
-(void)removeMinuteUpdateObserver:(id)arg0 ;


@end


#endif