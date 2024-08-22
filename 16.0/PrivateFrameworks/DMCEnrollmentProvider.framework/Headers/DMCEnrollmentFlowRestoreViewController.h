// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTFLOWRESTOREVIEWCONTROLLER_H
#define DMCENROLLMENTFLOWRESTOREVIEWCONTROLLER_H

@protocol DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFSnapshot;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentFlowRestoreViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentFlowRestoreViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<DMCRFSnapshot> *restoreSnapshot; // ivar: _restoreSnapshot


-(id)_appNamesFromBunldeIDs:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 managedAppleID:(id)arg1 restoreSnapshot:(id)arg2 conflictingApps:(id)arg3 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif