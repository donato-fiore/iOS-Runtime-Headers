// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNCALENDARAPPBADGEUPDATER_H
#define CALNCALENDARAPPBADGEUPDATER_H

@class UISApplicationState;

#import <Foundation/Foundation.h>

#import "CALNInboxNotificationMonitor.h"

@interface CALNCalendarAppBadgeUpdater : NSObject

@property (readonly, nonatomic) UISApplicationState *applicationState; // ivar: _applicationState
@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // ivar: _inboxNotificationMonitor


-(id)initWithInboxNotificationMonitor:(id)arg0 ;
-(void)handleNotificationCountChangedNotification:(id)arg0 ;


@end


#endif