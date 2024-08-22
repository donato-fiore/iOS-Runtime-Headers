// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLWORKFLOWCONTROLLER_H
#define WFLWORKFLOWCONTROLLER_H

@class NSArray, NSString, INInteraction, NSProgress;
@protocol WFWorkflowControllerDelegate, WFActionParameterInputProvider, WFSiriUserInterface, WFLWorkflowControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFWorkflowController.h"
#import "WFWorkflowRunEvent.h"
#import "WFWorkflow.h"

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFActionParameterInputProvider, WFSiriUserInterface>



@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs; // ivar: _airPlayRouteIDs
@property (readonly, nonatomic) WFWorkflowController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFLWorkflowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INInteraction *lastInteraction; // ivar: _lastInteraction
@property (readonly, nonatomic) NSProgress *progress;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent; // ivar: _runEvent
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic) WFWorkflow *workflow;


-(BOOL)action:(id)arg0 canProvideInputForParameter:(id)arg1 ;
-(BOOL)executeIntent:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)workflowController:(id)arg0 handleUnsupportedEnvironmentForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithWorkflow:(id)arg0 ;
-(id)runSource;
-(id)userInterfaceForWorkflowController:(id)arg0 ;
-(void)action:(id)arg0 provideInputForParameters:(id)arg1 withDefaultStates:(id)arg2 prompts:(id)arg3 completionHandler:(id)arg4 ;
-(void)configureIntent:(id)arg0 ;
-(void)launchAppWithCompletionHandler:(id)arg0 ;
-(void)openInteractionInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openUserActivity:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentAlert:(id)arg0 ;
-(void)runWithInput:(id)arg0 ;
-(void)showConfirmInteraction:(id)arg0 prompt:(id)arg1 requireAuthentication:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)showConfirmInteraction:(id)arg0 requireAuthentication:(BOOL)arg1 requireConfirmation:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)showHandleInteraction:(id)arg0 prompt:(id)arg1 completionHandler:(id)arg2 ;
-(void)speakText:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;
-(void)workflowController:(id)arg0 didFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)workflowController:(id)arg0 didRunAction:(id)arg1 ;
-(void)workflowController:(id)arg0 prepareToRunAction:(id)arg1 withInput:(id)arg2 completionHandler:(id)arg3 ;
-(void)workflowControllerWillRun:(id)arg0 ;


@end


#endif