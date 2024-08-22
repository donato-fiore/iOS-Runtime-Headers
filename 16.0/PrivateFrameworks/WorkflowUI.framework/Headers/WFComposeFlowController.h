// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPOSEFLOWCONTROLLER_H
#define WFCOMPOSEFLOWCONTROLLER_H

@class WFDatabase, NSString, UINavigationController, UIViewController, WFWorkflow;
@protocol WFWorkflowWizardNameViewControllerDelegate, WFComposeFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFWizardNamePresentationManager.h"

@interface WFComposeFlowController : NSObject <WFWorkflowWizardNameViewControllerDelegate>



@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFComposeFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) WFWizardNamePresentationManager *presentationManager; // ivar: _presentationManager
@property (readonly, weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (readonly, nonatomic) BOOL workflowHasContent;


-(id)initWithPresenter:(id)arg0 navigationController:(id)arg1 database:(id)arg2 workflow:(id)arg3 ;
-(void)finishEditing:(BOOL)arg0 ;
-(void)startCancelFlowWithButton:(id)arg0 ;
-(void)startSaveFlow;
-(void)workflowWizardNameViewController:(id)arg0 didFinishWithName:(id)arg1 ;


@end


#endif