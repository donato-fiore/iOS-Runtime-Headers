// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTESSOAPPLICATIONDISCLOSUREVIEWCONTROLLER_H
#define DMCENROLLMENTESSOAPPLICATIONDISCLOSUREVIEWCONTROLLER_H

@class NSArray;
@protocol DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentESSOApplicationDisclosureViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *requiredEntitlements; // ivar: _requiredEntitlements


-(id)initWithDelegate:(id)arg0 lockupRequest:(id)arg1 lockupViewGroup:(id)arg2 requiredEntitlements:(id)arg3 ;
-(void)_setupNavigationBar;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif