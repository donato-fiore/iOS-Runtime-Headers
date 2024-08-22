// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNUITRIGGERSNOTIFICATIONSOURCE_H
#define CALNUITRIGGERSNOTIFICATIONSOURCE_H

@class NSArray, NSString;
@protocol CALNNotificationSource, EKEventStoreProvider, CALNNotificationManager;

#import <Foundation/Foundation.h>

#import "CALNCalendarResourceChangedNotificationSource.h"
#import "CALNEventCanceledNotificationSource.h"
#import "CALNEventInvitationNotificationSource.h"
#import "CALNEventInvitationResponseNotificationSource.h"
#import "CALNSharedCalendarInvitationNotificationSource.h"
#import "CALNSharedCalendarInvitationResponseNotificationSource.h"
#import "CALNTriggeredEventNotificationSource.h"

@interface CALNUITriggersNotificationSource : NSObject <CALNNotificationSource>



@property (readonly, nonatomic) CALNCalendarResourceChangedNotificationSource *calendarResourceChangedNotificationSource; // ivar: _calendarResourceChangedNotificationSource
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CALNEventCanceledNotificationSource *eventCanceledNotificationSource; // ivar: _eventCanceledNotificationSource
@property (readonly, nonatomic) CALNEventInvitationNotificationSource *eventInvitationNotificationSource; // ivar: _eventInvitationNotificationSource
@property (readonly, nonatomic) CALNEventInvitationResponseNotificationSource *eventInvitationResponseNotificationSource; // ivar: _eventInvitationResponseNotificationSource
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) CALNSharedCalendarInvitationNotificationSource *sharedCalendarInvitationNotificationSource; // ivar: _sharedCalendarInvitationNotificationSource
@property (readonly, nonatomic) CALNSharedCalendarInvitationResponseNotificationSource *sharedCalendarInvitationResponseNotificationSource; // ivar: _sharedCalendarInvitationResponseNotificationSource
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource; // ivar: _triggeredEventNotificationSource


+(id)_launchURL;
-(id)_fakeAttendeeRepliedNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeAttendeeRepliedNotificationInfoWithDictionary:(id)arg0 ;
-(id)_fakeCalendarResourceChangedNotificationInfoWithDictionary:(id)arg0 sourceClientIdentifier:(id)arg1 notificationType:(NSInteger)arg2 resourceChangeType:(unsigned int)arg3 ;
-(id)_fakeEventCanceledNotificationInfoWithDictionary:(id)arg0 ;
-(id)_fakeEventInvitationNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeInvitationNotificationInfoWithDictionary:(id)arg0 type:(NSInteger)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)_fakeInvitationNotificationWithDictionary:(id)arg0 type:(NSInteger)arg1 ;
-(id)_fakeInviteCanceledNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeInviteModifiedNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeNextEventNotificationContentWithSourceClientIdentifier:(id)arg0 ;
-(id)_fakeNextEventNotificationInfoNextEvent:(*id)arg0 ;
-(id)_fakeSharedCalendarEventAddedNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarEventDeletedNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarEventUpdatedNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarInvitationNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarInvitationNotificationInfoWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarInviteReplyNotificationContentWithDictionary:(id)arg0 ;
-(id)_fakeSharedCalendarInviteReplyNotificationInfoWithDictionary:(id)arg0 ;
-(id)_fakeTriggeredEventNotificationContentWithSourceClientIdentifier:(id)arg0 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithNotificationManager:(id)arg0 eventStoreProvider:(id)arg1 triggeredEventNotificationSource:(id)arg2 eventInvitationNotificationSource:(id)arg3 eventInvitationResponseNotificationSource:(id)arg4 eventCanceledNotificationSource:(id)arg5 sharedCalendarInvitationNotificationSource:(id)arg6 sharedCalendarInvitationResponseNotificationSource:(id)arg7 calendarResourceChangedNotificationSource:(id)arg8 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)refreshNotifications:(id)arg0 ;


@end


#endif