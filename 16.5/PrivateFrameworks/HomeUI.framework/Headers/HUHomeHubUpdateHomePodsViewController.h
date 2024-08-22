// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBUPDATEHOMEPODSVIEWCONTROLLER_H
#define HUHOMEHUBUPDATEHOMEPODSVIEWCONTROLLER_H

@class UIBarButtonItem, OBTrayButton, NSString, NSArray, NAFuture, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerFlow, HUSoftwareUpdateUIPresentationDelegate, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUHomeHubUpdateHomePodsViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUSoftwareUpdateUIPresentationDelegate, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *homePods; // ivar: _homePods
@property (copy, nonatomic) NSArray *homes; // ivar: _homes
@property (nonatomic) BOOL isFinalStep;
@property (nonatomic) BOOL ranIntoFetchError; // ivar: _ranIntoFetchError
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // ivar: _softwareUpdateFetchFuture
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (nonatomic) BOOL userTappedUpdate; // ivar: _userTappedUpdate


-(BOOL)_allHomePodsHaveValidSoftwareUpdatesOrSupportsHH2;
-(BOOL)_noHomePodsWithAvailableUpdates;
-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithOwnedHomes:(id)arg0 homePodsToUpdate:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg0 dismissViewController:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg0 presentViewController:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_continueButtonPressed:(id)arg0 ;
-(void)_dismiss;
-(void)_fetchSoftwareUpdates;
-(void)_hideSpinner;
-(void)_presentErrorWithMessage:(id)arg0 ;
-(void)_presentGenericError;
-(void)_showSpinner;
-(void)_startUpdate;
-(void)viewDidLoad;


@end


#endif