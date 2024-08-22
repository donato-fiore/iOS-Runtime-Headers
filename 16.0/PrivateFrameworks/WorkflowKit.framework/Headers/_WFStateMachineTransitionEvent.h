// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WFSTATEMACHINETRANSITIONEVENT_H
#define _WFSTATEMACHINETRANSITIONEVENT_H

@class NSString;
@protocol WFState;

#import <Foundation/Foundation.h>


@interface _WFStateMachineTransitionEvent : NSObject

@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSObject<WFState> *state; // ivar: _state
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)transitionEventWithState:(id)arg0 reason:(id)arg1 valid:(BOOL)arg2 ;
-(id)description;
-(id)initWithState:(id)arg0 reason:(id)arg1 valid:(BOOL)arg2 ;


@end


#endif