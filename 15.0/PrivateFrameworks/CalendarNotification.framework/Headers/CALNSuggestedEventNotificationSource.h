// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNSUGGESTEDEVENTNOTIFICATIONSOURCE_H
#define CALNSUGGESTEDEVENTNOTIFICATIONSOURCE_H

@class NSArray, NSString;
@protocol CALNNotificationSource, CALNSuggestedEventNotificationDataSource, CALNCalendarIconIdentifierProvider, CALNNotificationManager;

#import <Foundation/Foundation.h>


@interface CALNSuggestedEventNotificationSource : NSObject <CALNNotificationSource>



@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSObject<CALNSuggestedEventNotificationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, weak, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


+(id)_bundle;
+(id)coalescedSuggestedEventCategoryIdentifier;
+(id)confirmActionIdentifier;
+(id)defaultSuggestedEventCategoryIdentifier;
+(id)deleteActionIdentifier;
+(id)ignoreActionIdentifier;
+(id)suggestedEventCanceledCategoryIdentifier;
-(id)_sourceClientIdentifiersForObjectIDs:(id)arg0 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 notificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)refreshNotifications:(id)arg0 ;


@end


#endif