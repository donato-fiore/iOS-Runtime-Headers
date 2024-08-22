// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL11UPDATESTORE_H
#define _TTC19APPSTOREKITINTERNAL11UPDATESTORE_H

@class ASDSoftwareUpdatesStore;



@interface _TtC19AppStoreKitInternal11UpdateStore : ASDSoftwareUpdatesStore {
    ? notificationQueue;
    ? coalesceUpdateNotifications;
    ? notificationWorkItem;
}




-(id)init;
-(void)broadcastChangeNotificationIfNotCoalescing;
-(void)dealloc;
-(void)reloadFromServerWithCompletionBlock:(id)arg0 ;


@end


#endif