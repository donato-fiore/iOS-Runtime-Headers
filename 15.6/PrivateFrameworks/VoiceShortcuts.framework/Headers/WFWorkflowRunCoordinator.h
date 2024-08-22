// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWRUNCOORDINATOR_H
#define WFWORKFLOWRUNCOORDINATOR_H

@class WFLSApplicationStateObserver, NSString, NSHashTable, NSMutableDictionary, WFUIPresenter;
@protocol WFDialogPresentationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDialogPresentationManager.h"
#import "WFWorkflowRunQueue.h"
#import "WFApplicationTerminationMonitor.h"
#import "WFUserNotificationManager.h"

@interface WFWorkflowRunCoordinator : NSObject <WFDialogPresentationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate>



@property (readonly, nonatomic) WFLSApplicationStateObserver *applicationStateObserver; // ivar: _applicationStateObserver
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager; // ivar: _dialogPresentationManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSMutableDictionary *parentRunningContexts; // ivar: _parentRunningContexts
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *runEvents; // ivar: _runEvents
@property (readonly, nonatomic) WFWorkflowRunQueue *runRequestQueue; // ivar: _runRequestQueue
@property (readonly, nonatomic) NSMutableDictionary *runRequests; // ivar: _runRequests
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowCompletionHandlers; // ivar: _runningWorkflowCompletionHandlers
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowControllers; // ivar: _runningWorkflowControllers
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFApplicationTerminationMonitor *terminationMonitor; // ivar: _terminationMonitor
@property (readonly, nonatomic) WFUIPresenter *userInterfacePresenter; // ivar: _userInterfacePresenter
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager; // ivar: _userNotificationManager


+(NSInteger)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(NSUInteger)arg0 ;
+(id)errorCategory;
+(id)errorWithActionCategory;
-(BOOL)presentationManager:(id)arg0 shouldPresentDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(BOOL)queue_callWorkflowCompletionForContext:(id)arg0 withResult:(id)arg1 ;
-(BOOL)queue_shouldQueueRunRequest:(id)arg0 queueType:(*NSUInteger)arg1 ;
-(BOOL)shortcutShouldShowRunningProgress:(id)arg0 ;
-(BOOL)shortcutWithIdentifierIsRunning:(id)arg0 ;
-(NSUInteger)presentationManager:(id)arg0 dialogPresentationModeForRequest:(id)arg1 withContext:(id)arg2 ;
-(NSUInteger)queueTypeForRunRequest:(id)arg0 ;
-(id)allRunningWorkflows;
-(id)contextForDialogPresentationForContext:(id)arg0 ;
-(id)initWithUserNotificationManager:(id)arg0 databaseProvider:(id)arg1 ;
-(id)presentationManager:(id)arg0 responseForDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(id)presentationManager:(id)arg0 runningContextForContext:(id)arg1 ;
-(id)queue_contextForWorkflowController:(id)arg0 ;
-(id)queue_workflowControllerWithContext:(id)arg0 ;
-(id)unsupportedDialogResponseWithRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)getCurrentProgressCompletedForContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)outOfProcessWorkflowController:(id)arg0 didFinishWithResult:(id)arg1 reference:(id)arg2 dialogAttributions:(id)arg3 ;
-(void)outOfProcessWorkflowController:(id)arg0 didStartFromWorkflowReference:(id)arg1 dialogAttributions:(id)arg2 ;
-(void)postNotificationAboutFailure:(id)arg0 inWorkflow:(id)arg1 dialogAttributions:(id)arg2 ;
-(void)presentationManager:(id)arg0 cancelExecutionOfWorkflowWithContext:(id)arg1 ;
-(void)presentationManager:(id)arg0 didEnqueueDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(void)presentationManager:(id)arg0 pauseExecutionOfWorkflowWithContext:(id)arg1 ;
-(void)presentationManager:(id)arg0 updateSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 context:(id)arg3 reference:(id)arg4 ;
-(void)queue_finishWorkflowWithContext:(id)arg0 result:(id)arg1 ;
-(void)queue_notifyObserversWorkflowDidFinishRunningWithResult:(id)arg0 context:(id)arg1 ;
-(void)queue_runNextQueuedRequestWithType:(NSUInteger)arg0 inQueue:(id)arg1 ;
-(void)queue_runWorkflowWithRequest:(id)arg0 context:(id)arg1 error:(*id)arg2 completion:(id)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStaleNotifications;
-(void)resumeWorkflowFromContext:(id)arg0 withRequest:(id)arg1 presentationMode:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)runWorkflowWithRequest:(id)arg0 context:(id)arg1 ;
-(void)runWorkflowWithRequest:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)showSingleStepCompletionWithWebClipMetadata:(id)arg0 completion:(id)arg1 ;
-(void)stopAllRunningWorkflows;
-(void)stopRunningWorkflowWithRunningContext:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif