// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI38EMERGENCYACCESSBUDDYDONEVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI38EMERGENCYACCESSBUDDYDONEVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI38EmergencyAccessBuddyDoneViewController : OBWelcomeController {
    ? flow;
    ? emergencyStatus;
    ? stewieStateMonitor;
    ? $__lazy_storage_$_queue;
    ? $__lazy_storage_$_isStewieSupported;
    ? $__lazy_storage_$_reviewMedicalIDReminderBullet;
    ? $__lazy_storage_$_stewieTryOutModeBullet;
    ? $__lazy_storage_$_stewieTryOutModeView;
    ? $__lazy_storage_$_stewieTryOutFootnote;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapDone:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif