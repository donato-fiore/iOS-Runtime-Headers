// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUISTATEMACHINE_H
#define FIUISTATEMACHINE_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FIUIState.h"

@interface FIUIStateMachine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_states;
    FIUIState *_state;
    FIUIState *_initialState;
    BOOL _handlingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_queueKey;
    NSMutableArray *_transitionalEvents;
    NSMutableSet *_parentStates;
}


@property (copy) id *diagnosticHandler; // ivar: _diagnosticHandler
@property (copy) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) NSString *label; // ivar: _label
@property NSInteger pendingEvent; // ivar: _pendingEvent
@property (copy) id *transitionalEventFilter; // ivar: _transitionalEventFilter


-(id)description;
-(id)graphDescription;
-(id)initWithLabel:(id)arg0 queue:(id)arg1 ;
-(id)queue;
-(id)state;
-(void)_queue_handleEvents;
-(void)_queue_processEvent:(NSInteger)arg0 ;
-(void)_queue_setInitialStateIfNeeded:(id)arg0 ;
-(void)addChildStates:(id)arg0 toState:(id)arg1 withEntryState:(id)arg2 ;
-(void)addState:(id)arg0 ;
-(void)addStates:(id)arg0 ;
-(void)dealloc;
-(void)event:(NSInteger)arg0 ;
-(void)eventAsync:(NSInteger)arg0 ;
-(void)export;


@end


#endif