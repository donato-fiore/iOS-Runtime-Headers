// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16MAGNIFIERSUPPORT35PEOPLEDECTIONSETTINGSVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT35PEOPLEDECTIONSETTINGSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport35PeopleDectionSettingsViewController : UIViewController {
    ? availablePeopleDetectionFeedbacks;
    ? $__lazy_storage_$_internalPeopleDetectionOptionsViewController;
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