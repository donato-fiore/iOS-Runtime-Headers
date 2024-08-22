// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNSUGGESTEDEVENTNOTIFICATIONEKDATASOURCE_H
#define CALNSUGGESTEDEVENTNOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNSuggestedEventNotificationDataSource, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider;

#import <Foundation/Foundation.h>


@interface CALNSuggestedEventNotificationEKDataSource : NSObject <CALNSuggestedEventNotificationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider; // ivar: _inboxNotificationProvider
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider; // ivar: _notificationReferenceProvider
@property (readonly) Class superclass;


-(id)_eventForSourceClientIdentifier:(id)arg0 eventStore:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg0 inEventStore:(id)arg1 ;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg0 ;
-(id)fetchSuggestedEventNotifications;
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 ;
-(void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)arg0 accept:(BOOL)arg1 ;
-(void)_clearSuggestedEventNotificationWithObjectID:(id)arg0 ;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg0 ;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg0 ;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg0 ;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg0 ;


@end


#endif