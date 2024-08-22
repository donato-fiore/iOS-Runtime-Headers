// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONSOURCEREFRESHER_H
#define CALNNOTIFICATIONSOURCEREFRESHER_H

@class NSArray<CALNNotificationSource>;
@protocol OS_dispatch_queue, CALNNotificationManager;

#import <Foundation/Foundation.h>

#import "CALNInboxNotificationMonitor.h"

@interface CALNNotificationSourceRefresher : NSObject {
    BOOL _needsRefreshOnNotificationsLoaded;
    NSObject<OS_dispatch_queue> *_refreshQueue;
}


@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // ivar: _inboxNotificationMonitor
@property (readonly, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, copy, nonatomic) NSArray<CALNNotificationSource> *sources; // ivar: _sources


-(id)initWithSources:(id)arg0 notificationMonitor:(id)arg1 notificationManager:(id)arg2 ;
-(void)_refreshNotifications:(id)arg0 ;
-(void)_withdrawExpiredNotificationsForSource:(id)arg0 ;
-(void)handleNotificationsChangedNotification:(id)arg0 ;
-(void)handleNotificationsLoadedNotification;
-(void)refreshNotifications;


@end


#endif