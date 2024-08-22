// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISOBSERVABLE_H
#define ISOBSERVABLE_H

@class NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISObservable : NSObject {
    NSInteger _nestedChanges;
    NSMutableArray *_pendingChangesQueue_pendingChangeBlocks;
    NSInteger _numAppliedPendingChanges;
    NSUInteger _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSObject<OS_dispatch_queue> *_pendingChangesQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}


@property (readonly, nonatomic) BOOL hasObservers; // ivar: _hasObservers


-(BOOL)isPerformingChanges;
-(NSUInteger)currentChanges;
-(id)init;
-(id)mutableChangeObject;
-(void)_applyPendingChanges;
-(void)_didChange;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)_publishChanges;
-(void)_willChange;
-(void)didPerformChanges;
-(void)didPublishChanges;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)signalChange:(NSUInteger)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)willPerformChanges;


@end


#endif