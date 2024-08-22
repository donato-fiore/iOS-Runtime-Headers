// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUISIRISETUPVIEWCONTROLLER_H
#define AFUISIRISETUPVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, VTUITurnOnSiriView, VTUISiriDataSharingOptInPresenter, OBWelcomeController, AFEnablementConfiguration, AFEnablementFlowConfigurationProvider, UIStatusBar;
@protocol VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, UIAdaptivePresentationControllerDelegate, AFUISiriSetupViewControllerDelegate;



@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UIView *_contentView;
    NSString *_selectedRecognitionLanguageCode;
    VTUITurnOnSiriView *_setupView;
    VTUISiriDataSharingOptInPresenter *_dataSharingOptInPresenter;
    OBWelcomeController *_dataSharingOptInViewController;
    AFEnablementConfiguration *_enablementConfiguration;
    AFEnablementFlowConfigurationProvider *_enablementConfigurationProvider;
    BOOL _isLoadingEnablementConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUISiriSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastTimeShown; // ivar: _lastTimeShown
@property (retain, nonatomic) UIView *siriSetupView; // ivar: _siriSetupView
@property (retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_canShowWhileLocked;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)_continueTapped:(id)arg0 ;
-(void)_continueWithLanguageCode:(id)arg0 commitLanguageCodeToPreferences:(BOOL)arg1 ;
-(void)_fetchEnablementConfiguration;
-(void)_laterTapped:(id)arg0 ;
-(void)_presentDataSharingOptInViewController;
-(void)_setLoadingEnablementConfiguration:(BOOL)arg0 ;
-(void)aboutSelectedInTurnOnSiriView:(id)arg0 ;
-(void)animatedAppearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)animatedDisappearanceWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg0 ;
-(void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)voiceSelectionController:(id)arg0 didSelectVoice:(id)arg1 ;


@end


#endif