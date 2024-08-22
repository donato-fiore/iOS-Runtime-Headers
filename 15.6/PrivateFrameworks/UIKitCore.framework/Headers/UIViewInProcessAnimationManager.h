// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWINPROCESSANIMATIONMANAGER_H
#define UIVIEWINPROCESSANIMATIONMANAGER_H

@class NSMutableArray, NSCountedSet, CADisplayLink, NSHashTable, NSThread, NSRunLoop, NSString;
@protocol _UIViewInProcessAnimationManagerDriver, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "_UIViewInProcessAnimationReasonArray.h"
#import "_UIAppCACommitFuture.h"

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver>

 {
    NSMutableArray *_preCommitBlocks;
    NSMutableArray *_entries;
    NSMutableArray *_newlyAddedEntries;
    NSMutableArray *_postTickBlocks;
    NSMutableArray *_preExitBlocks;
    NSMutableArray *_presentationModifierGroupRequestBlocks;
    NSCountedSet *_minimumFrameRates;
    NSCountedSet *_maximumFrameRates;
    NSCountedSet *_preferredFrameRates;
    NSCountedSet *_updateReasons;
    NSUInteger _numberOfEntriesWithoutVelocityUsableForVFD;
    CAFrameRateRange _preferredFrameRateRange;
    _UIViewInProcessAnimationReasonArray *_updateReasonArray;
    id<_UIViewInProcessAnimationManagerDriver> *_animatorAdvancer;
    CGFloat _time;
    CGFloat _deltaTime;
    CGFloat _refreshInterval;
    NSObject<OS_dispatch_queue> *_tickPrepQueue;
    NSObject<OS_dispatch_queue> *_tickQueue;
    NSObject<OS_dispatch_queue> *_entryLockingQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_displayLinkAccessQueue;
    NSObject<OS_dispatch_queue> *_backlightQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_semaphore> *_postTicksDelaySemaphore;
    BOOL _processingPreCommits;
    BOOL _waitingForAnimatorAdvancerToStart;
    _UIAppCACommitFuture *_caCommitFuture;
    CADisplayLink *_displayLink;
    int _screenDimmingNotificationToken;
    BOOL _animationsSuspended;
    BOOL _animationsShouldCompleteImmediately;
    BOOL _skipNextFrame;
    BOOL _displayLinkInvalidated;
    BOOL _screenIsOff;
    NSUInteger _presentationModifierRequestCount;
    NSHashTable *_presentationGroups;
    BOOL _appSuspended;
    NSMutableArray *_observedWindowScenes;
    ? _clean;
}


@property (nonatomic) BOOL advancingOnCommitDisabled; // ivar: _advancingOnCommitDisabled
@property (weak) NSThread *animationThread; // ivar: _animationThread
@property (retain) NSObject<OS_dispatch_semaphore> *animationThreadKeepAliveSemaphore; // ivar: _animationThreadKeepAliveSemaphore
@property (weak) NSRunLoop *animationThreadRunLoop; // ivar: _animationThreadRunLoop
@property (weak) NSThread *currentTickThread; // ivar: _currentTickThread
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger executionMode; // ivar: _executionMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAFrameRateRange preferredFrameRateRange;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIViewInProcessAnimationReasonArray *updateReasonArray;
@property (nonatomic) BOOL usesMainThreadExecution; // ivar: _usesMainThreadExecution


+(id)_requestPresentationModifierGroup:(id)arg0 ;
+(id)sharedManager;
+(void)_cancelPresentationModifierGroupRequest:(id)arg0 ;
+(void)_dispatchAsyncOntoMainBeforeExit:(id)arg0 ;
+(void)_setExternalAnimationDriver:(id)arg0 ;
-(BOOL)_isInvalidated;
-(BOOL)_shouldKeepAnimationThreadAlive;
-(CGFloat)refreshInterval;
-(NSUInteger)_runPreCommitBlocks;
-(id)_requestPresentationModifierGroup:(id)arg0 ;
-(id)init;
-(void)_advanceWithTime:(CGFloat)arg0 ;
-(void)_applicationBecameActive;
-(void)_applicationDidEnterBackground;
-(void)_cancelAllAnimationsImmediately;
-(void)_cancelPresentationModifierGroupRequest:(id)arg0 ;
-(void)_commitSynchronously;
-(void)_displayLinkFire:(id)arg0 ;
// -(void)_performTick:(CGFloat)arg0 cancel:(BOOL)arg1 force:(BOOL)arg2 eventName:(id)arg3 entry:(id)arg4 exit:(unk)arg5  ;
-(void)_performWhenInProcessAnimationsTransactionCommits:(id)arg0 ;
-(void)_prepareForTick;
-(void)_processEntriesCollectingEntriesToRemove:(id)arg0 cancel:(BOOL)arg1 ;
-(void)_processPostTicks;
-(void)_processPostTicksDelayIfNecessary:(CGFloat)arg0 ;
-(void)_processPreCommitBlocks;
-(void)_processPresentationModifierRequestsAndFlush;
-(void)_processTickExitRemovingEntries:(id)arg0 ;
-(void)_registerBacklightChangedNotification;
-(void)_screenBasedSceneDidDisconnect:(id)arg0 ;
-(void)_screenBasedSceneWillAttachWindow:(id)arg0 ;
-(void)_setAnimationExecutionParameters;
-(void)_setAnimationsSuspended:(BOOL)arg0 ;
-(void)_setCurrentMediaTime:(CGFloat)arg0 ;
-(void)_updateAnimationSuspensionForAppStateChange;
-(void)addEntry:(id)arg0 ;
-(void)dealloc;
-(void)finishAdvancingAnimationManager;
-(void)performAfterTick:(id)arg0 ;
-(void)performBeforeExiting:(id)arg0 ;
-(void)scheduleAnimatorAdvancerToStart;
-(void)startAdvancingAnimationManager:(id)arg0 ;
-(void)startAnimationAdvancerIfNeeded;


@end


#endif