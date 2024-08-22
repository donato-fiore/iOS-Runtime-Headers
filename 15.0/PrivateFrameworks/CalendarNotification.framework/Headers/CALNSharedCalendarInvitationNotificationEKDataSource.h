// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNSHAREDCALENDARINVITATIONNOTIFICATIONEKDATASOURCE_H
#define CALNSHAREDCALENDARINVITATIONNOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNSharedCalendarInvitationNotificationDataSource, CALNDataAccessExpressConnection, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences;

#import <Foundation/Foundation.h>


@interface CALNSharedCalendarInvitationNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationNotificationDataSource>



@property (readonly, nonatomic) NSObject<CALNDataAccessExpressConnection> *dataAccessExpressConnection; // ivar: _dataAccessExpressConnection
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
-(id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg0 ;
-(id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)fetchSharedCalendarInvitationNotifications;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 dataAccessExpressConnection:(id)arg3 preferences:(id)arg4 ;
-(void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg0 ;
-(void)declineSharedCalendarWithSourceClientIdentifier:(id)arg0 ;
-(void)joinSharedCalendarWithSourceClientIdentifier:(id)arg0 ;
-(void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg0 ;


@end


#endif