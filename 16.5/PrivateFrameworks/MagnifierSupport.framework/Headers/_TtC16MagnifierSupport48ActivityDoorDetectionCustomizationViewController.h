// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT48ACTIVITYDOORDETECTIONCUSTOMIZATIONVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT48ACTIVITYDOORDETECTIONCUSTOMIZATIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport48ActivityDoorDetectionCustomizationViewController : UIViewController {
    ? delegate;
    ? activity;
    ? availableDetectionFeedbacks;
    ? tableView;
    ? colorPickerController;
    ? doorAttributesController;
    ? magnifierModelsManger;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif