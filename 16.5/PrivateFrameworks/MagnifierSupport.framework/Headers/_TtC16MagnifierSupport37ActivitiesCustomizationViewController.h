// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT37ACTIVITIESCUSTOMIZATIONVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT37ACTIVITIESCUSTOMIZATIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport37ActivitiesCustomizationViewController : UIViewController {
    ? delegate;
    ? activities;
    ? tableView;
    ? commitActivityButton;
    ? activityNameOnBoardingController;
    ? activityToBeDuped;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commitAndDismiss;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif