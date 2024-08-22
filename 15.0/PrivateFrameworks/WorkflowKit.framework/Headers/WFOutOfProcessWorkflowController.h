// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOUTOFPROCESSWORKFLOWCONTROLLER_H
#define WFOUTOFPROCESSWORKFLOWCONTROLLER_H

@class NSString, WFWorkflowRunRequest, WFWorkflowRunningContext, NSXPCConnection;
@protocol WFOutOfProcessWorkflowControllerHost, WFTimerHandler, WFDatabaseProvider, WFOutOfProcessWorkflowControllerDelegate, WFOutOfProcessWorkflowControllerVendor, WFUserInterfaceHost;

#import <Foundation/Foundation.h>

#import "WFDialogAttributions.h"
#import "WFDatabase.h"
#import "WFSandboxExtensionManager.h"
#import "WFDebouncer.h"
#import "WFTimer.h"
#import "WFWorkflowReference.h"

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost, WFTimerHandler>



@property (copy, nonatomic) WFDialogAttributions *currentDialogAttributions; // ivar: _currentDialogAttributions
@property (copy, nonatomic) NSString *currentWorkflowName; // ivar: _currentWorkflowName
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFOutOfProcessWorkflowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPersonalAutomation; // ivar: _isPersonalAutomation
@property (nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest; // ivar: _runRequest
@property (retain, nonatomic) NSObject<WFOutOfProcessWorkflowControllerVendor> *runner; // ivar: _runner
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, copy, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) WFSandboxExtensionManager *sandboxExtensionManager; // ivar: _sandboxExtensionManager
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (readonly, nonatomic) WFDebouncer *sleepModeStopDebouncer; // ivar: _sleepModeStopDebouncer
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) WFTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<WFUserInterfaceHost> *userInterfaceHost; // ivar: _userInterfaceHost
@property (retain, nonatomic) WFWorkflowReference *workflowReference; // ivar: _workflowReference


+(id)contextualActionsForContext:(id)arg0 error:(*id)arg1 ;
+(id)filteredContextualActions:(id)arg0 forContext:(id)arg1 error:(*id)arg2 ;
+(id)sleepControllerWithDatabaseProvider:(id)arg0 ;
-(BOOL)resumeRunningWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)runActionWithRunRequestData:(id)arg0 error:(*id)arg1 ;
-(BOOL)runWorkflowWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)timerShouldStart:(id)arg0 ;
-(BOOL)validateAuthorizationOfAccessResource:(id)arg0 ;
-(id)asynchronousRunnerWithError:(*id)arg0 ;
-(id)initWithEnvironment:(NSInteger)arg0 runningContext:(id)arg1 databaseProvider:(id)arg2 presentationMode:(NSInteger)arg3 ;
-(id)localizedTimeoutErrorDescription;
-(id)localizedXPCInterruptionErrorDescription;
-(id)runnerWithError:(*id)arg0 synchronous:(BOOL)arg1 ;
-(id)synchronousRunnerWithError:(*id)arg0 ;
-(void)approvalResultForContentAttributionSet:(id)arg0 contentDestination:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(NSUInteger)arg4 reference:(id)arg5 completion:(id)arg6 ;
-(void)createSleepWorkflow:(id)arg0 completion:(id)arg1 ;
-(void)createWorkflowWithWorkflowData:(id)arg0 name:(id)arg1 nameCollisionBehavior:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg0 actionUUID:(id)arg1 actionIdentifier:(id)arg2 actionIndex:(NSUInteger)arg3 count:(NSUInteger)arg4 reference:(id)arg5 completion:(id)arg6 ;
-(void)dealloc;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg0 ;
-(void)getCollectionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getConfiguredTriggersForWorkflowID:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg0 forReference:(id)arg1 completion:(id)arg2 ;
-(void)getFolderForWorkflowReference:(id)arg0 completion:(id)arg1 ;
-(void)getIsReference:(id)arg0 allowedToRunOnDomain:(id)arg1 completion:(id)arg2 ;
-(void)getReferenceForWorkflowID:(id)arg0 completion:(id)arg1 ;
-(void)getSortedVisibleFoldersWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsByNameWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsInCollection:(id)arg0 completion:(id)arg1 ;
-(void)getUniqueVisibleReferenceForWorkflowName:(id)arg0 completion:(id)arg1 ;
-(void)getVaultItemsAccessWithCompletion:(id)arg0 ;
-(void)getWorkflowRecordDataForWorkflowReference:(id)arg0 completion:(id)arg1 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg0 withIdentifier:(id)arg1 ;
-(void)handleXPCConnectionInterruption;
-(void)pauseWorkflowAndWriteStateToDisk;
-(void)populateSleepWorkflowsFromWorkflowReferences:(id)arg0 completion:(id)arg1 ;
-(void)quarantineWorkflowWithReference:(id)arg0 ;
-(void)reportFinishToDelegateWithResult:(id)arg0 reference:(id)arg1 dialogAttributions:(id)arg2 ;
-(void)requestSandboxExtensionForAccessResources:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)setTrustedToRunScripts:(BOOL)arg0 forReference:(id)arg1 onDomain:(id)arg2 completion:(id)arg3 ;
-(void)stop;
-(void)tearDown;
-(void)timerDidFire:(id)arg0 ;
-(void)updateAppDescriptor:(id)arg0 atKey:(id)arg1 actionUUID:(id)arg2 actionIndex:(id)arg3 actionIdentifier:(id)arg4 workflowID:(id)arg5 ;
-(void)workflowDidFinishRunningWithResult:(id)arg0 reference:(id)arg1 ;
-(void)workflowDidStartFromWorkflowReference:(id)arg0 attributions:(id)arg1 ;


@end


#endif