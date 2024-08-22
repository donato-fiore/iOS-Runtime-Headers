// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARNOTIFICATIONREFERENCE_H
#define EKCALENDARNOTIFICATIONREFERENCE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKCalendarNotification.h"
#import "EKObjectID.h"

@interface EKCalendarNotificationReference : NSObject {
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
}


@property (readonly, nonatomic) EKCalendarNotification *notification;
@property (readonly, nonatomic) EKObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) int type; // ivar: _type


-(NSInteger)_notificationTypeForResourceChange:(id)arg0 notificationType:(int)arg1 ;
-(id)description;
-(id)initWithType:(int)arg0 objectID:(id)arg1 date:(id)arg2 eventStore:(id)arg3 ;
-(id)initWithType:(int)arg0 objectID:(id)arg1 eventStore:(id)arg2 ;


@end


#endif