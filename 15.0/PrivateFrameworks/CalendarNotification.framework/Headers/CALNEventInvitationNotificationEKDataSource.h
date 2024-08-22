// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNEVENTINVITATIONNOTIFICATIONEKDATASOURCE_H
#define CALNEVENTINVITATIONNOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNEventInvitationNotificationDataSource, CALNDataSourceEventRepresentationProvider, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences, CALNRemoteMutator;

#import <Foundation/Foundation.h>


@interface CALNEventInvitationNotificationEKDataSource : NSObject <CALNEventInvitationNotificationDataSource>



@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider; // ivar: _dataSourceEventRepresentationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider; // ivar: _inboxNotificationProvider
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider; // ivar: _notificationReferenceProvider
@property (readonly, nonatomic) NSObject<EKNotificationPreferences> *preferences; // ivar: _preferences
@property (readonly, nonatomic) NSObject<CALNRemoteMutator> *remoteMutator; // ivar: _remoteMutator
@property (readonly) Class superclass;


+(NSInteger)_spanForNewStatusWithEvent:(id)arg0 ;
-(id)_notificationInfoFromNotification:(id)arg0 inEventStore:(id)arg1 ;
-(id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)arg0 ;
-(id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)fetchEventInvitationNotifications;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 remoteMutator:(id)arg3 dataSourceEventRepresentationProvider:(id)arg4 preferences:(id)arg5 ;
-(void)_setParticipantStatus:(NSInteger)arg0 withSourceClientIdentifier:(id)arg1 ;
-(void)acceptEventInvitationWithSourceClientIdentifier:(id)arg0 ;
-(void)clearEventInvitationWithSourceClientIdentifier:(id)arg0 ;
-(void)declineEventInvitationWithSourceClientIdentifier:(id)arg0 ;
-(void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)arg0 ;
-(void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)arg0 ;


@end


#endif