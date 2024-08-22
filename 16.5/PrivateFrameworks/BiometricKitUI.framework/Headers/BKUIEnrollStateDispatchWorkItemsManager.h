// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIENROLLSTATEDISPATCHWORKITEMSMANAGER_H
#define BKUIENROLLSTATEDISPATCHWORKITEMSMANAGER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKUIEnrollStateDispatchWorkItemsManager : NSObject

@property (retain, nonatomic) NSHashTable *pendingOperations; // ivar: _pendingOperations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (nonatomic) int targetStartState; // ivar: _targetStartState
@property (nonatomic) int targetState; // ivar: _targetState


-(id)init;
-(void)removeAllWorkItems;
-(void)submitWorkItemFor:(int)arg0 startState:(int)arg1 work:(id)arg2 ;


@end


#endif