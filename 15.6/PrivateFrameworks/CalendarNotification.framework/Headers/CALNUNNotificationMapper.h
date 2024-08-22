// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNUNNOTIFICATIONMAPPER_H
#define CALNUNNOTIFICATIONMAPPER_H


#import <Foundation/Foundation.h>

#import "CALNUNNotificationRequestMapper.h"

@interface CALNUNNotificationMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper; // ivar: _notificationRequestMapper


-(id)_calnNotificationFromUNNotification:(id)arg0 ;
-(id)calnNotificationFromUNNotification:(id)arg0 ;
-(id)calnNotificationsFromUNNotifications:(id)arg0 ;
-(id)initWithNotificationRequestMapper:(id)arg0 ;


@end


#endif