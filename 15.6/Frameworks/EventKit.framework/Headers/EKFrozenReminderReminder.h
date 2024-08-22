// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKFROZENREMINDERREMINDER_H
#define EKFROZENREMINDERREMINDER_H



#import "EKFrozenReminderObject.h"

@interface EKFrozenReminderReminder : EKFrozenReminderObject



+(Class)meltedClass;
-(BOOL)_applyChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)defaultAlarmRemoved;
-(BOOL)defaultAlarmWasDeleted;
-(BOOL)hasAttendees;
-(BOOL)hasNotes;
-(BOOL)hasRecurrenceRules;
-(NSUInteger)priority;
-(id)URLString;
-(id)UUID;
-(id)_copyToNewList:(id)arg0 error:(*id)arg1 ;
-(id)_reminder;
-(id)actionString;
-(id)alarms;
-(id)allAlarmsSet;
-(id)appLinkData;
-(id)attachmentsSet;
-(id)attendeesRaw;
-(id)calendar;
-(id)calendarItemExternalIdentifier;
-(id)calendarItemIdentifier;
-(id)clientLocation;
-(id)completionDate;
-(id)creationDate;
-(id)detachedItems;
-(id)dueDateComponents;
-(id)ekExceptionDates;
-(id)initNewReminderInStore:(id)arg0 ;
-(id)lastModifiedDate;
-(id)notes;
-(id)organizer;
-(id)originalItem;
-(id)recurrenceRulesSet;
-(id)remObjectID;
-(id)selfAttendee;
-(id)startDateComponents;
-(id)structuredLocation;
-(id)structuredLocationWithoutPrediction;
-(id)timeZone;
-(id)title;
-(id)travelStartLocation;
-(id)uniqueID;
-(id)uniqueIdentifier;
-(void)_fixAlarmUUIDsForClone:(id)arg0 from:(id)arg1 ;


@end


#endif