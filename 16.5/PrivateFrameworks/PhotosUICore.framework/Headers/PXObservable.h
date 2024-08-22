// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXOBSERVABLE_H
#define PXOBSERVABLE_H

@class NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PXObservable : NSObject {
    NSInteger _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    NSInteger _numAppliedPendingChanges;
    NSUInteger _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}


@property (readonly, nonatomic) NSUInteger currentChanges;
@property (readonly, nonatomic) BOOL hasObservers; // ivar: _hasObservers
@property (readonly, nonatomic) BOOL isPerformingChanges;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger logContext; // ivar: _logContext


-(id)_pxStoryPPT_observeChangesUsingChangeHandler:(id)arg0 ;
-(id)init;
-(id)mutableChangeObject;
-(id)pxStory_enumerateStatesByWatchingChanges:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_applyPendingChanges;
-(void)_didChange;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)_publishChanges;
-(void)_willChange;
-(void)copyLogConfigurationFrom:(id)arg0 ;
-(void)didEndChangeHandling;
-(void)didPerformChanges;
-(void)didPublishChanges;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)pxStory_enumerateStatesWithTimeout:(CGFloat)arg0 watchingChanges:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)signalChange:(NSUInteger)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)willPerformChanges;


@end


#endif