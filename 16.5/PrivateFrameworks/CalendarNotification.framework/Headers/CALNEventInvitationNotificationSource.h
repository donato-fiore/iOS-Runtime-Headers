// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNEVENTINVITATIONNOTIFICATIONSOURCE_H
#define CALNEVENTINVITATIONNOTIFICATIONSOURCE_H

@class NSArray, NSString;
@protocol CALNNotificationSource, CALNEventInvitationNotificationDataSource, CalDateProvider, CALNCalendarIconIdentifierProvider, CALNNotificationManager;

#import <Foundation/Foundation.h>


@interface CALNEventInvitationNotificationSource : NSObject <CALNNotificationSource>



@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSObject<CALNEventInvitationNotificationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, weak, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


+(id)acceptActionIdentifier;
+(id)couldBeJunkCategoryIdentifier;
+(id)declineActionIdentifier;
+(id)defaultCategoryIdentifier;
+(id)maybeActionIdentifier;
+(id)reportJunkActionIdentifier;
-(id)_notificationBodyForNotificationInfo:(id)arg0 contactIdentifier:(*id)arg1 summaryArgument:(*id)arg2 ;
-(id)contentForNotificationWithInfo:(id)arg0 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 notificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 dateProvider:(id)arg3 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)refreshNotifications:(id)arg0 ;


@end


#endif