// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10WORKFLOWUI35ADDTOSIRISWIFTHOSTINGVIEWCONTROLLER_H
#define _TTC10WORKFLOWUI35ADDTOSIRISWIFTHOSTINGVIEWCONTROLLER_H

@class UIViewController, WFDatabase, WFWorkflow;
@protocol _TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_;



@interface _TtC10WorkflowUI35AddToSiriSwiftHostingViewController : UIViewController {
    ? hostingController;
    ? didFireCompletion;
}


@property (nonatomic, retain) WFDatabase *database; // ivar: database
@property (nonatomic, retain) NSObject<_TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_> *delegate; // ivar: delegate
@property (nonatomic, retain) WFWorkflow *workflow; // ivar: workflow


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif