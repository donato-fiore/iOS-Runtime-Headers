// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTUIVIEWCONTROLLER_H
#define ASSISTANTUIVIEWCONTROLLER_H

@class UILabel, UIActivityIndicatorView, NSDictionary, UIBarButtonItem, UITextField, NSString, UIView, UITableView, NSArray;
@protocol AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, TableViewManagerDelegate, AUUIAlertDelegate, AssistantViewControllerDelegate;


#import "AUUITableViewController.h"
#import "AssistantUIController.h"
#import "AssistantCallbackController.h"
#import "AUUIAlert.h"
#import "AssistantSubUIViewController.h"
#import "AUPasswordUIAlert.h"
#import "NetTopoMiniStaticLayout.h"

@interface AssistantUIViewController : AUUITableViewController <AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, TableViewManagerDelegate, AUUIAlertDelegate>

 {
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    NSDictionary *_recommendationParamDict;
    BOOL showingPasswordsAtEnd;
    int _currentUIConfigStep;
    NSDictionary *_mfiAccessoryResponseDict;
    BOOL _goingBack;
    NSUInteger _selectedActionTag;
}


@property (retain, nonatomic) AssistantUIController *_assistantUIController; // ivar: _assistantUIController
@property (retain, nonatomic) AssistantCallbackController *_controllerContext; // ivar: _controllerContext
@property (retain, nonatomic) AUUIAlert *askUserQuestionAlert; // ivar: askUserQuestionAlert
@property (nonatomic) NSObject<AssistantViewControllerDelegate> *assistantDelegate; // ivar: _assistantDelegate
@property (copy, nonatomic) NSDictionary *callerParamDict; // ivar: _callerParamDict
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: cancelButton
@property (retain, nonatomic) AUUIAlert *connectionVerificationAlert; // ivar: connectionVerificationAlert
@property (retain, nonatomic) AssistantSubUIViewController *currentSubController; // ivar: _currentSubController
@property (retain, nonatomic) UITextField *currentTextField; // ivar: currentTextField
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *justTextContainerView; // ivar: justTextContainerView
@property (nonatomic) UILabel *justTextLabel; // ivar: justTextLabel
@property (nonatomic) NSInteger letMeChooseButtonIndex; // ivar: letMeChooseButtonIndex
@property (copy, nonatomic) NSString *macAddress; // ivar: _macAddress
@property (retain, nonatomic) UITableView *mainTableView; // ivar: _mainTableView
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: nextButton
@property (copy, nonatomic) NSArray *paramScanResults; // ivar: _paramScanResults
@property (retain, nonatomic) AUPasswordUIAlert *passwordAlert; // ivar: passwordAlert
@property (nonatomic) NSInteger recommendationButtonIndex; // ivar: recommendationButtonIndex
@property (copy, nonatomic) NSDictionary *recommendationParamDict; // ivar: recommendationParamDict
@property (nonatomic) NSInteger restoreButtonIndex; // ivar: restoreButtonIndex
@property (copy, nonatomic) NSDictionary *scanInfoRecord; // ivar: _scanInfoRecord
@property (retain) NSString *settingUpStatusText; // ivar: _settingUpStatusText
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView; // ivar: _spinnerWithStatusAdjacentView
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView; // ivar: spinnerWithStatusBelowView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tableHeaderContainerView; // ivar: tableHeaderContainerView
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout; // ivar: topoLayout
@property (retain, nonatomic) UIView *topoView; // ivar: topoView
@property (retain, nonatomic) AUUIAlert *uiAlert; // ivar: uiAlert


+(void)readjustSubviewsInContainer:(id)arg0 ;
-(BOOL)auUIAlertAlternateAction:(id)arg0 ;
-(BOOL)auUIAlertCancelAction:(id)arg0 ;
-(BOOL)auUIAlertDestructiveAction:(id)arg0 ;
-(BOOL)auUIAlertOKAction:(id)arg0 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)modifyTopoUIInLayer:(id)arg0 withLayout:(id)arg1 newLayout:(id)arg2 ;
-(id)newStepByStepControllerForStep:(int)arg0 ;
-(id)radioNameFromBaseStation:(id)arg0 ;
-(id)valueForItemOfType:(id)arg0 atTypeIndex:(NSUInteger)arg1 inCellWithTag:(NSInteger)arg2 ;
-(int)callbackAskUserAQuestion:(int)arg0 paramDict:(id)arg1 forController:(id)arg2 ;
-(int)callbackAskUserForPassword:(int)arg0 param:(id)arg1 forController:(id)arg2 ;
-(int)callbackAskUserForSetupCode:(int)arg0 isRetry:(BOOL)arg1 forController:(id)arg2 ;
-(int)callbackAskUserForUncertifiedForController:(id)arg0 ;
-(void)assistantUpdateProgress:(id)arg0 forState:(int)arg1 ;
-(void)assistantWaitingForResourcesComplete;
-(void)assistantWaitingForResourcesStart;
-(void)baseStationConfigurationComplete:(id)arg0 ;
-(void)callbackAskCancel;
-(void)confirmSkipWANPort;
-(void)connectionVerificationSucceededForSelector:(int)arg0 ;
-(void)continueWithDiagsAndUsageStats;
-(void)continueWithGuestNetSettings;
-(void)continueWithPPPoESettings;
-(void)continueWithSwapCabling;
-(void)dealloc;
-(void)doneWithAssistantResult:(int)arg0 ;
-(void)handeImmediateCancel;
-(void)handleCancelButton:(id)arg0 ;
-(void)handleCancelRequest:(BOOL)arg0 ;
-(void)handleNextButton:(id)arg0 ;
-(void)initializeServiesDone;
-(void)keyboardReturnKeySetEnabled:(BOOL)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)playDoneSound;
-(void)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)presentUIForRecommendationResult:(int)arg0 paramDict:(id)arg1 ;
-(void)presentUIForRecommendationStatus;
-(void)presentUIForRecommmendationTargetInfo:(id)arg0 ;
-(void)presentUIForSetupResult:(int)arg0 baseStationInfo:(id)arg1 withPrompt:(id)arg2 ;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)arg0 ;
-(void)presentUIForStepByStepNextStep:(int)arg0 paramDict:(id)arg1 ;
-(void)presentUIForStepByStepResult:(int)arg0 ;
-(void)presentUIForStepByStepStart;
-(void)presentWaitingForWANViewWithContinueText:(BOOL)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)readyToGuess;
-(void)replaceSubviewsInView:(id)arg0 newSubviews:(id)arg1 withAnimation:(BOOL)arg2 ;
-(void)setupCompleteShowPasswords:(BOOL)arg0 ;
-(void)showAskUserForPPPoECredentialsForStatus:(int)arg0 paramDict:(id)arg1 ;
-(void)showAskUserSwapCablingForStatus:(int)arg0 paramDict:(id)arg1 ;
-(void)showTellUserToFixTheirInternetConnection;
-(void)showTellUserToPlugInEthernetForStatus:(int)arg0 paramDict:(id)arg1 ;
-(void)showTellUserToResetBroadbandDeviceForStatus:(int)arg0 paramDict:(id)arg1 ;
-(void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg0 ;
-(void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg0 ;
-(void)showUIForSetupStatus;
-(void)skipPluginAudioCabling;
-(void)skipWANPort;
-(void)startSetup:(id)arg0 ;
-(void)touchInCellAtIndexPath:(id)arg0 ;


@end


#endif