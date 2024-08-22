// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFSTATEMACHINEEVENT_H
#define NFSTATEMACHINEEVENT_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "NFStateMachineState.h"

@interface NFStateMachineEvent : NSObject

@property (retain, nonatomic) NFStateMachineState *destinationState; // ivar: _destinationState
@property (copy, nonatomic) id *fireBlock; // ivar: _fireBlock
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *states; // ivar: _states


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)fired:(id)arg0 withOwner:(id)arg1 ;
-(id)initWithName:(id)arg0 transitionFromStates:(id)arg1 toState:(id)arg2 ;
-(id)onFire:(id)arg0 ;


@end


#endif