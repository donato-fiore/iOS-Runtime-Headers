// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIREMOTEVIEWCONTROLLER_H
#define TVRUIREMOTEVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, TVRCSessionData, SFClient, CUSystemMonitor, UIButton, NSArray;
@protocol TVRUIDeviceDelegate, TVRUIDeviceSearchDelegate, TVRUIDevicePickerDelegate, TVRAlertControllerDelegate, _TVRUIEventDelegate, SBSHardwareButtonEventConsuming, TVRUIContentPresenter, TVRUIDevice, TVRUIRemoteViewControllerDelegate, TVRUIDeviceConnectionStatusDelegate, TVRUIDeviceQuery, TVRUIStyleProvider, BSInvalidatable;


#import "TVRAlertController.h"
#import "TVRUIControlPanelViewController.h"
#import "TVRUIDevicePickerViewController.h"
#import "TVRKeyboardHaptic.h"
#import "TVRUIMediaControlsViewController.h"
#import "TVRMessageView.h"
#import "TVRUINetworkObserver.h"
#import "TVRUISiriManager.h"
#import "TVRUITopButtonPanelViewController.h"
#import "TVRUITouchpadViewController.h"

@interface TVRUIRemoteViewController : UIViewController <TVRUIDeviceDelegate, TVRUIDeviceSearchDelegate, TVRUIDevicePickerDelegate, TVRAlertControllerDelegate, _TVRUIEventDelegate, SBSHardwareButtonEventConsuming, TVRUIContentPresenter>



@property (retain, nonatomic) NSObject<TVRUIDevice> *activeDevice; // ivar: _activeDevice
@property (copy, nonatomic) NSString *activeDeviceIdentifier; // ivar: _activeDeviceIdentifier
@property (retain, nonatomic) NSObject<TVRUIDevice> *authenticatingDevice; // ivar: _authenticatingDevice
@property (retain, nonatomic) TVRAlertController *authenticationAlertController; // ivar: _authenticationAlertController
@property (nonatomic) CGFloat backgroundCornerRadius;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *blackGradientView; // ivar: _blackGradientView
@property (nonatomic, getter=isConfigured) BOOL configured; // ivar: _configured
@property (retain, nonatomic) TVRUIControlPanelViewController *controlPanelViewController; // ivar: _controlPanelViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRUIRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<TVRUIDeviceConnectionStatusDelegate> *deviceConnectionStatusDelegate; // ivar: _deviceConnectionStatusDelegate
@property (nonatomic) NSInteger deviceIdentifierType; // ivar: _deviceIdentifierType
@property (retain, nonatomic) TVRUIDevicePickerViewController *devicePickerViewController; // ivar: _devicePickerViewController
@property (retain, nonatomic) NSObject<TVRUIDeviceQuery> *deviceQuery; // ivar: _deviceQuery
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic, getter=isEditingSessionActive) BOOL editingSessionActive; // ivar: _editingSessionActive
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInReducedBacklightMode; // ivar: _isInReducedBacklightMode
@property (nonatomic) BOOL isInSecureWindow; // ivar: _isInSecureWindow
@property (retain, nonatomic) TVRAlertController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) TVRKeyboardHaptic *keyboardHaptic; // ivar: _keyboardHaptic
@property (nonatomic) NSInteger launchContext; // ivar: _launchContext
@property (copy, nonatomic) NSString *launchContextDesc; // ivar: _launchContextDesc
@property (retain, nonatomic) TVRUIMediaControlsViewController *mediaControlsViewController; // ivar: _mediaControlsViewController
@property (retain, nonatomic) TVRMessageView *messageView; // ivar: _messageView
@property (retain, nonatomic) TVRUINetworkObserver *networkObserver; // ivar: _networkObserver
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable; // ivar: _networkReachable
@property (copy, nonatomic) NSString *preferredDeviceIdentifier; // ivar: _preferredDeviceIdentifier
@property (retain, nonatomic) TVRCSessionData *sessionData; // ivar: _sessionData
@property (retain, nonatomic) SFClient *sharingClient; // ivar: _sharingClient
@property (readonly, nonatomic) BOOL shouldDisconnectAndStopConnections;
@property (retain, nonatomic) TVRUISiriManager *siriManager; // ivar: _siriManager
@property (nonatomic, getter=isSiriSessionActive) BOOL siriSessionActive; // ivar: _siriSessionActive
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSiri; // ivar: _supportsSiri
@property (nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl
@property (retain, nonatomic) CUSystemMonitor *systemMonitor; // ivar: _systemMonitor
@property (retain, nonatomic) UIButton *tapToRadarButton; // ivar: _tapToRadarButton
@property (retain, nonatomic) TVRUITopButtonPanelViewController *topButtonPanelViewController; // ivar: _topButtonPanelViewController
@property (retain, nonatomic) TVRUITouchpadViewController *touchpadViewController; // ivar: _touchpadViewController
@property (retain, nonatomic) NSArray *viewProviders; // ivar: _viewProviders
@property (retain, nonatomic) NSObject<BSInvalidatable> *volumeDecreaseSBSInvalidator; // ivar: _volumeDecreaseSBSInvalidator
@property (retain, nonatomic) NSObject<BSInvalidatable> *volumeIncreaseSBSInvalidator; // ivar: _volumeIncreaseSBSInvalidator


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAllowKeyboardToBePresented;
-(BOOL)hasPresentedContent;
-(CGFloat)_topButtonPanelHeight;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_stringForDeviceDeviceIdentifierType:(NSInteger)arg0 ;
-(id)_stringForLaunchContextType:(NSInteger)arg0 ;
-(id)animatorForDismissalAsAlert;
-(id)animatorForPresentationAsAlert;
-(id)init;
-(struct CGSize )preferredContentSize;
-(void)_activate;
-(void)_cancelHideConnectingAndShowDevicePicker;
-(void)_cancelPairing;
-(void)_cancelShowConnectingSpinner;
-(void)_connectToDevice:(id)arg0 ;
-(void)_createBlackGradientView;
-(void)_deactivate;
-(void)_disableSearch;
-(void)_disconnect;
-(void)_disconnectSystemInitiated;
-(void)_disconnectUserInitiated;
-(void)_enableSearch;
-(void)_enableSkipControls:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_expandDeviceList;
-(void)_forceShowMediaControls;
-(void)_hideConnectingAndShowDevicePicker;
-(void)_hideMessageContent;
-(void)_initSessionStatistics;
-(void)_installTapToRadarButton;
-(void)_layoutTouchpadExpanded:(BOOL)arg0 ;
-(void)_logSessionStatistics;
-(void)_performSiriEffectsWithButtonEvent:(id)arg0 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_presentKeyboardWithAttributes:(id)arg0 initialText:(id)arg1 ;
-(void)_presentLegacyPairingAlertWithCode:(id)arg0 ;
-(void)_presentPairingAlert;
-(void)_presentTextPasswordAlert;
-(void)_setupChildViewControllers;
-(void)_setupDevicePickerController;
-(void)_setupNetworkObserverIfNeeded;
-(void)_showConnectingSpinner;
-(void)_showSearchingSpinnerIfNeeded;
-(void)_tapToRadar;
-(void)_toggleControlAvailability;
-(void)_updateControlsAppearance;
-(void)_updateSecureWindowState;
-(void)alertController:(id)arg0 enteredText:(id)arg1 ;
-(void)alertController:(id)arg0 generatedTextInputPayload:(id)arg1 ;
-(void)alertControllerCancelled:(id)arg0 ;
-(void)alertControllerHitKeyboardReturnKey:(id)arg0 ;
-(void)alertControllerPressedDictationButton:(id)arg0 ;
-(void)alertControllerReleasedDictationButton:(id)arg0 ;
-(void)clearMessageContent;
-(void)configureWithContext:(id)arg0 ;
-(void)configureWithDeviceIdentifier:(id)arg0 identifierType:(NSInteger)arg1 deviceType:(NSInteger)arg2 launchContext:(NSInteger)arg3 ;
-(void)configureWithDeviceIdentifier:(id)arg0 type:(NSInteger)arg1 showPicker:(BOOL)arg2 ;
-(void)connectionServiceDidInvalidate:(id)arg0 ;
-(void)consumeSinglePressDownForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)device:(id)arg0 beganTextEditingWithAttributes:(id)arg1 initialText:(id)arg2 ;
-(void)device:(id)arg0 didEncounterAuthenticationThrottle:(NSInteger)arg1 ;
-(void)device:(id)arg0 didUpdateAttributes:(id)arg1 ;
-(void)device:(id)arg0 didUpdateText:(id)arg1 ;
-(void)device:(id)arg0 endedTextEditingWithAttributes:(id)arg1 endingText:(id)arg2 ;
-(void)device:(id)arg0 hasCaptionsEnabled:(BOOL)arg1 ;
-(void)device:(id)arg0 hidesMediaControls:(id)arg1 ;
-(void)device:(id)arg0 needsMediaControls:(id)arg1 ;
-(void)device:(id)arg0 supportsSiri:(BOOL)arg1 volumeControl:(BOOL)arg2 ;
-(void)device:(id)arg0 supportsVolumeControl:(BOOL)arg1 ;
-(void)deviceBeganConnecting:(id)arg0 ;
-(void)deviceDidConnect:(id)arg0 ;
-(void)deviceDidDisconnect:(id)arg0 reason:(NSInteger)arg1 error:(id)arg2 ;
-(void)deviceDidEncounterAuthenticationChallenge:(id)arg0 passwordType:(NSUInteger)arg1 passcode:(id)arg2 ;
-(void)deviceListUpdated:(id)arg0 ;
-(void)devicePicked:(id)arg0 ;
-(void)devicePickerWillChangeState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchPreferredDeviceIdentifier;
-(void)generatedButtonEvent:(id)arg0 ;
-(void)generatedTouchEvent:(id)arg0 ;
-(void)keyboardRequested;
-(void)networkReachabilityDidUpdate:(BOOL)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 ;
-(void)showGenericUnableToConnectMessage;
-(void)showLoadingSpinner;
-(void)showMessageWithError:(id)arg0 andDevice:(id)arg1 ;
-(void)showMessageWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showMessageWithTitle:(id)arg0 message:(id)arg1 titleFont:(id)arg2 ;
-(void)showNoAssociatedNetworkMessage;
-(void)showNoWIFIConnectionMessage;
-(void)showPairingMessageWithCode:(id)arg0 ;
-(void)showSearchingSpinner;
-(void)showThrottleConnectMessage;
-(void)startConnections;
-(void)stopConnections;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)volumeDownEventGenerated;
-(void)volumeUpEventGenerated;
-(void)willShowDirectionalControls;


@end


#endif