// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOUTOFPROCESSWORKFLOWCONTROLLER_H
#define WFOUTOFPROCESSWORKFLOWCONTROLLER_H

@class WFDialogAttribution, NSString, WFWorkflowRunRequest, WFWorkflowRunningContext, NSXPCConnection;
@protocol WFOutOfProcessWorkflowControllerStateMachineDelegate, WFOutOfProcessWorkflowControllerHost, WFDatabaseProvider, WFOutOfProcessWorkflowControllerDelegate, WFOutOfProcessWorkflowControllerVendor, WFUserInterfaceHost;

#import <Foundation/Foundation.h>

#import "WFWorkflowReference.h"
#import "WFDatabase.h"
#import "WFSandboxExtensionManager.h"
#import "WFOutOfProcessWorkflowControllerStateMachine.h"

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerStateMachineDelegate, WFOutOfProcessWorkflowControllerHost>



@property (copy, nonatomic) WFDialogAttribution *currentDialogAttribution; // ivar: _currentDialogAttribution
@property (retain, nonatomic) WFWorkflowReference *currentReference; // ivar: _currentReference
@property (copy, nonatomic) NSString *currentWorkflowName; // ivar: _currentWorkflowName
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFOutOfProcessWorkflowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest; // ivar: _runRequest
@property (readonly, nonatomic) BOOL runRequestIsContextualAction;
@property (readonly, nonatomic) BOOL runRequestOriginatedFromLocalSiri;
@property (retain, nonatomic) NSObject<WFOutOfProcessWorkflowControllerVendor> *runner; // ivar: _runner
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, copy, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) WFSandboxExtensionManager *sandboxExtensionManager; // ivar: _sandboxExtensionManager
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (readonly, nonatomic) WFOutOfProcessWorkflowControllerStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<WFUserInterfaceHost> *userInterfaceHost; // ivar: _userInterfaceHost


+(id)computeFinderResizedSizesForImages:(id)arg0 inSizes:(id)arg1 error:(*id)arg2 ;
+(id)contextualActionsForContext:(id)arg0 error:(*id)arg1 ;
+(id)filteredContextualActions:(id)arg0 forContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)resumeRunningWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)runActionWithRunRequestData:(id)arg0 error:(*id)arg1 ;
-(BOOL)runWorkflowWithDescriptor:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)asynchronousRunnerWithError:(*id)arg0 reason:(id)arg1 ;
-(id)initWithEnvironment:(NSInteger)arg0 runningContext:(id)arg1 databaseProvider:(id)arg2 presentationMode:(NSInteger)arg3 ;
-(id)localizedTimeoutErrorDescription;
-(id)localizedXPCInterruptionErrorDescription;
-(id)runnerWithError:(*id)arg0 synchronous:(BOOL)arg1 reason:(id)arg2 ;
-(id)synchronousRunnerWithError:(*id)arg0 reason:(id)arg1 ;
-(void)approvalResultForContentAttributionSet:(id)arg0 contentDestination:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(NSUInteger)arg4 reference:(id)arg5 allowedOnceStates:(id)arg6 completion:(id)arg7 ;
-(void)controllerStateMachine:(id)arg0 didFinishRunningShortcutWithResult:(id)arg1 ;
-(void)controllerStateMachine:(id)arg0 didRequestStoppingShortcutWithError:(id)arg1 ;
-(void)controllerStateMachine:(id)arg0 shouldNotifyDelegateWithResult:(id)arg1 currentDialogAttribution:(id)arg2 ;
-(void)controllerStateMachineDidRequestRunnerTearDown:(id)arg0 ;
-(void)createSleepWorkflow:(id)arg0 completion:(id)arg1 ;
-(void)createWorkflowWithWorkflowData:(id)arg0 name:(id)arg1 nameCollisionBehavior:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg0 actionUUID:(id)arg1 actionIdentifier:(id)arg2 actionIndex:(NSUInteger)arg3 count:(NSUInteger)arg4 reference:(id)arg5 completion:(id)arg6 ;
-(void)getCollectionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getConfiguredTriggersForWorkflowID:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentProgressCompletedWithCompletionHandler:(id)arg0 ;
-(void)getFolderForWorkflowReference:(id)arg0 completion:(id)arg1 ;
-(void)getIsReference:(id)arg0 allowedToRunOnDomain:(id)arg1 completion:(id)arg2 ;
-(void)getReferenceForWorkflowID:(id)arg0 completion:(id)arg1 ;
-(void)getSortedVisibleFoldersWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsByNameWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsInCollection:(id)arg0 completion:(id)arg1 ;
-(void)getSortedWorkflowsWithQuery:(id)arg0 completion:(id)arg1 ;
-(void)getUniqueVisibleReferenceForWorkflowName:(id)arg0 completion:(id)arg1 ;
-(void)getVaultItemsAccessWithCompletion:(id)arg0 ;
-(void)getWorkflowRecordDataForWorkflowReference:(id)arg0 completion:(id)arg1 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg0 withIdentifier:(id)arg1 ;
-(void)pauseWorkflowAndWriteStateToDisk;
-(void)populateSleepWorkflowsFromWorkflowReferences:(id)arg0 completion:(id)arg1 ;
-(void)presenterRequestedWorkflowPauseForContext:(id)arg0 dialogRequest:(id)arg1 ;
-(void)quarantineWorkflowWithReference:(id)arg0 ;
-(void)requestSandboxExtensionForAccessResources:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)saveSmartPromptStateData:(id)arg0 actionUUID:(id)arg1 reference:(id)arg2 completion:(id)arg3 ;
-(void)setTrustedToRunScripts:(BOOL)arg0 forReference:(id)arg1 onDomain:(id)arg2 completion:(id)arg3 ;
-(void)stop;
-(void)updateAppDescriptor:(id)arg0 atKey:(id)arg1 actionUUID:(id)arg2 actionIndex:(id)arg3 actionIdentifier:(id)arg4 workflowID:(id)arg5 ;
-(void)workflowDidDecideRunningProgressIsAllowed:(BOOL)arg0 dialogAttribution:(id)arg1 ;
-(void)workflowDidStartRunning;
-(void)workflowWantsToToastSessionKitSessionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif