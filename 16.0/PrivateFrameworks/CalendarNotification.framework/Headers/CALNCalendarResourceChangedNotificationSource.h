// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNCALENDARRESOURCECHANGEDNOTIFICATIONSOURCE_H
#define CALNCALENDARRESOURCECHANGEDNOTIFICATIONSOURCE_H

@class NSArray, NSString;
@protocol CALNNotificationSource, CALNCalendarResourceChangedNotificationDataSource, CalDateProvider, CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSourceEventRepresentationProvider;

#import <Foundation/Foundation.h>


@interface CALNCalendarResourceChangedNotificationSource : NSObject <CALNNotificationSource>



@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSObject<CALNCalendarResourceChangedNotificationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, weak, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSObject<CALNSourceEventRepresentationProvider> *sourceEventRepresentationProvider; // ivar: _sourceEventRepresentationProvider
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


-(id)contentForNotificationWithInfo:(id)arg0 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 notificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 sourceEventRepresentationProvider:(id)arg3 dateProvider:(id)arg4 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)refreshNotifications:(id)arg0 ;


@end


#endif