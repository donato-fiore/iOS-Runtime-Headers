// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT37PEOPLEDETECTIONSETTINGSVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT37PEOPLEDETECTIONSETTINGSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport37PeopleDetectionSettingsViewController : UIViewController {
    ? availableDetectionFeedbacks;
    ? tableView;
    ? speechFeedbackSubscription;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif