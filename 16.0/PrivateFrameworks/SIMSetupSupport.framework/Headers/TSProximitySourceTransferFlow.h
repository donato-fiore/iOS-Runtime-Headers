// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPROXIMITYSOURCETRANSFERFLOW_H
#define TSPROXIMITYSOURCETRANSFERFLOW_H

@class CoreTelephonyClient, NSString, UIViewController<PRXCardContentProviding>;
@protocol CoreTelephonyClientCellularPlanManagementDelegate, ESIMProxTransferControllerDelegate, TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"
#import "SSProximityDevice.h"
#import "TSCellularPlanProximityTransferController.h"

@interface TSProximitySourceTransferFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, ESIMProxTransferControllerDelegate, TSSIMSetupFlowDelegate>



@property (retain) SSProximityDevice *btClient; // ivar: _btClient
@property (retain) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isAuthenticationCompleted; // ivar: _isAuthenticationCompleted
@property BOOL isFlowCompleted; // ivar: _isFlowCompleted
@property BOOL isRemotePeerClosed; // ivar: _isRemotePeerClosed
@property BOOL isTransferCompleted; // ivar: _isTransferCompleted
@property int passcodeType; // ivar: _passcodeType
@property (retain) TSCellularPlanProximityTransferController *proxTransferController; // ivar: _proxTransferController
@property (retain) UIViewController<PRXCardContentProviding> *secureIntentProxCard; // ivar: _secureIntentProxCard
@property (readonly) Class superclass;


-(id)firstViewController;
-(id)initWithPeerDevice:(id)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_bootstrapTransfer;
-(void)_handleSKEvent:(id)arg0 ;
-(void)_proxCardFlowDidDismiss;
-(void)_resetExtension:(id)arg0 ;
-(void)_setIdleTimerDisabled:(BOOL)arg0 ;
-(void)_setupClient:(id)arg0 ;
-(void)dealloc;
-(void)didComplete;
-(void)didRequestPresentationForProxCard:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;
-(void)transferEventUpdate:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif