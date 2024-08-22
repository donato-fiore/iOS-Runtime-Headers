// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWSETTINGSVIEWCONTROLLER_H
#define WFWORKFLOWSETTINGSVIEWCONTROLLER_H

@class UIViewController;
@protocol WFWorkflowSettingsViewControllerDelegate;



@interface WFWorkflowSettingsViewController : UIViewController {
    ? workflow;
    ? database;
    ? hideNavigationBar;
    ? hostingController;
}


@property (nonatomic, weak) NSObject<WFWorkflowSettingsViewControllerDelegate> *delegate; // ivar: delegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 database:(id)arg1 hideNavigationBar:(BOOL)arg2 ;
-(void)viewDidLoad;


@end


#endif