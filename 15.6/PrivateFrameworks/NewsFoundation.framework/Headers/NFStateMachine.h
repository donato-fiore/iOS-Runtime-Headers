// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFSTATEMACHINE_H
#define NFSTATEMACHINE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NFMutexLock.h"
#import "NFStateMachineState.h"

@interface NFStateMachine : NSObject

@property (retain, nonatomic) NSMutableDictionary *events; // ivar: _events
@property (retain, nonatomic) NFMutexLock *lock; // ivar: _lock
@property (weak, nonatomic) id *owner; // ivar: _owner
@property (retain, nonatomic) NFStateMachineState *state; // ivar: _state
@property (retain, nonatomic) NSMutableDictionary *states; // ivar: _states
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSInteger statusToken; // ivar: _statusToken


-(id)debugDescription;
-(id)description;
-(id)fireEventWithName:(id)arg0 withContext:(id)arg1 ;
-(id)initWithState:(id)arg0 withOwner:(id)arg1 ;
-(void)activate;
-(void)activateIfNeeded;
-(void)addEvent:(id)arg0 ;
-(void)addState:(id)arg0 ;
-(void)deactivate;
-(void)deactivateIfNeeded;


@end


#endif