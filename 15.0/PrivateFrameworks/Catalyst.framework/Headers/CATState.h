// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSTATE_H
#define CATSTATE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CATState : NSObject {
    NSMutableDictionary *mTransitionByTriggeringEvent;
}


@property (nonatomic) SEL enterAction; // ivar: _enterAction
@property (nonatomic) SEL exitAction; // ivar: _exitAction
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)new;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)transitionWithTriggeringEvent:(id)arg0 ;
-(void)addTransitionToState:(id)arg0 triggeringEvent:(id)arg1 ;
-(void)addTransitionToState:(id)arg0 triggeringEvent:(id)arg1 action:(SEL)arg2 ;


@end


#endif