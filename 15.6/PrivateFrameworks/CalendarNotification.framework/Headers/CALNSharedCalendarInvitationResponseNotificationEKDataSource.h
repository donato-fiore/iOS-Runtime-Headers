// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNSHAREDCALENDARINVITATIONRESPONSENOTIFICATIONEKDATASOURCE_H
#define CALNSHAREDCALENDARINVITATIONRESPONSENOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNSharedCalendarInvitationResponseNotificationDataSource, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences;

#import <Foundation/Foundation.h>


@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider; // ivar: _inboxNotificationProvider
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider; // ivar: _notificationReferenceProvider
@property (readonly, nonatomic) NSObject<EKNotificationPreferences> *preferences; // ivar: _preferences
@property (readonly) Class superclass;


-(id)_notificationInfoFromNotification:(id)arg0 ;
-(id)_notificationInfoFromNotificationReference:(id)arg0 ;
-(id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)arg0 ;
-(id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)fetchSharedCalendarInvitationResponseNotifications;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 preferences:(id)arg3 ;
-(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg0 ;


@end


#endif