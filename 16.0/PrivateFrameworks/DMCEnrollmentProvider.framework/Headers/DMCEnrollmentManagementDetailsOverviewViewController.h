// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTMANAGEMENTDETAILSOVERVIEWVIEWCONTROLLER_H
#define DMCENROLLMENTMANAGEMENTDETAILSOVERVIEWVIEWCONTROLLER_H

@class NSString, MCProfile;
@protocol DMCEnrollmentManagementDetailsOverviewViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentManagementDetailsOverviewViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *managedAppleID; // ivar: _managedAppleID
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile


-(id)initWithDelegate:(id)arg0 managedAppleID:(id)arg1 profile:(id)arg2 ;
-(void)_setupNavigationBar;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif