// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEDITAUTOMATIONCOORDINATOR_H
#define WFEDITAUTOMATIONCOORDINATOR_H

@class WFDatabase, NSString, WFWorkflow, UINavigationController, WFWorkflowRecord, WFTrigger, WFTriggerManager, WFConfiguredTriggerRecord, WFWorkflowReference;
@protocol UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFEditAutomationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "WFAutomationSummaryViewController.h"

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate>



@property (retain, nonatomic) WFAutomationSummaryViewController *automationSummaryViewController; // ivar: _automationSummaryViewController
@property (retain, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFEditAutomationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFWorkflow *editingWorkflow; // ivar: _editingWorkflow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) WFWorkflowRecord *originalRecord; // ivar: _originalRecord
@property (readonly) Class superclass;
@property (retain, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, copy, nonatomic) NSString *triggerIdentifier; // ivar: _triggerIdentifier
@property (retain, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager
@property (readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // ivar: _triggerRecord
@property (readonly, nonatomic) WFWorkflowReference *workflowReference; // ivar: _workflowReference


-(id)initWithDatabase:(id)arg0 triggerRecord:(id)arg1 triggerIdentifier:(id)arg2 workflowReference:(id)arg3 ;
-(id)start;
-(void)automationSummaryViewController:(id)arg0 didFinishWithTrigger:(id)arg1 ;
-(void)automationSummaryViewController:(id)arg0 editTrigger:(id)arg1 ;
-(void)automationSummaryViewController:(id)arg0 editWorkflow:(id)arg1 ;
-(void)cancel;
-(void)finish;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateUIForShowingViewController:(id)arg0 ;


@end


#endif