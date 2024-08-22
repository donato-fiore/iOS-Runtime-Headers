// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNEVENTINVITATIONRESPONSENOTIFICATIONEKDATASOURCE_H
#define CALNEVENTINVITATIONRESPONSENOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNEventInvitationResponseNotificationDataSource, CALNDataSourceEventRepresentationProvider, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences;

#import <Foundation/Foundation.h>


@interface CALNEventInvitationResponseNotificationEKDataSource : NSObject <CALNEventInvitationResponseNotificationDataSource>



@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider; // ivar: _dataSourceEventRepresentationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider; // ivar: _inboxNotificationProvider
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider; // ivar: _notificationReferenceProvider
@property (readonly, nonatomic) NSObject<EKNotificationPreferences> *preferences; // ivar: _preferences
@property (readonly) Class superclass;


-(id)_notificationInfoFromNotification:(id)arg0 inEventStore:(id)arg1 ;
-(id)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(id)arg0 ;
-(id)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)fetchEventInvitationResponseNotifications;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 dataSourceEventRepresentationProvider:(id)arg3 preferences:(id)arg4 ;
-(void)clearEventInvitationResponseWithSourceClientIdentifier:(id)arg0 ;


@end


#endif