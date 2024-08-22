// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKPROCESSASSERTIONBACKGROUNDTASKMANAGER_H
#define WKPROCESSASSERTIONBACKGROUNDTASKMANAGER_H

@class NSString;
@protocol RBSAssertionObserving;

#import <Foundation/Foundation.h>


@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving>

 {
    RetainPtr<RBSAssertion> _backgroundTask;
    atomic<bool> _backgroundTaskWasInvalidated;
    WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter, WTF::EnableWeakPtrThreadingAssertions::Yes> _assertionsNeedingBackgroundTask;
    id *_pendingTaskReleaseTask;
    unique_ptr<WebKit::ProcessStateMonitor, std::default_delete<WebKit::ProcessStateMonitor>> m_processStateMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(BOOL)_hasBackgroundTask;
-(id)init;
-(void)_cancelPendingReleaseTask;
-(void)_handleBackgroundTaskExpiration;
-(void)_handleBackgroundTaskExpirationOnMainThread;
-(void)_notifyAssertionsOfImminentSuspension;
-(void)_releaseBackgroundTask;
-(void)_scheduleReleaseTask;
-(void)_updateBackgroundTask;
-(void)addAssertionNeedingBackgroundTask:(*void)arg0 ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)assertionWillInvalidate:(id)arg0 ;
-(void)dealloc;
-(void)removeAssertionNeedingBackgroundTask:(*void)arg0 ;
-(void)setProcessStateMonitorEnabled:(BOOL)arg0 ;


@end


#endif