// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADNOTIFICATIONGATHERINGCONTEXT_H
#define CADNOTIFICATIONGATHERINGCONTEXT_H

@class NSString, NSSet, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADNotificationGatheringContext : NSObject {
    NSString *_sourceExternalIdentifier;
    BOOL _excludingDelegateSources;
    BOOL _filteredByShowsNotificationsFlag;
    NSSet *_uncheckedCalendarIdentifiers;
    CGFloat _earliestExpirationDate;
}


@property (readonly, nonatomic) ClientConnection *connection; // ivar: _connection
@property (readonly, nonatomic) BOOL deleteOldNotifications; // ivar: _deleteOldNotifications
@property (readonly, nonatomic) NSDate *earliestExpiringNotification;
@property (readonly, nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSArray *notifications; // ivar: _notifications
@property (readonly, nonatomic) CGFloat now; // ivar: _now


-(?)endDateOfLastOccurrenceInCacheForEvent:(?)arg0 databasecacheRange;
-(?)expirationTimestampForEvent:(?)arg0 withInitialOccurrenceDatedatabase;
-(?)expirationTimestampForEventdatabase;
-(?)expirationTimestampForRecurrence:(?)arg0 eventdatabase;
-(BOOL)isEventTimeSensitiveForFocus:(*void)arg0 ;
-(BOOL)shouldSkipNotificationForCalendar:(*void)arg0 ;
-(BOOL)shouldSkipNotificationForStore:(*void)arg0 ;
-(id)initWithConnection:(id)arg0 afterDate:(id)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 excludingUncheckedCalendars:(BOOL)arg4 filteredByShowsNotificationsFlag:(BOOL)arg5 expanded:(BOOL)arg6 ;
-(void)addNotification:(id)arg0 ;


@end


#endif