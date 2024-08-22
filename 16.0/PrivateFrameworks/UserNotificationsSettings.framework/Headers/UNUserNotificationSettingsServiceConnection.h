// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNUSERNOTIFICATIONSETTINGSSERVICECONNECTION_H
#define UNUSERNOTIFICATIONSETTINGSSERVICECONNECTION_H

@class NSMutableArray, NSXPCConnection, NSString;
@protocol UNUserNotificationSettingsClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol>

 {
    NSMutableArray *_observers;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // ivar: _callOutQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)allNotificationSources;
-(id)init;
-(id)notificationSourceWithIdentifier:(id)arg0 ;
-(id)notificationSourcesWithIdentifiers:(id)arg0 ;
-(id)notificationSystemSettings;
-(void)_invalidate;
-(void)_queue_addObserver:(id)arg0 ;
-(void)_queue_removeObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)authorizationWithOptions:(NSUInteger)arg0 forNotificationSourceIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)replaceNotificationSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 topicIdentifier:(id)arg2 ;
-(void)resetScheduledDeliverySetting;
-(void)setNotificationSystemSettings:(id)arg0 ;
-(void)updateNotificationSourcesWithBundleIdentifiers:(id)arg0 ;
-(void)updateNotificationSystemSettings:(id)arg0 ;


@end


#endif