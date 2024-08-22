// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUISTATE_H
#define FIUISTATE_H

@class NSMutableDictionary, NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "FIUIState.h"

@interface FIUIState : NSObject {
    NSMutableDictionary *_transitions;
}


@property (readonly, nonatomic) NSMutableSet *childStates; // ivar: _childStates
@property (copy) id *entry; // ivar: _entry
@property (weak, nonatomic) FIUIState *entryState; // ivar: _entryState
@property (copy) id *exit; // ivar: _exit
@property (readonly) NSString *label; // ivar: _label
@property (weak, nonatomic) FIUIState *parentState; // ivar: _parentState
@property (getter=isTransitional) BOOL transitional; // ivar: _transitional


+(id)stateWithLabel:(id)arg0 ;
+(id)transitionalStateFromState:(id)arg0 toState:(id)arg1 entryEvent:(NSInteger)arg2 exitEvent:(NSInteger)arg3 ;
-(id)allTransitions;
-(id)description;
-(id)initWithLabel:(id)arg0 ;
-(id)transitionForEvent:(NSInteger)arg0 ;
-(void)addChildStates:(id)arg0 withEntryState:(id)arg1 ;
-(void)enumerateEvents:(id)arg0 ;
-(void)registerTransition:(NSInteger)arg0 label:(id)arg1 toState:(id)arg2 ;
// -(void)registerTransition:(NSInteger)arg0 label:(id)arg1 toState:(id)arg2 handler:(id)arg3 gate:(unk)arg4  ;


@end


#endif