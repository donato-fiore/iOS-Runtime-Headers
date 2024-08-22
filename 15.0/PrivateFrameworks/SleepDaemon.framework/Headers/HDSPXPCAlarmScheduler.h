// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPXPCALARMSCHEDULER_H
#define HDSPXPCALARMSCHEDULER_H

@class NSString;
@protocol HDSPEventScheduler, HDSPNotificationObserver, HDSPEventScheduleDelegate;

#import <Foundation/Foundation.h>


@interface HDSPXPCAlarmScheduler : NSObject <HDSPEventScheduler, HDSPNotificationObserver>



@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPEventScheduleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCurrentDateProvider:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)scheduleEventForDate:(id)arg0 options:(NSUInteger)arg1 ;
-(void)unschedule;


@end


#endif