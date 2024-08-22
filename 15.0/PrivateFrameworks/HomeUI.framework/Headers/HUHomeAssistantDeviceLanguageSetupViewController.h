// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUHOMEASSISTANTDEVICELANGUAGESETUPVIEWCONTROLLER_H
#define HUHOMEASSISTANTDEVICELANGUAGESETUPVIEWCONTROLLER_H

@class OBTrayButton, NSString, OBLinkTrayButton, HMHome, NSArray;
@protocol HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"
#import "HUPersonalRequestsEditorItemManager.h"

@interface HUHomeAssistantDeviceLanguageSetupViewController : HUImageOBWelcomeController <HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (nonatomic) NSString *continueButtonString; // ivar: _continueButtonString
@property (nonatomic) SEL continueSelector; // ivar: _continueSelector
@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (nonatomic) NSString *customizeButtonString; // ivar: _customizeButtonString
@property (nonatomic) SEL customizeSelector; // ivar: _customizeSelector
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSString *detailsString; // ivar: _detailsString
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch; // ivar: _homeAssistantDevicesHavingLanguageMismatch
@property (nonatomic) BOOL isFinalStep;
@property (nonatomic) BOOL maxNumberOfVoicesReached; // ivar: _maxNumberOfVoicesReached
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // ivar: _prEditorItemManager
@property (nonatomic) BOOL shouldSetMultiUserIsEnabled; // ivar: _shouldSetMultiUserIsEnabled
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // ivar: _supportedVoiceRecognitionLanguages
@property (nonatomic) NSString *titleString; // ivar: _titleString


-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_cancelLanguageSetup;
-(void)_cancelLanguageSetupWithoutWarningUser;
-(void)_changeLanguage;
-(void)_completeLanguageSetup;
-(void)_setupPersonalRequestsItemInfrastructure;
-(void)_turnOffPersonalRequests;
-(void)userTappedCancelFromWarning;
-(void)userTappedContinueFromWarning;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif