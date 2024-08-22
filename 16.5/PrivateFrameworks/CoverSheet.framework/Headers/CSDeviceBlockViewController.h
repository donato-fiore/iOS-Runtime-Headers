// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDEVICEBLOCKVIEWCONTROLLER_H
#define CSDEVICEBLOCKVIEWCONTROLLER_H

@class SBFDeviceBlockTimer, ACAccountStore, ACAccount, NSString;
@protocol CSModalViewDelegate, CSDeviceBlockViewDelegate, CSEraseDeviceViewControllerDelegate, CSEraseDeviceAuthViewControllerDelegate, SBFBlockStatusProvider, OS_dispatch_queue, OS_nw_path_monitor;


#import "CSModalViewControllerBase.h"
#import "CSEraseDeviceViewController.h"
#import "CSEraseDeviceAuthViewController.h"
#import "CSLockScreenSettings.h"

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate, CSDeviceBlockViewDelegate, CSEraseDeviceViewControllerDelegate, CSEraseDeviceAuthViewControllerDelegate>

 {
    id<SBFBlockStatusProvider> *_blockStatusProvider;
    CSEraseDeviceViewController *_eraseDeviceViewController;
    CSEraseDeviceAuthViewController *_authenticationViewController;
    SBFDeviceBlockTimer *_blockTimer;
    CSLockScreenSettings *_lockScreenSettings;
    id *_pendingAction;
    NSObject<OS_dispatch_queue> *_accountAccessQueue;
    ACAccountStore *_accountStore;
    ACAccount *_findMyAccount;
    BOOL _attemptingErase;
    BOOL _hasActiveInternetConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkMonitorQueue; // ivar: _networkMonitorQueue
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor; // ivar: _networkPathMonitor
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)_isFindMyChangingState;
-(BOOL)_isFindMyEnabled;
-(BOOL)_shouldShowEraseDeviceButton;
-(NSInteger)presentationPriority;
-(id)_obfuscateUsername:(id)arg0 ;
-(id)initWithDeviceBlockStatusProvider:(id)arg0 ;
-(id)view;
-(id)viewIfLoaded;
-(void)_attemptErase;
-(void)_attemptToDisableFindMyWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)_cancelPendingActionAfterDelay:(CGFloat)arg0 ;
-(void)_disableFindMyInContext:(NSUInteger)arg0 withWipeToken:(id)arg1 completion:(id)arg2 ;
-(void)_dismissEraseDeviceViewController;
-(void)_eraseDeviceWithCompletion:(id)arg0 ;
-(void)_getUserAccountWithCompletion:(id)arg0 ;
-(void)_handleDeviceLocatorStateDidChange:(id)arg0 ;
-(void)_performFMIPAuthenticationForContext:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
-(void)_presentAuthenticationViewController;
-(void)_presentEraseDeviceViewController;
-(void)_setNetworkMonitorUpdateHandlerWithPath:(id)arg0 completion:(id)arg1 ;
-(void)_setUpNetworkPathMonitor;
-(void)_updateText;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)authViewController:(id)arg0 didConfirmEraseAfterAuthenticationWithResults:(id)arg1 ;
-(void)authViewControllerDidCancelToEraseDeviceAfterAuthentication:(id)arg0 ;
-(void)cancelButtonTapped;
-(void)dealloc;
-(void)handleCancelButtonTapped;
-(void)handleEmergencyButtonAction;
-(void)handleEraseButtonAction;
-(void)handleEraseButtonTapped;
-(void)handlePrimaryActionForView:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif