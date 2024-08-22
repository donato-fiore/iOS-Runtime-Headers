// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSSINGLEPLANTRANSFERVIEWCONTROLLER_H
#define TSSINGLEPLANTRANSFERVIEWCONTROLLER_H

@class NSDictionary, CTDisplayPlan, NSString, CTRemotePlan;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSSinglePlanTransferViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

 {
    NSUInteger _planType;
    NSDictionary *_transferPlan;
    CTDisplayPlan *_pendingInstallPlan;
    NSString *_deviceName;
    NSString *_phoneNumber;
    CTRemotePlan *_planItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isScanButtonTapped; // ivar: _isScanButtonTapped
@property BOOL showSIMSetup; // ivar: _showSIMSetup
@property (readonly) Class superclass;


-(id)initWithLocalPhysical:(id)arg0 carrierName:(id)arg1 ;
-(id)initWithPendingInstallPlan:(id)arg0 ;
-(id)initWithTransferPlan:(id)arg0 isPhysical:(BOOL)arg1 isIneligible:(BOOL)arg2 ;
-(void)_cancelButtonTapped;
-(void)_continueButtonTapped;
-(void)_scanButtonTapped;
-(void)_showAlert:(id)arg0 ;
-(void)_startLocalPlanConversion;
-(void)_startPendingInstall:(id)arg0 ;
-(void)_startPlanTransfer:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif