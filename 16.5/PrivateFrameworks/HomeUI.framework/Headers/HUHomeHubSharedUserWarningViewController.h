// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBSHAREDUSERWARNINGVIEWCONTROLLER_H
#define HUHOMEHUBSHAREDUSERWARNINGVIEWCONTROLLER_H

@class UIBarButtonItem, NSString, OBBoldTrayButton, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerFlow, HFItemManagerDelegate, HFHomeManagerObserver, HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUHomeHubSharedUserWarningViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HFItemManagerDelegate, HFHomeManagerObserver, HUConfigurationViewController>



@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSString *captionString; // ivar: _captionString
@property (retain, nonatomic) OBBoldTrayButton *commitButton; // ivar: _commitButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep; // ivar: _isFinalStep
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)_commitOrContinueButtonTitle;
-(id)initWithHomesToUsersMap:(id)arg0 ;
-(void)_cancelFlow:(id)arg0 ;
-(void)_cleanUp;
-(void)_commitOrContinue;
-(void)_completeSetup;
-(void)_continueTapped:(id)arg0 ;
-(void)_hideSpinner;
-(void)_showSpinner;
-(void)homeManager:(id)arg0 didUpdateHH2MigrationInProgressState:(BOOL)arg1 ;
-(void)homeManager:(id)arg0 didUpdateHH2State:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif