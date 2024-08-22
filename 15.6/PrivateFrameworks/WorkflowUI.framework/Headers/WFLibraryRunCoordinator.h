// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLIBRARYRUNCOORDINATOR_H
#define WFLIBRARYRUNCOORDINATOR_H

@class WFAction, WFDatabase, NSString, WFDialogTransformer, NSHashTable, WFWorkflowRunEvent, WFWorkflowReference, NSProgress, WFWorkflowController, WFShortcutsAppRunnerClient;
@protocol WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate, WFLibraryRunCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface WFLibraryRunCoordinator : NSObject <WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFAction *currentlyRunningAction; // ivar: _currentlyRunningAction
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFLibraryRunCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFDialogTransformer *dialogTransformer; // ivar: _dialogTransformer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRunOutOfProcess; // ivar: _isRunOutOfProcess
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent; // ivar: _runEvent
@property (retain, nonatomic) WFWorkflowReference *runningWorkflow; // ivar: _runningWorkflow
@property (retain, nonatomic) NSProgress *runningWorkflowProgress; // ivar: _runningWorkflowProgress
@property (readonly, copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) BOOL waiting; // ivar: _waiting
@property (readonly, nonatomic) WFWorkflowController *workflowController; // ivar: _workflowController
@property (retain, nonatomic) WFShortcutsAppRunnerClient *workflowRunnerClient; // ivar: _workflowRunnerClient


-(BOOL)hasApplication;
-(BOOL)workflowController:(id)arg0 handleUnsupportedEnvironmentForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithSource:(id)arg0 database:(id)arg1 ;
-(id)userInterfaceForWorkflowController:(id)arg0 ;
-(id)view;
-(id)workflowController:(id)arg0 parameterInputProviderForAction:(id)arg1 ;
-(void)accessibilityAnnounce:(id)arg0 ;
-(void)dealloc;
-(void)didFinishRunningWorkflow:(id)arg0 withError:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openWorkflowReferenceAndRun:(id)arg0 fromSource:(id)arg1 withInput:(id)arg2 state:(id)arg3 requestOutput:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)registerObserver:(id)arg0 ;
-(void)resumeWorkflowReference:(id)arg0 fromSource:(id)arg1 withState:(id)arg2 ;
-(void)runWorkflow:(id)arg0 fromSource:(id)arg1 withInput:(id)arg2 state:(id)arg3 requestOutput:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)runWorkflowReference:(id)arg0 fromSource:(id)arg1 withInput:(id)arg2 requestOutput:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)stop;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateProgress:(CGFloat)arg0 waiting:(BOOL)arg1 cancelled:(BOOL)arg2 forWorkflow:(id)arg3 ;
-(void)workflowController:(id)arg0 actionDidRequestWorkflowExit:(id)arg1 ;
-(void)workflowController:(id)arg0 didFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)workflowController:(id)arg0 prepareToRunAction:(id)arg1 withInput:(id)arg2 completionHandler:(id)arg3 ;
-(void)workflowControllerWillRun:(id)arg0 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif