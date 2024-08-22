// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEHUBINTROSETUPVIEWCONTROLLER_H
#define HUHOMEHUBINTROSETUPVIEWCONTROLLER_H

@class OBLinkTrayButton, OBBoldTrayButton, NSString, UIActivityIndicatorView;
@protocol HFHomeManagerObserver, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUCenterFillOBWelcomeController.h"

@interface HUHomeHubIntroSetupViewController : HUCenterFillOBWelcomeController <HFHomeManagerObserver, HUConfigurationViewControllerFlow, HUConfigurationViewController>



@property (retain, nonatomic) OBLinkTrayButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) OBBoldTrayButton *commitButton; // ivar: _commitButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep; // ivar: _isFinalStep
@property (nonatomic) BOOL isViewVisible; // ivar: _isViewVisible
@property (nonatomic) BOOL moreThanOneHome; // ivar: _moreThanOneHome
@property (nonatomic) BOOL needsToPresentUpgradeFailedAlert; // ivar: _needsToPresentUpgradeFailedAlert
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


-(BOOL)_shouldBlockHH2Migration;
-(Class)onboardingFlowClass;
-(id)_commitOrContinueButtonTitle;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentView:(id)arg3 ;
-(void)_cancelFlow;
-(void)_cleanUp;
-(void)_commitOrContinue;
-(void)_completeSetup;
-(void)_hideSpinner;
// -(void)_presentUpgradeFailedAlert:(id)arg0 message:(id)arg1 retryTitle:(id)arg2 retryBlock:(id)arg3 cancelBlock:(unk)arg4  ;
-(void)_showSpinner;
-(void)homeManager:(id)arg0 didUpdateHH2MigrationInProgressState:(BOOL)arg1 ;
-(void)homeManager:(id)arg0 didUpdateHH2State:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif