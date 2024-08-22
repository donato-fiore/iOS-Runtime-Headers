// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUSERNOTIFICATIONACTIONDISPATCHER_H
#define MTUSERNOTIFICATIONACTIONDISPATCHER_H

@class NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "MTAlarmStorage.h"
#import "MTMetrics.h"
#import "MTTimerStorage.h"

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate>



@property (retain, nonatomic) MTAlarmStorage *alarmStorage; // ivar: _alarmStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMetrics *metrics; // ivar: _metrics
@property (readonly) Class superclass;
@property (retain, nonatomic) MTTimerStorage *timerStorage; // ivar: _timerStorage


+(NSUInteger)_alarmNotificationActionForUserNotificationAction:(id)arg0 category:(id)arg1 ;
+(NSUInteger)_timerNotificationActionForUserNotificationAction:(id)arg0 ;
-(id)initWithAlarmStorage:(id)arg0 timerStorage:(id)arg1 ;
-(void)_handleAlarmNotificationResponse:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_handleTimerNotificationResponse:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)handleAlarmNotificationIdentifier:(id)arg0 action:(NSUInteger)arg1 category:(id)arg2 completionHandler:(id)arg3 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif