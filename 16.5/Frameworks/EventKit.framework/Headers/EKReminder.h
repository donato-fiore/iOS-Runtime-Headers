// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKREMINDER_H
#define EKREMINDER_H

@class NSDate, NSDateComponents, NSTimeZone;


#import "EKCalendarItem.h"
#import "EKObjectID.h"

@interface EKReminder : EKCalendarItem

@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (copy, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID; // ivar: _parentID
@property (nonatomic) NSUInteger priority;
@property (copy, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents


+(Class)frozenClass;
+(id)generateUniqueIDWithReminder:(id)arg0 calendar:(id)arg1 ;
+(id)knownSingleValueKeysForComparison;
+(id)reminderWithEventStore:(id)arg0 ;
+(void)_removeSnoozedAlarmsFromReminder:(id)arg0 usingDueDate:(id)arg1 ;
-(BOOL)_reset;
-(BOOL)dueDateAllDay;
-(BOOL)isAllDay;
-(BOOL)refresh;
-(BOOL)save:(*id)arg0 ;
-(BOOL)startDateAllDay;
-(BOOL)validate:(*id)arg0 ;
-(NSUInteger)displayOrder;
-(NSUInteger)entityType;
-(id)_generateNewUniqueID;
-(id)bestDisplayAlarm;
-(id)description;
-(id)dueDate;
-(id)externalURI;
-(id)firstAlertDate;
-(id)init;
-(id)initWithPersistentObject:(id)arg0 ;
-(id)reminderIdentifier;
-(id)startDateForRecurrence;
-(id)startDateTimeZone;
-(id)startTimeZone;
-(id)timeZone;
-(id)title;
-(void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)arg0 toNewCalendar:(id)arg1 savingItem:(id)arg2 ;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg0 ;
-(void)clearParentID;
-(void)forceUpdateFrozenCalendar:(id)arg0 ;
-(void)reset;
-(void)rollback;
-(void)setAllDay:(BOOL)arg0 ;
-(void)setDisplayOrder:(NSUInteger)arg0 ;
-(void)setDueDate:(id)arg0 ;
-(void)setFirstAlertDate:(id)arg0 ;
-(void)setStartDateAllDay:(BOOL)arg0 ;
-(void)setStartDateTimeZone:(id)arg0 ;
-(void)setStartTimeZone:(id)arg0 ;
-(void)setTimeZone:(id)arg0 ;
-(void)snoozeAlarm:(id)arg0 withTimeIntervalFromNow:(CGFloat)arg1 ;


@end


#endif