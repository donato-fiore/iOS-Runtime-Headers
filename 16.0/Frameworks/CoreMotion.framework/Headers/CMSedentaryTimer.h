// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSEDENTARYTIMER_H
#define CMSEDENTARYTIMER_H


#import <Foundation/Foundation.h>

#import "CMSedentaryTimer_Internal.h"

@interface CMSedentaryTimer : NSObject

@property (readonly, nonatomic) CMSedentaryTimer_Internal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(BOOL)isActive;
-(id)init;
-(void)dealloc;
-(void)queryAlarmDataSince:(id)arg0 withHandler:(id)arg1 ;
-(void)registerForAlarmsWithHandler:(id)arg0 ;
-(void)startTimerWithStartTime:(id)arg0 periodInterval:(CGFloat)arg1 reminderInterval:(CGFloat)arg2 autoReschedule:(BOOL)arg3 handler:(id)arg4 ;
-(void)stopTimerWithHandler:(id)arg0 ;


@end


#endif