// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT26EDITCONTROLSVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT26EDITCONTROLSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport26EditControlsViewController : UIViewController {
    ? minPrimaryControls;
    ? maxPrimaryControls;
    ? $__lazy_storage_$_filterCustomizationViewController;
    ? $__lazy_storage_$_peopleDetectionSettingsViewController;
    ? tableView;
    ? $__lazy_storage_$_dataSource;
    ? delegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleDoneButtonTap:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif