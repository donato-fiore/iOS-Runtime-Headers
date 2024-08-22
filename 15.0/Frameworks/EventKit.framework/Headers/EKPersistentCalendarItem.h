// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPERSISTENTCALENDARITEM_H
#define EKPERSISTENTCALENDARITEM_H



#import "EKPersistentObject.h"

@interface EKPersistentCalendarItem : EKPersistentObject



+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)defaultAlarmWasDeleted;
-(BOOL)hasAttendees;
-(BOOL)hasNotes;
-(BOOL)hasRecurrenceRules;
-(BOOL)isAllDay;
-(BOOL)phantomMaster;
-(id)URLString;
-(id)UUID;
-(id)actionString;
-(id)allAlarmsSet;
-(id)appLinkData;
-(id)attachmentsSet;
-(id)attendeesRaw;
-(id)calendar;
-(id)calendarScale;
-(id)clientLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)creationDate;
-(id)detachedItems;
-(id)ekExceptionDates;
-(id)endLocation;
-(id)endTimeZoneName;
-(id)externalData;
-(id)externalID;
-(id)externalModificationTag;
-(id)externalScheduleID;
-(id)lastModifiedDate;
-(id)localStructuredData;
-(id)notes;
-(id)organizer;
-(id)originalItem;
-(id)propertyKeyForUniqueIdentifier;
-(id)recurrenceRulesSet;
-(id)selfAttendee;
-(id)sharedItemCreatedByAddressString;
-(id)sharedItemCreatedByDisplayName;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedDate;
-(id)sharedItemCreatedTimeZoneName;
-(id)sharedItemModifiedByAddressString;
-(id)sharedItemModifiedByDisplayName;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedDate;
-(id)sharedItemModifiedTimeZoneName;
-(id)singleRecurrenceRule;
-(id)startDate;
-(id)startDateRaw;
-(id)startTimeZoneName;
-(id)structuredData;
-(id)structuredLocationWithoutPrediction;
-(id)title;
-(id)travelStartLocation;
-(id)uniqueID;
-(int)priority;
-(int)selfParticipantStatusRaw;
-(int)sequenceNumber;
-(unsigned int)modifiedProperties;
-(void)addAlarm:(id)arg0 ;
-(void)addAttendee:(id)arg0 ;
-(void)addRecurrenceRule:(id)arg0 ;
-(void)removeAlarm:(id)arg0 ;
-(void)removeAttendee:(id)arg0 ;
-(void)removeRecurrenceRule:(id)arg0 ;
-(void)setActionString:(id)arg0 ;
-(void)setAllAlarmsSet:(id)arg0 ;
-(void)setAppLinkData:(id)arg0 ;
-(void)setAttachmentsSet:(id)arg0 ;
-(void)setAttendeesRaw:(id)arg0 ;
-(void)setCalendar:(id)arg0 ;
-(void)setCalendarScale:(id)arg0 ;
-(void)setClientLocation:(id)arg0 ;
-(void)setCreationDate:(id)arg0 ;
-(void)setDefaultAlarmWasDeleted:(BOOL)arg0 ;
-(void)setDetachedItems:(id)arg0 ;
-(void)setEkExceptionDates:(id)arg0 ;
-(void)setEndLocation:(id)arg0 ;
-(void)setEndTimeZoneName:(id)arg0 ;
-(void)setExternalData:(id)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setExternalScheduleID:(id)arg0 ;
-(void)setHasAttendees:(BOOL)arg0 ;
-(void)setHasNotes:(BOOL)arg0 ;
-(void)setHasRecurrenceRules:(BOOL)arg0 ;
-(void)setIsAllDay:(BOOL)arg0 ;
-(void)setLastModifiedDate:(id)arg0 ;
-(void)setLocalStructuredData:(id)arg0 ;
-(void)setModifiedProperties:(unsigned int)arg0 ;
-(void)setNotes:(id)arg0 ;
-(void)setOrganizer:(id)arg0 ;
-(void)setOriginalItem:(id)arg0 ;
-(void)setPhantomMaster:(BOOL)arg0 ;
-(void)setPriority:(int)arg0 ;
-(void)setRecurrenceRulesSet:(id)arg0 ;
-(void)setSelfAttendee:(id)arg0 ;
-(void)setSequenceNumber:(int)arg0 ;
-(void)setSharedItemCreatedByAddressString:(id)arg0 ;
-(void)setSharedItemCreatedByDisplayName:(id)arg0 ;
-(void)setSharedItemCreatedByFirstName:(id)arg0 ;
-(void)setSharedItemCreatedByLastName:(id)arg0 ;
-(void)setSharedItemCreatedDate:(id)arg0 ;
-(void)setSharedItemCreatedTimeZoneName:(id)arg0 ;
-(void)setSharedItemModifiedByAddressString:(id)arg0 ;
-(void)setSharedItemModifiedByDisplayName:(id)arg0 ;
-(void)setSharedItemModifiedByFirstName:(id)arg0 ;
-(void)setSharedItemModifiedByLastName:(id)arg0 ;
-(void)setSharedItemModifiedDate:(id)arg0 ;
-(void)setSharedItemModifiedTimeZoneName:(id)arg0 ;
-(void)setSingleRecurrenceRule:(id)arg0 ;
-(void)setStartDate:(id)arg0 ;
-(void)setStartDateRaw:(id)arg0 ;
-(void)setStartTimeZoneName:(id)arg0 ;
-(void)setStructuredData:(id)arg0 ;
-(void)setStructuredLocationWithoutPrediction:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTravelStartLocation:(id)arg0 ;
-(void)setURLString:(id)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setUniqueID:(id)arg0 ;


@end


#endif