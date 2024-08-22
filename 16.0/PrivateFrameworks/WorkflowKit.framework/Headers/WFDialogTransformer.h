// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIALOGTRANSFORMER_H
#define WFDIALOGTRANSFORMER_H

@class NSArray, WFDialogAttribution, NSString, WFSiriUIPresenter, NSDate;
@protocol WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider;

#import <Foundation/Foundation.h>

#import "WFChooseFromListDataStore.h"
#import "WFAction.h"
#import "WFSequentialParameterInputProvider.h"
#import "WFUIPresenter.h"
#import "WFWorkflow.h"
#import "WFWorkflowController.h"

@interface WFDialogTransformer : NSObject <WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider>



@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs; // ivar: _airPlayRouteIDs
@property (retain, nonatomic) NSArray *allowedParameterClasses; // ivar: _allowedParameterClasses
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) WFChooseFromListDataStore *chooseFromListDataStore; // ivar: _chooseFromListDataStore
@property (retain, nonatomic) WFAction *currentAction; // ivar: _currentAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfDialogsPresented; // ivar: _numberOfDialogsPresented
@property (copy, nonatomic) id *parameterInputCompletionHandler; // ivar: _parameterInputCompletionHandler
@property (retain, nonatomic) WFSequentialParameterInputProvider *parameterInputProvider; // ivar: _parameterInputProvider
@property (retain, nonatomic) WFSiriUIPresenter *siriUIPresenter; // ivar: _siriUIPresenter
@property (readonly) Class superclass;
@property (retain, nonatomic) WFUIPresenter *userInterfacePresenter; // ivar: _userInterfacePresenter
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (weak, nonatomic) WFWorkflowController *workflowController; // ivar: _workflowController
@property (retain, nonatomic) NSDate *workflowStartTime; // ivar: _workflowStartTime


-(BOOL)action:(id)arg0 canProvideInputForParameter:(id)arg1 ;
-(BOOL)executeIntent:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)executeLinkAction:(id)arg0 inApplication:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)executeLinkAction:(id)arg0 inApplication:(id)arg1 withNameOverride:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)isRunningInSiri;
-(BOOL)openApp:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)openInteractionInApp:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)openURL:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)openUserActivity:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)shouldHandleAlertAsSiriDialog:(id)arg0 ;
-(BOOL)shouldNotHandoff;
-(BOOL)speakText:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)usesModalComponentStyleWhenAskingForParameter:(id)arg0 ;
-(id)actionForAttribution;
-(id)dialogTransformer;
-(id)initWithWorkflow:(id)arg0 userInterfacePresenter:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 userInterfacePresenter:(id)arg1 userInterfaceType:(id)arg2 ;
-(id)privacyAttribution;
-(id)shortcutsAppAttribution;
-(void)action:(id)arg0 provideInputForParameters:(id)arg1 withDefaultStates:(id)arg2 prompts:(id)arg3 completionHandler:(id)arg4 ;
-(void)cancel;
-(void)cleanupListDialogRequestIfNeeded:(id)arg0 ;
-(void)configureIntent:(id)arg0 ;
-(void)configureSmartPromptIntent:(id)arg0 withConfiguration:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)executeSmartPromptIntentWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnvironmentForLinkViewSnippetWithCompletion:(id)arg0 ;
-(void)getPreferredSizeForLinkViewSnippetWithCompletion:(id)arg0 ;
-(void)handleAlertAsSiriDialog:(id)arg0 ;
-(void)handleAlertWithDatePicker:(id)arg0 ;
-(void)handleAlertWithMultipleButtons:(id)arg0 ;
-(void)handleAlertWithTextField:(id)arg0 ;
-(void)handleSimpleAlert:(id)arg0 ;
-(void)prepareListDialogRequestIfNeeded:(*id)arg0 ;
-(void)presentAlert:(id)arg0 ;
-(void)punchOutRequestedWithCompletionHandler:(id)arg0 ;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg0 classNamesByType:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAuthorizationWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestFileAccessForURLs:(id)arg0 workflowName:(id)arg1 workflowID:(id)arg2 completionHandler:(id)arg3 ;
-(void)resolveDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)sequentialParameterInputProvider:(id)arg0 didAdvanceToParameter:(id)arg1 action:(id)arg2 defaultState:(id)arg3 prompt:(id)arg4 completion:(id)arg5 ;
-(void)sequentialParameterInputProvider:(id)arg0 didFinishWithInputtedStates:(id)arg1 ;
-(void)sequentialParameterInputProviderDidCancel:(id)arg0 ;
-(void)showAskParameterDialogForParameter:(id)arg0 action:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completion:(id)arg4 ;
-(void)showConfirmInteraction:(id)arg0 prompt:(id)arg1 requireAuthentication:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)showDialogRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)showHandleInteraction:(id)arg0 prompt:(id)arg1 completionHandler:(id)arg2 ;
-(void)showLinkActionConfirmationWithActionMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 confirmationActionName:(id)arg3 completionHandler:(id)arg4 ;
-(void)showLinkParameterConfirmationWithActionMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 completionHandler:(id)arg3 ;
-(void)showLinkResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)showPreviewForContentCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSmartPromptsWithConfiguration:(id)arg0 resultCode:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif