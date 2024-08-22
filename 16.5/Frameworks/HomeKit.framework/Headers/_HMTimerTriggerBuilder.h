// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMTIMERTRIGGERBUILDER_H
#define _HMTIMERTRIGGERBUILDER_H

@class HMEventOrTimerTriggerBuilder, NSDate, NSTimeZone, NSDateComponents, NSString, NSArray, NSUUID;
@protocol HMTimerTriggerBuilderInternal;


#import "HMHome.h"
#import "HMTriggerPolicy.h"
#import "HMActionSetBuilder.h"

@interface _HMTimerTriggerBuilder : HMEventOrTimerTriggerBuilder <HMTimerTriggerBuilderInternal>

 {
    NSDate *_fireDate;
    NSTimeZone *_timeZone;
    NSDateComponents *_recurrence;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}


@property (copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSDate *fireDate;
@property (readonly, copy, nonatomic) NSDate *fireDateIfSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (copy, nonatomic) NSDateComponents *recurrence;
@property (nonatomic) NSUInteger recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(void)initialize;
-(Class)class;
-(void)updateFireDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateRecurrence:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSignificantEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSignificantEventOffset:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateTimeZone:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif