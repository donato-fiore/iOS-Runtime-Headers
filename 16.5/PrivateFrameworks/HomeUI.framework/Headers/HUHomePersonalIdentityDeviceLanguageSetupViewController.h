// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEPERSONALIDENTITYDEVICELANGUAGESETUPVIEWCONTROLLER_H
#define HUHOMEPERSONALIDENTITYDEVICELANGUAGESETUPVIEWCONTROLLER_H

@class OBWelcomeController, OBTrayButton, OBLinkTrayButton, NSString, HMHome, NSDictionary, NSArray;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) NSDictionary *languageToHomePodsMapping; // ivar: _languageToHomePodsMapping
@property (retain, nonatomic) NSString *overrideTargetLanguage; // ivar: _overrideTargetLanguage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // ivar: _supportedVoiceRecognitionLanguages
@property (retain, nonatomic) NSString *targetLanguage; // ivar: _targetLanguage


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_cancelLanguageSetup;
-(void)_changeSiriLanguage;
-(void)_completeLanguageSetup;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif