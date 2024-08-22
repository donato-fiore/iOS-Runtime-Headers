// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKFROZENREMINDERALARM_H
#define EKFROZENREMINDERALARM_H

@class REMAlarm, NSArray, NSString;


#import "EKFrozenReminderObject.h"
#import "EKFrozenReminderStructuredLocation.h"

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}


@property (readonly) NSArray *alarms;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;
@property (readonly) NSArray *triggers;


+(Class)meltedClass;
+(NSInteger)ekAlarmProximityToEKAlarmProximity:(NSInteger)arg0 ;
+(NSInteger)remAlarmProximityToEKAlarmProximity:(NSInteger)arg0 ;
+(id)semanticIdentifierFromDateComponents:(id)arg0 ;
+(id)semanticIdentifierFromREMAlarm:(id)arg0 ;
+(id)triggersFromAbsoluteDate:(id)arg0 relativeOffset:(CGFloat)arg1 timeValuesRelevant:(BOOL)arg2 structuredLocation:(id)arg3 proximity:(NSInteger)arg4 ;
+(id)uniqueIdentifierForREMObject:(id)arg0 ;
-(BOOL)_applyChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)isDefaultAlarm;
-(CGFloat)relativeOffset;
-(NSInteger)proximity;
-(NSInteger)type;
-(id)UUID;
-(id)_effectiveAlarm;
-(id)_locationAlarm;
-(id)_remStructuredLocation;
-(id)_setTimeOrLocationAlarm:(id)arg0 ;
-(id)_timeAlarm;
-(id)absoluteDate;
-(id)acknowledgedDate;
-(id)calendarItemOwner;
-(id)calendarOwner;
-(id)emailAddress;
-(id)initWithAlarms:(id)arg0 inStore:(id)arg1 ;
-(id)initWithAlarms:(id)arg0 inStore:(id)arg1 withChanges:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg0 inEventStore:(id)arg1 withUpdatedChildObjects:(id)arg2 ;
-(id)initWithREMObject:(id)arg0 inStore:(id)arg1 withChanges:(id)arg2 ;
-(id)modifiedStructuredLocation;
-(id)originalAlarm;
-(id)remObjectID;
-(id)snoozedAlarmsSet;
-(id)uniqueIdentifier;
-(id)updatedAlarmWithLocation:(id)arg0 ;
-(id)updatedFrozenObjectWithChanges:(id)arg0 updatedChildren:(id)arg1 ;
-(id)urlWrapper;
-(void)_setTimeAndLocationAlarms:(id)arg0 ;
-(void)setCalendarItemOwner:(id)arg0 ;
-(void)setCalendarOwner:(id)arg0 ;
-(void)setEmailAddress:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setUrlWrapper:(id)arg0 ;


@end


#endif