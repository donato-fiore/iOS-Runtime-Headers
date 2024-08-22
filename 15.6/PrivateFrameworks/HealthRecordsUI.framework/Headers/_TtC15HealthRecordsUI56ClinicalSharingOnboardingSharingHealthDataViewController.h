// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI56CLINICALSHARINGONBOARDINGSHARINGHEALTHDATAVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI56CLINICALSHARINGONBOARDINGSHARINGHEALTHDATAVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC15HealthRecordsUI56ClinicalSharingOnboardingSharingHealthDataViewController : OBWelcomeController {
    ? onboardingSession;
    ? account;
    ? selectedItems;
    ? readyToDismiss;
    ? cancellable;
    ? $__lazy_storage_$_doneButton;
    ? $__lazy_storage_$_spinner;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif