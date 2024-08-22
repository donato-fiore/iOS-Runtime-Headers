// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCREATEAUTOMATIONCOORDINATOR_H
#define WFCREATEAUTOMATIONCOORDINATOR_H

@class WFDatabase, NSString, WFHomeManager, UINavigationController, WFTriggerManager, WFConfiguredTriggerRecord, WFWorkflow, WFWorkflowReference;
@protocol WFAutomationTypeChooserViewControllerDelegate, WFAutomationSelectTypeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, HUTriggerEditorDelegate, WFCreateAutomationCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface WFCreateAutomationCoordinator : NSObject <WFAutomationTypeChooserViewControllerDelegate, WFAutomationSelectTypeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, HUTriggerEditorDelegate>



@property (retain, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFCreateAutomationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *triggerIdentifier; // ivar: _triggerIdentifier
@property (retain, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager
@property (retain, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // ivar: _triggerRecord
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (retain, nonatomic) WFWorkflowReference *workflowReference; // ivar: _workflowReference


-(id)initWithDatabase:(id)arg0 homeManager:(id)arg1 ;
-(void)automationSummaryViewController:(id)arg0 didFinishWithTrigger:(id)arg1 ;
-(void)automationTypeChooser:(id)arg0 didChooseAutomationType:(NSUInteger)arg1 ;
-(void)buildViewControllerForAutomationTypeChooserStepWithCompletion:(id)arg0 ;
-(void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(NSUInteger)arg0 hostingViewController:(id)arg1 completion:(id)arg2 ;
-(void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)finishWithTriggerRecord:(id)arg0 ;
-(void)openHomeApp;
-(void)selectTypeViewController:(id)arg0 didChooseTrigger:(id)arg1 ;
-(void)startAtStep:(NSUInteger)arg0 hostingViewController:(id)arg1 completion:(id)arg2 ;
-(void)trackAddAutomationActions;
-(void)trackAddAutomationWithRecord:(id)arg0 ;
-(void)triggerComposeViewController:(id)arg0 didFinishWithWorkflow:(id)arg1 ;
-(void)triggerComposeViewControllerDidCancel:(id)arg0 ;
-(void)triggerConfigurationViewController:(id)arg0 didFinishWithTrigger:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;


@end


#endif