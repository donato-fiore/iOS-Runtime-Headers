// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARPLANACTIVATINGFLOW_H
#define TSCELLULARPLANACTIVATINGFLOW_H

@class NSTimer, UIBarButtonItem, NSString, CoreTelephonyClient, NSError, CTCellularPlanItem, NSNumber, NSDictionary, UINavigationController;
@protocol CoreTelephonyClientCellularPlanManagementDelegate, TSCellularPlanManagerCacheDelegate, TSSIMSetupDelegate, TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSCellularPlanActivatingFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, TSCellularPlanManagerCacheDelegate, TSSIMSetupDelegate, TSSIMSetupFlowDelegate>



@property (retain) NSTimer *activatingTimer; // ivar: _activatingTimer
@property NSUInteger backgroundTask; // ivar: _backgroundTask
@property (retain) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain) NSString *carrierName; // ivar: _carrierName
@property (retain) CoreTelephonyClient *client; // ivar: _client
@property NSUInteger currentActivatingState; // ivar: _currentActivatingState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL eSIMInstallFromWebsheetFlowStarted; // ivar: _eSIMInstallFromWebsheetFlowStarted
@property (retain) NSError *failureWebsheetError; // ivar: _failureWebsheetError
@property (copy) id *firstViewControllerCallback; // ivar: _firstViewControllerCallback
@property (readonly) NSUInteger hash;
@property (retain) NSString *installingPlanIdentifier; // ivar: _installingPlanIdentifier
@property (retain) NSString *phoneNumber; // ivar: _phoneNumber
@property BOOL planActiveOnSource; // ivar: _planActiveOnSource
@property (retain) NSError *planInstallError; // ivar: _planInstallError
@property (retain) NSString *planName; // ivar: _planName
@property NSUInteger planSetupType; // ivar: _planSetupType
@property BOOL shouldShowCompletePaneOnTimeout; // ivar: _shouldShowCompletePaneOnTimeout
@property BOOL skipActivatingPane; // ivar: _skipActivatingPane
@property CGFloat startTime; // ivar: _startTime
@property (retain) NSString *subscriptionContextUUID; // ivar: _subscriptionContextUUID
@property (readonly) Class superclass;
@property (retain) id *transferBackOldItem; // ivar: _transferBackOldItem
@property (retain) NSError *transferError; // ivar: _transferError
@property NSInteger transferState; // ivar: _transferState
@property (retain) CTCellularPlanItem *updatePlanItem; // ivar: _updatePlanItem
@property (retain) NSNumber *waitForPhoneNumber; // ivar: _waitForPhoneNumber
@property (retain) TSSIMSetupFlow *websheetFlow; // ivar: _websheetFlow
@property (retain) NSDictionary *websheetOptions; // ivar: _websheetOptions
@property (weak) UINavigationController *websheetRootViewController; // ivar: _websheetRootViewController


-(BOOL)_isAppInBackground;
-(BOOL)_startedByFollowup;
-(BOOL)shouldOfferFallbackOptionOnError:(id)arg0 ;
-(id)_firstViewController;
-(id)firstViewController;
-(id)initWithSkipActivatingPane:(BOOL)arg0 delayStartTimer:(BOOL)arg1 transferBackPlan:(id)arg2 setupType:(NSUInteger)arg3 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_handleActivatingExpiry;
-(void)_maybeDeleteTransferBackItem:(id)arg0 ;
-(void)_maybeDismissAlert:(id)arg0 ;
-(void)_maybeMoveToNextViewController;
-(void)_onESIMInstallFromWebSheetFlowStart;
-(void)_onTransferError:(id)arg0 ;
-(void)_shouldWaitUntilPhoneNumberBeReady:(id)arg0 ;
-(void)_startBackgroundTask;
-(void)_startTimer:(CGFloat)arg0 ;
-(void)_stopBackgroundTask;
-(void)_stopTimer;
-(void)_submitCellularPlanSetupDetails;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)launchWebsheet:(id)arg0 completion:(id)arg1 ;
-(void)offerFallbackOption;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;
-(void)redirectToBTFlow;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)transferEventUpdate:(id)arg0 ;


@end


#endif