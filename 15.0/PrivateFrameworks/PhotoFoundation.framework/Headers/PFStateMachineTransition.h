// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTATEMACHINETRANSITION_H
#define PFSTATEMACHINETRANSITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFStateMachineTransition : NSObject {
    id *_action;
}


@property (readonly) NSString *destinationName; // ivar: _destinationName
@property (readonly) NSString *eventName; // ivar: _eventName


+(id)returnTransitionOn:(id)arg0 ;
+(id)transitionOn:(id)arg0 subflow:(id)arg1 to:(id)arg2 ;
+(id)transitionOn:(id)arg0 to:(id)arg1 ;
+(id)transitionOn:(id)arg0 to:(id)arg1 action:(id)arg2 ;
-(id)_dotReachableNodes:(id)arg0 ;
-(id)description;
-(id)destination:(id)arg0 ;
-(id)dot:(id)arg0 prefix:(id)arg1 graph:(id)arg2 ;
-(id)initWithEventName:(id)arg0 to:(id)arg1 action:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)setAction:(id)arg0 ;


@end


#endif