// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKERASEFLOW_H
#define DKERASEFLOW_H

@class NSString, UIViewController, UINavigationController, NWPathEvaluator;
@protocol SBSHardwareButtonEventConsuming, DKAccountProvider, DKCloudProvider, DKFindMyProvider, BSInvalidatable, DKNotableUserDataProvider, DKPasscodeProvider, DKWalletProvider;

#import <Foundation/Foundation.h>

#import "DKCloudUploadResults.h"
#import "DKConfiguration.h"
#import "DKNotableUserData.h"

@interface DKEraseFlow : NSObject <SBSHardwareButtonEventConsuming>



@property (retain, nonatomic) NSObject<DKAccountProvider> *accountProvider; // ivar: _accountProvider
@property (nonatomic) BOOL allowExpensiveCellular; // ivar: _allowExpensiveCellular
@property (retain, nonatomic) NSObject<DKCloudProvider> *cloudProvider; // ivar: _cloudProvider
@property (copy, nonatomic) id *cloudUploadCompletion; // ivar: _cloudUploadCompletion
@property (nonatomic, getter=isCloudUploadInProgress) BOOL cloudUploadInProgress; // ivar: _cloudUploadInProgress
@property (nonatomic) float cloudUploadProgress; // ivar: _cloudUploadProgress
@property (copy, nonatomic) id *cloudUploadProgressHandler; // ivar: _cloudUploadProgressHandler
@property (retain, nonatomic) DKCloudUploadResults *cloudUploadResults; // ivar: _cloudUploadResults
@property (nonatomic) BOOL cloudUploadSucceeded; // ivar: _cloudUploadSucceeded
@property (nonatomic) CGFloat cloudUploadTimeRemaining; // ivar: _cloudUploadTimeRemaining
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) DKConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) id *eraseDevice; // ivar: _eraseDevice
@property (retain, nonatomic) NSObject<DKFindMyProvider> *findMyProvider; // ivar: _findMyProvider
@property (copy, nonatomic) id *hasInternetConnectivity; // ivar: _hasInternetConnectivity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BSInvalidatable> *homeButtonConsumer; // ivar: _homeButtonConsumer
@property (retain, nonatomic) UIViewController *initialViewController; // ivar: _initialViewController
@property (copy, nonatomic) id *isBasebandDead; // ivar: _isBasebandDead
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) DKNotableUserData *notableUserData; // ivar: _notableUserData
@property (retain, nonatomic) NSObject<DKNotableUserDataProvider> *notableUserDataProvider; // ivar: _notableUserDataProvider
@property (retain, nonatomic) NSObject<DKPasscodeProvider> *passcodeProvider; // ivar: _passcodeProvider
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (copy, nonatomic) id *presentNetworkSettings; // ivar: _presentNetworkSettings
@property (nonatomic) BOOL skipLocalDataCheck; // ivar: _skipLocalDataCheck
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<DKWalletProvider> *walletProvider; // ivar: _walletProvider


+(id)_stringForState:(NSUInteger)arg0 ;
-(BOOL)_isHomeButtonAllowedForState:(NSUInteger)arg0 ;
-(BOOL)_requiresCellularPlanConfirmation;
-(Class)_viewControllerClassForState:(NSUInteger)arg0 ;
-(NSUInteger)state;
-(id)_viewControllerForState:(NSUInteger)arg0 ;
-(id)initForSetupAssistant;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 configuration:(id)arg1 ;
-(id)startFlow;
-(void)_advanceFromState:(NSUInteger)arg0 ;
-(void)_advanceToState:(NSUInteger)arg0 ;
-(void)_allowHomeButton;
-(void)_disallowHomeButton;
-(void)_endFlow;
-(void)_endFlowForCancellationWithReason:(id)arg0 ;
-(void)_endFlowWithReason:(id)arg0 ;
-(void)_hostWillTerminate;
-(void)_nextStateFromState:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_presentEraseCellularPlanConfirmation:(id)arg0 ;
-(void)_presentEraseConfirmation:(id)arg0 ;
-(void)_registerForAnalyticsNotifications;
-(void)_sendTerminatedAnalyticsEventWithState:(NSUInteger)arg0 willErase:(BOOL)arg1 reason:(id)arg2 ;
-(void)_startFlow;
-(void)_startNonInteractiveCloudUpload;
-(void)_supportsNonInteractiveCloudUpload:(id)arg0 ;
-(void)_unregisterForAnalyticsNotifications;
-(void)consumeAnyPressEventForButtonKind:(NSInteger)arg0 ;
-(void)prepareFlow:(id)arg0 ;
-(void)showFlowContainerFromParentViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif