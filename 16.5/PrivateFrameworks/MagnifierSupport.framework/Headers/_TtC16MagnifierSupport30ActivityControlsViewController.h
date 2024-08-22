// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT30ACTIVITYCONTROLSVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT30ACTIVITYCONTROLSVIEWCONTROLLER_H

@class UIViewController;
@protocol UITextFieldDelegate;



@interface _TtC16MagnifierSupport30ActivityControlsViewController : UIViewController <UITextFieldDelegate>

 {
    ? activityCreatedDelegate;
    ? minPrimaryControls;
    ? maxPrimaryControls;
    ? $__lazy_storage_$_filtersCollectionCustomizationViewController;
    ? $__lazy_storage_$_peopleDetectionSettingsViewController;
    ? $__lazy_storage_$_doorDetectionSettingsViewController;
    ? $__lazy_storage_$_imageCaptionsSettingsViewController;
    ? languageTranslator;
    ? nameTitle;
    ? tableView;
    ? $__lazy_storage_$_dataSource;
}




-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleDoneButtonTap:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif