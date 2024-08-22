// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMEVENTTRIGGER_H
#define HMEVENTTRIGGER_H

@class NSArray, NSPredicate;
@protocol NSSecureCoding;


#import "HMTrigger.h"
#import "HMMutableArray.h"

@interface HMEventTrigger : HMTrigger <NSSecureCoding>



@property (nonatomic) NSUInteger activationState; // ivar: _activationState
@property (readonly, copy, nonatomic) NSArray *allEvents;
@property (retain, nonatomic) HMMutableArray *currentEvents; // ivar: _currentEvents
@property (readonly, copy, nonatomic) NSArray *endEvents;
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) BOOL executeOnce; // ivar: _executeOnce
@property (copy, nonatomic) NSPredicate *internalPredicate; // ivar: _internalPredicate
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (readonly, nonatomic) NSUInteger triggerActivationState;


+(BOOL)__validateRecurrences:(id)arg0 ;
+(BOOL)isActionAffectedByEndEvents:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg0 applyingOffset:(id)arg1 ;
+(id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg0 applyingOffset:(id)arg1 ;
+(id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 value:(id)arg1 valueFormatString:(id)arg2 ;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
+(id)negateOffset:(id)arg0 ;
+(id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg0 ;
+(id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg0 ;
+(id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg0 applyingOffset:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg0 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg0 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg0 applyingOffset:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg0 secondDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg0 secondSignificantEvent:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg0 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 matchingValue:(id)arg1 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 relatedBy:(NSUInteger)arg1 toValue:(id)arg2 ;
+(id)predicateForEvaluatingTriggerWithPresence:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)_updateCharacterisiticReferenceInNewEvent:(id)arg0 ;
-(BOOL)compatibleWithApp;
-(BOOL)containsSharedTriggerActivationBits;
-(id)_serializeForAdd;
-(id)addedEvent:(id)arg0 ;
-(id)initInternalWithName:(id)arg0 configuredName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 events:(id)arg1 endEvents:(id)arg2 recurrences:(id)arg3 predicate:(id)arg4 ;
-(id)initWithName:(id)arg0 events:(id)arg1 predicate:(id)arg2 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_addEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleAddEventFromResponse:(id)arg0 newEventPayload:(id)arg1 ;
-(void)_handleEventsRemovedFromResponse:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_removeEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateCharacteristicReference;
-(void)_updateEvents:(id)arg0 endEvent:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_updateEventsFromResponse:(id)arg0 responsePayload:(id)arg1 ;
-(void)_updateExecuteOnce:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updatePredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateRecurrences:(id)arg0 completionHandler:(id)arg1 ;
-(void)addEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActivationStateNotification:(id)arg0 ;
-(void)removeEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEndEvents:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEvents:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateExecuteOnce:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updatePredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateRecurrences:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif