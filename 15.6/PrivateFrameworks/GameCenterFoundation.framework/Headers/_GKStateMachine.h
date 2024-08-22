// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GKSTATEMACHINE_H
#define _GKSTATEMACHINE_H

@class NSString, NSDictionary;
@protocol _GKStateMachineDelegate;

#import <Foundation/Foundation.h>


@interface _GKStateMachine : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain) NSString *currentState; // ivar: _currentState
@property (weak) NSObject<_GKStateMachineDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldLogStateTransitions; // ivar: _shouldLogStateTransitions
@property (retain) NSDictionary *validTransitions; // ivar: _validTransitions


-(BOOL)applyState:(id)arg0 ;
-(id)_validateTransitionFromState:(id)arg0 toState:(id)arg1 ;
-(id)init;
-(id)missingTransitionFromState:(id)arg0 toState:(id)arg1 ;
-(void)_performTransitionFromState:(id)arg0 toState:(id)arg1 ;


@end


#endif