// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI39EMERGENCYACCESSBUDDYSTARTVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI39EMERGENCYACCESSBUDDYSTARTVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI39EmergencyAccessBuddyStartViewController : OBWelcomeController {
    ? healthStore;
    ? flow;
    ? emergencyStatus;
    ? medicalIDStatus;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapNext:(id)arg0 ;
-(void)didTapReviewLater;
-(void)viewDidLoad;


@end


#endif