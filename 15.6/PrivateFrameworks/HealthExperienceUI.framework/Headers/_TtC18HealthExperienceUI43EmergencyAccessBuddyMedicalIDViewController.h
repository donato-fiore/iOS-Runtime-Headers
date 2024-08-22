// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI43EMERGENCYACCESSBUDDYMEDICALIDVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI43EMERGENCYACCESSBUDDYMEDICALIDVIEWCONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC18HealthExperienceUI43EmergencyAccessBuddyMedicalIDViewController : OBTableWelcomeController {
    ? healthStore;
    ? medicalIDCache;
    ? medicalIDViewController;
    ? didShowEditMedicalIDOnViewDidAppear;
    ? tableViewHeight;
    ? $__lazy_storage_$_tableViewHeightLayoutConstraint;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapNext:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif