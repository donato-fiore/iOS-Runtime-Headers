// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPPERSISTENTSTATEMACHINESTATE_H
#define HKSPPERSISTENTSTATEMACHINESTATE_H

@class NSString, NSDate, NSDateInterval;
@protocol HKSPPersistentStateMachineEventHandler, HKSPDictionarySerializable, NSCoding, NSCopying;


#import "HKSPStateMachineState.h"
#import "HKSPPersistentStateMachine.h"

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPPersistentStateMachineEventHandler, HKSPDictionarySerializable, NSCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) CGFloat expirationDuration;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDateInterval *lifetimeInterval; // ivar: _lifetimeInterval
@property (readonly, nonatomic) BOOL schedulesExpiration;
@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (readonly) Class superclass;


+(BOOL)_hasExpirationDate:(id)arg0 ;
+(BOOL)_isExpired:(id)arg0 currentDate:(id)arg1 ;
+(id)infiniteInterval;
-(BOOL)_isExpired;
-(BOOL)_updateExpirationDate;
-(BOOL)_willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(BOOL)_willExitWithNextState:(id)arg0 context:(id)arg1 ;
-(id)_updatedLifetimeIntervalWithStartDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)equalsBuilderWithObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStateMachine:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)_didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)stateDidExpireWithContext:(id)arg0 ;
-(void)stateWithIdentifierDidExpire:(id)arg0 ;
-(void)updateStateWithContext:(id)arg0 ;


@end


#endif