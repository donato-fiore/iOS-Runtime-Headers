// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBSHAREDHOMEWARNINGVIEWCONTROLLER_H
#define HUHOMEHUBSHAREDHOMEWARNINGVIEWCONTROLLER_H

@class UIBarButtonItem, OBBoldTrayButton, NSString, NSSet, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerFlow, HFItemManagerDelegate, HFHomeManagerObserver, HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUHomeHubSharedHomeWarningViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HFItemManagerDelegate, HFHomeManagerObserver, HUConfigurationViewController>



@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) OBBoldTrayButton *commitButton; // ivar: _commitButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *homes; // ivar: _homes
@property (nonatomic) BOOL isFinalStep; // ivar: _isFinalStep
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)_commitOrContinueButtonTitle;
-(id)initWithSharedHomes:(id)arg0 ;
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