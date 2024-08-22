// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEFAULTEDREMINDMENOTIFICATIONCONTROLLERALARMDATEPROVIDER_H
#define DEFAULTEDREMINDMENOTIFICATIONCONTROLLERALARMDATEPROVIDER_H

@class NSString, NSDate;
@protocol EDRemindMeNotificationControllerAlarmDateProvider;

#import <Foundation/Foundation.h>


@interface DefaultEDRemindMeNotificationControllerAlarmDateProvider : NSObject <EDRemindMeNotificationControllerAlarmDateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *nextDate;
@property (readonly) Class superclass;




@end


#endif