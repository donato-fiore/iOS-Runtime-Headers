// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSCODEUPGRADEFLOWCONTROLLER_H
#define PKPASSCODEUPGRADEFLOWCONTROLLER_H

@class PKPaymentProvisioningController, UINavigationController, NSString;
@protocol DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentWebServiceTargetDeviceProtocol;

#import <Foundation/Foundation.h>


@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
    UINavigationController *_navigationController;
    id *_completionHandler;
    NSInteger _presentedViewControllerCount;
}


@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;
@property (nonatomic) BOOL upgradeRequiredToAddNewPass; // ivar: _upgradeRequiredToAddNewPass


-(BOOL)_isWatchTarget;
-(id)init;
-(id)initWithPaymentProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 navigationController:(id)arg3 completionHandler:(id)arg4 ;
-(void)_completeWithShouldContinue:(BOOL)arg0 error:(id)arg1 ;
-(void)_showChangePasscodeFlow;
-(void)_showCurrentDevicePasscodeViewController;
-(void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)arg0 ;
-(void)_showPasscodeUpgradeExplanation;
-(void)beginShowingViewController;
-(void)dealloc;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)dismissPasscodeUpgradeFlow;
-(void)endedShowingViewController;
-(void)newDevicePasscodeViewController:(id)arg0 didFinishSettingPasscode:(BOOL)arg1 withError:(id)arg2 ;
-(void)showPasscodeUpgradeFlow;


@end


#endif