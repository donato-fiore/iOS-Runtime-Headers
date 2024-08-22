// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNOTIFICATIONGATHERINGCONTEXT_H
#define CADNOTIFICATIONGATHERINGCONTEXT_H

@class NSString, NSMutableArray, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface CADNotificationGatheringContext : NSObject {
    NSString *_sourceExternalIdentifier;
    BOOL _excludingDelegateSources;
    BOOL _filteredByShowsNotificationsFlag;
    NSMutableArray *_notificationTypes;
    NSMutableArray *_rowIDs;
    NSMutableArray *_occurrenceDates;
    CGFloat _earliestExpirationDate;
    ? _database;
}


@property ? database;
@property (readonly, nonatomic) BOOL deleteOldNotifications; // ivar: _deleteOldNotifications
@property (readonly, nonatomic) NSDate *earliestExpiringNotification;
@property (readonly, nonatomic) NSArray *notificationTypes;
@property (readonly, nonatomic) CGFloat now; // ivar: _now
@property (readonly, nonatomic) NSArray *occurrenceDates;
@property (readonly, nonatomic) NSArray *rowIDs;


-(?)initWithDatabase:(?)arg0 afterDate:(?)arg1 forSourceWithExternalIdentifier:(?)arg2 excludingDelegateSourcesfilteredByShowsNotificationsFlag;
-(BOOL)shouldSkipNotificationForStore:(*void)arg0 ;
-(CGFloat)endDateOfLastOccurrenceInCacheForEvent:(*void)arg0 ;
-(CGFloat)expirationTimestampForEvent:(*void)arg0 ;
-(CGFloat)expirationTimestampForEvent:(*void)arg0 withInitialOccurrenceDate:(CGFloat)arg1 ;
-(CGFloat)expirationTimestampForRecurrence:(*void)arg0 event:(*void)arg1 ;
-(void)addNotificationWithType:(int)arg0 rowID:(int)arg1 expirationDate:(CGFloat)arg2 ;
-(void)addNotificationWithType:(int)arg0 rowID:(int)arg1 occurrenceDate:(CGFloat)arg2 expirationDate:(CGFloat)arg3 ;


@end


#endif