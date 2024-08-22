// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMTIMERTRIGGERBUILDER_H
#define HMTIMERTRIGGERBUILDER_H

@class NSArray, NSString, NSDate, NSDateComponents, NSTimeZone, NSUUID;
@protocol HMTimerTriggerBuilderInternal, HMTimerTriggerBuilderPrivate, HMTimerTriggerBuilder;


#import "HMTimerTrigger.h"
#import "HMHome.h"
#import "HMTriggerPolicy.h"
#import "HMActionSetBuilder.h"

@interface HMTimerTriggerBuilder : HMTimerTrigger <HMTimerTriggerBuilderInternal, HMTimerTriggerBuilderPrivate, HMTimerTriggerBuilder>



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


+(id)alloc;


@end


#endif