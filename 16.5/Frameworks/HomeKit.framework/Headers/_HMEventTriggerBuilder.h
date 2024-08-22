// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMEVENTTRIGGERBUILDER_H
#define _HMEVENTTRIGGERBUILDER_H

@class HMEventOrTimerTriggerBuilder, NSPredicate, NSMutableArray, NSArray, NSString, NSUUID;
@protocol HMEventTriggerBuilderInternal;


#import "HMHome.h"
#import "HMTriggerPolicy.h"
#import "HMActionSetBuilder.h"

@interface _HMEventTriggerBuilder : HMEventOrTimerTriggerBuilder <HMEventTriggerBuilderInternal>

 {
    BOOL _executeOnce;
    NSPredicate *_predicate;
    NSUInteger _recurrenceDays;
    NSMutableArray *_events;
    NSMutableArray *_endEvents;
}


@property (copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *endEvents;
@property (copy, nonatomic) NSArray *events;
@property (nonatomic) BOOL executeOnce;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (copy, nonatomic) NSPredicate *predicate;
@property (nonatomic) NSUInteger recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(void)initialize;
-(BOOL)_with:(id)arg0 addEvent:(id)arg1 ;
-(BOOL)_with:(id)arg0 removeEvent:(id)arg1 ;
-(Class)class;
-(NSUInteger)triggerActivationState;
-(id)copyAsBuilder;
-(id)initWithContext:(id)arg0 home:(id)arg1 ;
-(id)initWithEventTrigger:(id)arg0 ;
-(void)_with:(id)arg0 addEvent:(id)arg1 completion:(id)arg2 ;
-(void)_with:(id)arg0 removeEvent:(id)arg1 completion:(id)arg2 ;
-(void)_with:(id)arg0 updateEvents:(id)arg1 completion:(id)arg2 ;
-(void)addEndEvent:(id)arg0 ;
-(void)addEndEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeEndEvent:(id)arg0 ;
-(void)removeEndEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeEvent:(id)arg0 ;
-(void)removeEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEndEvents:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateEvents:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateExecuteOnce:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updatePredicate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif