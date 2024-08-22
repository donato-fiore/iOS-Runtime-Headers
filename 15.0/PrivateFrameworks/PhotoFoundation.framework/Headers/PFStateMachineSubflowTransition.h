// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTATEMACHINESUBFLOWTRANSITION_H
#define PFSTATEMACHINESUBFLOWTRANSITION_H

@class NSString;


#import "PFStateMachineTransition.h"

@interface PFStateMachineSubflowTransition : PFStateMachineTransition

@property (readonly) NSString *subflowName; // ivar: _subflowName


-(id)description;
-(id)destination:(id)arg0 ;
-(id)dot:(id)arg0 prefix:(id)arg1 graph:(id)arg2 ;
-(id)initWithEventName:(id)arg0 subflow:(id)arg1 to:(id)arg2 ;
-(id)returnDestination:(id)arg0 ;
-(void)performAction:(id)arg0 ;


@end


#endif