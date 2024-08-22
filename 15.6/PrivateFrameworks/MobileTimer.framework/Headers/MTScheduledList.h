// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSCHEDULEDLIST_H
#define MTSCHEDULEDLIST_H

@class NSMutableOrderedSet, NSMutableDictionary, NSArray;
@protocol MTScheduledListDelegate;

#import <Foundation/Foundation.h>


@interface MTScheduledList : NSObject

@property (weak, nonatomic) NSObject<MTScheduledListDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger numberOfScheduledAlerts;
@property (readonly, nonatomic) NSUInteger numberOfScheduledAlertsAndNotifications;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledAlerts; // ivar: _orderedScheduledAlerts
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledEvents; // ivar: _orderedScheduledEvents
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledNotifications; // ivar: _orderedScheduledNotifications
@property (retain, nonatomic) NSMutableDictionary *scheduledAlertMap; // ivar: _scheduledAlertMap
@property (readonly, nonatomic) NSArray *scheduledAlerts;
@property (readonly, nonatomic) NSArray *scheduledAlertsAndNotifications;
@property (readonly, nonatomic) NSArray *scheduledObjects;


+(id)_dateIntervalFilter:(SEL)arg0 ;
+(id)_filterScheduledObjects:(id)arg0 withBlock:(id)arg1 ;
+(id)_nextScheduledObjectInSets:(id)arg0 ;
+(id)_scheduledObjectComparator:(SEL)arg0 ;
+(void)_sort:(id)arg0 ;
+(void)_sortAndFilter:(id)arg0 ;
+(void)_sortAndFilter:(id)arg0 objectsToScheduleAhead:(id)arg1 ;
-(BOOL)isScheduled:(id)arg0 ;
-(id)_scheduledListForTriggerType:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)nextScheduledAlert;
-(id)nextScheduledAlertOrNotification;
-(id)nextScheduledObject;
-(id)nextScheduledObjectWithTriggerType:(NSUInteger)arg0 ;
-(id)scheduledObjectsToFireBeforeDate:(id)arg0 ;
-(id)scheduledObjectsToFireInInterval:(id)arg0 ;
// -(void)_performScheduleChangingBlock:(id)arg0 withCompletion:(unk)arg1  ;
-(void)_scheduleObject:(id)arg0 ;
-(void)_unschedule:(id)arg0 ;
-(void)_unscheduleObject:(id)arg0 ;
-(void)reset;
-(void)schedule:(id)arg0 afterDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)unschedule:(id)arg0 ;


@end


#endif