// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPPERSISTENTSTATEMACHINESTATE_H
#define HKSPPERSISTENTSTATEMACHINESTATE_H

@class NSString, NSDate, NSDateInterval;
@protocol HKSPDictionarySerializable, NSCoding, NSCopying;


#import "HKSPStateMachineState.h"
#import "HKSPPersistentStateMachine.h"

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPDictionarySerializable, NSCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDateInterval *lifetimeInterval; // ivar: _lifetimeInterval
@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (readonly) Class superclass;


+(id)infiniteInterval;
-(BOOL)isExpiredForDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(id)equalsBuilderWithObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStateMachine:(id)arg0 ;
-(id)initWithStateMachine:(id)arg0 lifetimeInterval:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateLifetimeIntervalForCurrentDate:(id)arg0 expirationBlock:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)willExitWithNextState:(id)arg0 context:(id)arg1 ;


@end


#endif