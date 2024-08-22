// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI48EMERGENCYACCESSBUDDYSHAREMEDICALIDVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI48EMERGENCYACCESSBUDDYSHAREMEDICALIDVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI48EmergencyAccessBuddyShareMedicalIDViewController : OBWelcomeController {
    ? healthStore;
    ? medicalIDCache;
    ? shareButton;
    ? dontShareButton;
    ? flow;
    ? emergencyStatus;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapDontShare:(id)arg0 ;
-(void)didTapLearnMore:(id)arg0 ;
-(void)didTapShare:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif