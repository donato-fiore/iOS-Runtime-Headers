// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTATEMACHINENODE_H
#define PFSTATEMACHINENODE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PFStateMachineNode : NSObject {
    NSMutableDictionary *_transitions;
    id *_action;
}


@property (readonly) NSString *name; // ivar: _name


+(id)nodeWithName:(id)arg0 ;
-(id)_dotReachableNodes:(id)arg0 graph:(id)arg1 ;
-(id)addReturnTransitionOn:(id)arg0 ;
-(id)addTransition:(id)arg0 ;
-(id)addTransitionOn:(id)arg0 subflow:(id)arg1 to:(id)arg2 ;
-(id)addTransitionOn:(id)arg0 to:(id)arg1 ;
-(id)description;
-(id)dot:(id)arg0 prefix:(id)arg1 graph:(id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)performAction:(id)arg0 ;
-(id)transitionForEventName:(id)arg0 ;
-(void)setAction:(id)arg0 ;


@end


#endif