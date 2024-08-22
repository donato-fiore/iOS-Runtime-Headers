// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSTATEMACHINE_H
#define HKSTATEMACHINE_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol HKStateMachineDelegate;

#import <Foundation/Foundation.h>

#import "HKStateMachineState.h"

@interface HKStateMachine : NSObject {
    NSMutableDictionary *_statesByIndex;
    NSMutableArray *_transitions;
    BOOL _isProcessingEvent;
    NSMutableArray *_pendingEvents;
}


@property (readonly, nonatomic) HKStateMachineState *currentState; // ivar: _currentState
@property (weak, nonatomic) NSObject<HKStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)nameForOwner:(id)arg0 UUID:(id)arg1 tag:(id)arg2 ;
-(id)addStateTransitionFrom:(id)arg0 to:(id)arg1 event:(NSInteger)arg2 label:(id)arg3 ;
-(id)addStateWithIndex:(NSInteger)arg0 label:(id)arg1 ;
-(id)graphDescription;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)stateWithIndex:(NSInteger)arg0 ;
-(void)_dequeueEvent;
-(void)_handleEvent:(NSInteger)arg0 date:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)enqueueEvent:(NSInteger)arg0 date:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)enterAtState:(NSInteger)arg0 ;


@end


#endif