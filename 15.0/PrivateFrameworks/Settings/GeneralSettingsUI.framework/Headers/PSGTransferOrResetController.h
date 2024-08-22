// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGTRANSFERORRESETCONTROLLER_H
#define PSGTRANSFERORRESETCONTROLLER_H

@class PSListController, NSString, MBManager, PSSpecifier, FLFollowUpActionHandler;
@protocol MBManagerDelegate, SBSHardwareButtonEventConsuming, CoreTelephonyClientCarrierBundleDelegate;


#import "PSGResetPrefChildViewController.h"

@interface PSGTransferOrResetController : PSListController <MBManagerDelegate, SBSHardwareButtonEventConsuming, CoreTelephonyClientCarrierBundleDelegate>

 {
    BOOL _shouldEraseCellularPlans;
    NSString *_passcode;
    MBManager *_backupManager;
    PSGResetPrefChildViewController *_resetPrefListController;
    PSSpecifier *_preBuddyGroupSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) FLFollowUpActionHandler *prebuddyActionHandler; // ivar: _prebuddyActionHandler
@property (readonly) Class superclass;


-(id)init;
-(id)specifiers;
-(void)beginPrebuddy:(id)arg0 ;
-(void)deviceFullErase:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)presentExitBuddyWithUpsellTradeIn:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif