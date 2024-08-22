// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFDEFAULTDATEPROVIDER_H
#define SBFDEFAULTDATEPROVIDER_H

@class NSMutableDictionary, NSTimer, NSCalendar, NSString;
@protocol SBFDateProviding;

#import <Foundation/Foundation.h>


@interface SBFDefaultDateProvider : NSObject <SBFDateProviding>

 {
    NSMutableDictionary *_minuteHandlers;
    NSUInteger _nextToken;
    NSTimer *_minuteTimer;
    NSCalendar *_calendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)date;
-(id)init;
-(id)observeMinuteUpdatesWithHandler:(id)arg0 ;
-(void)_minuteTimerFired;
-(void)_scheduleNextMinuteTimer;
-(void)_updateMinuteTimer;
-(void)removeMinuteUpdateHandler:(id)arg0 ;


@end


#endif