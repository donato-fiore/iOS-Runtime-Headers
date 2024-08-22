// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTDEBUGGINGESSOAPPLICATIONINSTALLATIONVIEWCONTROLLER_H
#define DMCENROLLMENTDEBUGGINGESSOAPPLICATIONINSTALLATIONVIEWCONTROLLER_H

@class LSApplicationWorkspace, NSArray, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"
#import "DMCEnrollmentConfirmationView.h"

@interface DMCEnrollmentDebuggingESSOApplicationInstallationViewController : DMCEnrollmentTemplateTableViewController <LSApplicationWorkspaceObserverProtocol>



@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace; // ivar: _appWorkspace
@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView; // ivar: _confirmationView
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiredAppInstalled; // ivar: _requiredAppInstalled
@property (retain, nonatomic) NSArray *requiredEntitlements; // ivar: _requiredEntitlements
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 appBundleIDs:(id)arg1 requiredEntitlements:(id)arg2 ;
-(void)_setupNavigationBar;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)updateContinueButtonStatus;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif