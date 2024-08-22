// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTABOUTREMOTEMANAGEMENTVIEWCONTROLLER_H
#define DMCENROLLMENTABOUTREMOTEMANAGEMENTVIEWCONTROLLER_H

@class OBPrivacySplashController, NSAttributedString, NSString, UILabel;



@interface DMCEnrollmentAboutRemoteManagementViewController : OBPrivacySplashController

@property (copy, nonatomic) NSAttributedString *attributedDetailText; // ivar: _attributedDetailText
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


+(id)_createDetailTextWithProfile:(id)arg0 managedAppleID:(id)arg1 ;
+(void)presentAboutRemoteManagementViewControllerWithBaseViewController:(id)arg0 ;
+(void)presentManagementDetailsViewControllerWithBaseViewController:(id)arg0 profile:(id)arg1 managedAppleID:(id)arg2 ;
-(void)loadView;
-(void)rightBarButtonTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif