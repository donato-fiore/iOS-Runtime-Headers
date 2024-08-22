// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTIMERTRIGGER_H
#define HMDTIMERTRIGGER_H

@class NSDate, NSTimeZone, NSDateComponents, NSArray, NSString, NSTimer;


#import "HMDTrigger.h"

@interface HMDTimerTrigger : HMDTrigger {
    os_unfair_lock_s _lock;
    NSDate *currentFireDate;
}


@property (readonly) NSDate *currentFireDate; // ivar: _currentFireDate
@property (copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (copy, nonatomic) NSTimeZone *fireDateTimeZone; // ivar: _fireDateTimeZone
@property (copy, nonatomic) NSDateComponents *fireRepeatInterval; // ivar: _fireRepeatInterval
@property (copy, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (copy, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (copy, nonatomic) NSDateComponents *significantEventOffset; // ivar: _significantEventOffset
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSString *timerID; // ivar: _timerID


+(BOOL)supportsSecureCoding;
+(id)getCalendar:(id)arg0 ;
+(id)logCategory;
+(id)validateRecurrence:(id)arg0 calendar:(id)arg1 fireDate:(id)arg2 ;
+(id)validateRecurrences:(id)arg0 ;
+(id)validateSignificantOffset:(id)arg0 ;
+(id)validateTriggerModel:(id)arg0 message:(id)arg1 currentFireDate:(id)arg2 ;
+(id)validateWholeMinuteDate:(id)arg0 onCalendar:(id)arg1 ;
-(BOOL)_reactivateFireDateTrigger;
-(BOOL)_reactivateSignificantEventTrigger;
-(BOOL)_reactivateTrigger;
-(BOOL)_shouldExecuteActionSet;
-(BOOL)shouldActivateOnLocalDevice;
-(NSUInteger)triggerType;
-(id)_nextFireDate;
-(id)_nextSignificantEventFireDate;
-(id)_serializeForAdd;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)description;
-(id)dumpState;
-(id)emptyModelObject;
-(id)getCalendar;
-(id)getFireInterval;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_closestDatesForStartDate:(id)arg0 earliestDate:(id)arg1 timeZone:(id)arg2 deliveryRepeatInterval:(id)arg3 returnDateBefore:(*id)arg4 returnDateAfter:(*id)arg5 ;
-(void)_disableTimerOffReactivationFailure;
-(void)_handleTimerTriggerUpdate:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg0 ;
-(void)_reactiveTriggerAfterDelay;
-(void)_registerForMessages;
-(void)_startTimer:(id)arg0 ;
-(void)_startTimerWithFireDate:(id)arg0 ;
-(void)_startTimerWithSignificantEventDate:(id)arg0 ;
-(void)_stopTimer;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)completeConfiguration;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)nsTimerTriggered:(id)arg0 ;
-(void)timerFired:(id)arg0 ;


@end


#endif