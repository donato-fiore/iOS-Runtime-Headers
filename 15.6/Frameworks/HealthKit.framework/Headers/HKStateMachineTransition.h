// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTATEMACHINETRANSITION_H
#define HKSTATEMACHINETRANSITION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HKStateMachineState.h"

@interface HKStateMachineTransition : NSObject

@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly, weak, nonatomic) HKStateMachineState *fromState; // ivar: _fromState
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, weak, nonatomic) HKStateMachineState *toState; // ivar: _toState


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEvent:(NSInteger)arg0 label:(id)arg1 from:(id)arg2 to:(id)arg3 ;


@end


#endif