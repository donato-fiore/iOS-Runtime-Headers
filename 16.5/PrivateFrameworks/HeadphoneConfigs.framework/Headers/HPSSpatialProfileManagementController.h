// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEMANAGEMENTCONTROLLER_H
#define HPSSPATIALPROFILEMANAGEMENTCONTROLLER_H

@class PSListController;



@interface HPSSpatialProfileManagementController : PSListController



-(id)init;
-(id)specifiers;
-(void)cancelEnrollment;
-(void)presentProfileEnrollmentController:(id)arg0 ;
-(void)promptResetProfile:(id)arg0 ;
-(void)resetProfile:(id)arg0 ;
-(void)spatialAudioProfileUpdateHandler:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)userDidTapSpatialProfilePrivacyLink:(id)arg0 ;


@end


#endif