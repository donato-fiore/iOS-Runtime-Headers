// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMTIMERTRIGGER_H
#define HMTIMERTRIGGER_H

@class NSArray, NSString, NSDate, NSDateComponents, NSCalendar, NSTimeZone;
@protocol HMTimerTriggerConfiguration, NSSecureCoding;


#import "HMTrigger.h"
#import "HMTriggerPolicy.h"

@interface HMTimerTrigger : HMTrigger <HMTimerTriggerConfiguration, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) HMTriggerPolicy *policy;
@property (copy, nonatomic) NSDateComponents *recurrence; // ivar: _recurrence
@property (readonly, copy, nonatomic) NSCalendar *recurrenceCalendar; // ivar: _recurrenceCalendar
@property (readonly, copy, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (readonly, copy, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (readonly, copy, nonatomic) NSDateComponents *significantEventOffset; // ivar: _significantEventOffset
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithName:(id)arg0 fireDate:(id)arg1 recurrence:(id)arg2 ;
-(id)initWithName:(id)arg0 fireDate:(id)arg1 timeZone:(id)arg2 recurrence:(id)arg3 ;
-(id)initWithName:(id)arg0 fireDate:(id)arg1 timeZone:(id)arg2 recurrence:(id)arg3 recurrenceCalendar:(id)arg4 ;
-(id)initWithName:(id)arg0 fireDate:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3 ;
-(id)initWithName:(id)arg0 significantEvent:(id)arg1 significantEventOffset:(id)arg2 recurrences:(id)arg3 ;
-(void)_handleTriggerFired:(id)arg0 ;
-(void)_updateFireDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateRecurrence:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateRecurrences:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateSignificantEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateSignificantEventOffset:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateTimeZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateTimerTriggerPropertiesFromResponse:(id)arg0 ;
// -(void)_updateTimerTriggerWithResponse:(id)arg0 payloadToSend:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFireDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateRecurrence:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateRecurrences:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSignificantEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSignificantEventOffset:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateTimeZone:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif