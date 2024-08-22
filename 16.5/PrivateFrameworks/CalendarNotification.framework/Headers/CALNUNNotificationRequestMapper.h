// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNUNNOTIFICATIONREQUESTMAPPER_H
#define CALNUNNOTIFICATIONREQUESTMAPPER_H


#import <Foundation/Foundation.h>

#import "CALNUNNotificationContentMapper.h"
#import "CALNUNNotificationIconMapper.h"

@interface CALNUNNotificationRequestMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper; // ivar: _notificationContentMapper
@property (readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper; // ivar: _notificationIconMapper


-(id)calnNotificationRequestFromUNNotificationRequest:(id)arg0 ;
-(id)initWithNotificationContentMapper:(id)arg0 notificationIconMapper:(id)arg1 ;
-(id)unNotificationRequestFromCALNNotificationRequest:(id)arg0 ;


@end


#endif