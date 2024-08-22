// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNEVENTCANCELEDNOTIFICATIONEKDATASOURCE_H
#define CALNEVENTCANCELEDNOTIFICATIONEKDATASOURCE_H

@class NSString;
@protocol CALNEventCanceledNotificationDataSource, CALNDataSourceEventRepresentationProvider, EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNRemoteMutator;

#import <Foundation/Foundation.h>


@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource>



@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider; // ivar: _dataSourceEventRepresentationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider; // ivar: _eventStoreProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider; // ivar: _inboxNotificationProvider
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider; // ivar: _notificationReferenceProvider
@property (readonly, nonatomic) NSObject<CALNRemoteMutator> *remoteMutator; // ivar: _remoteMutator
@property (readonly) Class superclass;


-(id)_notificationInfoFromNotification:(id)arg0 inEventStore:(id)arg1 ;
-(id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg0 ;
-(id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)fetchEventCanceledNotifications;
-(id)initWithEventStoreProvider:(id)arg0 inboxNotificationProvider:(id)arg1 notificationReferenceProvider:(id)arg2 remoteMutator:(id)arg3 dataSourceEventRepresentationProvider:(id)arg4 ;
-(void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg0 ;
-(void)deleteCanceledEventWithSourceClientIdentifier:(id)arg0 ;


@end


#endif