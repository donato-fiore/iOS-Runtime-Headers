// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWWIZARDNAMEVIEWCONTROLLER_H
#define WFWORKFLOWWIZARDNAMEVIEWCONTROLLER_H

@class UITableViewController, NSString, WFWorkflow;
@protocol WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate, WFWorkflowWizardNameViewControllerDelegate;


#import "WFWorkflowWizardNameConfiguration.h"
#import "WFIconComposeViewController.h"

@interface WFWorkflowWizardNameViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate>



@property (retain, nonatomic) WFWorkflowWizardNameConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWorkflowWizardNameViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFIconComposeViewController *iconComposeViewController; // ivar: _iconComposeViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *updatedName; // ivar: _updatedName
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)dequeueNameCellAtIndexPath:(id)arg0 ;
-(id)dequeueNameSuggestionCellAtIndexPath:(id)arg0 ;
-(id)infoText;
-(id)initWithWorkflow:(id)arg0 configuration:(id)arg1 ;
-(id)nameCell;
-(id)nameSuggestionCell;
-(id)suggestedPhrases;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)didTapDone;
-(void)updateDoneButtonForName:(id)arg0 ;
-(void)updateNameCell:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)workflowWizardNameCell:(id)arg0 didUpdateName:(id)arg1 ;
-(void)workflowWizardNameCellDidFinishEditing:(id)arg0 ;
-(void)workflowWizardNameCellDidSelectEditIcon:(id)arg0 ;
-(void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg0 ;


@end


#endif