// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSIMSETUPFLOW_H
#define TSSIMSETUPFLOW_H

@class NSMutableDictionary, NSString, UIViewController, UINavigationController, UIViewController<TSSetupFlowItem>;
@protocol TSSIMSetupFlowDelegate, UIAdaptivePresentationControllerDelegate, TSSIMSetupDelegate;

#import <Foundation/Foundation.h>

#import "TSSIMSetupFlow.h"

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate, UIAdaptivePresentationControllerDelegate>



@property (retain) NSMutableDictionary *backOptions; // ivar: _backOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak) UIViewController *dismissingViewController; // ivar: _dismissingViewController
@property (retain) UIViewController *firstViewControllerInstance; // ivar: _firstViewControllerInstance
@property (readonly) NSUInteger hash;
@property BOOL isFlowFinished; // ivar: _isFlowFinished
@property (weak) UINavigationController *navigationController; // ivar: _navigationController
@property (weak) UIViewController<TSSetupFlowItem> *nextViewController; // ivar: _nextViewController
@property (weak) TSSIMSetupFlow *parentFlow; // ivar: _parentFlow
@property (readonly) Class superclass;
@property (weak) UIViewController<TSSetupFlowItem> *topViewController; // ivar: _topViewController


+(id)createTSRemotePlanWebsheetContext:(id)arg0 ;
+(id)flowWithOptions:(id)arg0 ;
+(id)initActivationCodeRequireSetup:(BOOL)arg0 ;
+(id)initWithActivationCodeOnlyFlow;
+(id)initWithAppName:(id)arg0 requireSetup:(BOOL)arg1 ;
+(id)initWithAppName:(id)arg0 requireSetup:(BOOL)arg1 skipGeneralInstallConsent:(BOOL)arg2 ;
+(id)initWithOptions:(id)arg0 ;
+(id)initWithSetupFlowWithIccid:(id)arg0 showAddPlan:(BOOL)arg1 ;
+(id)initWithSetupFlowWithIccid:(id)arg0 showAddPlan:(BOOL)arg1 forceDualSIMSetup:(BOOL)arg2 ;
+(void)needsToRun:(id)arg0 ;
+(void)needsToRunUsingMessageSession:(id)arg0 completion:(id)arg1 ;
+(void)needsToRunUsingMessageSession:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_needCustomizeBackAction:(id)arg0 ;
-(BOOL)_startOver:(id)arg0 ;
-(id)firstViewController;
-(id)init;
-(id)nextViewControllerFrom:(id)arg0 ;
-(id)rootViewController;
-(void)_maybeClearSubFlow;
-(void)_notifyFlowCompletion:(NSUInteger)arg0 ;
-(void)_popAllSIMSetupFlowViewControllers:(id)arg0 ;
-(void)_pushStartOverViewController:(id)arg0 from:(id)arg1 ;
-(void)appBackgrounded;
-(void)appForegrounded;
-(void)cancelNextPane;
-(void)firstViewController:(id)arg0 ;
-(void)installationFailed;
-(void)maybeRegisterDismissHandler:(id)arg0 ;
-(void)navigateToNextPaneFrom:(id)arg0 navigationController:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)receivedResponse;
-(void)receivedResponseWithVC:(id)arg0 ;
-(void)restartWith:(id)arg0 ;
-(void)showFirstViewControllerWithHostController:(id)arg0 completion:(id)arg1 ;
-(void)showLoadFailureAlert:(id)arg0 ;
-(void)startOverWithFirstViewController:(id)arg0 ;
-(void)userDidTapCancel;
-(void)viewControllerDidComplete:(id)arg0 ;
-(void)waitForResponse:(id)arg0 ;


@end


#endif