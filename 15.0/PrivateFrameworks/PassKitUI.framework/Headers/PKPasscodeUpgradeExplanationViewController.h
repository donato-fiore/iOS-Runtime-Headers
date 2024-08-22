// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSCODEUPGRADEEXPLANATIONVIEWCONTROLLER_H
#define PKPASSCODEUPGRADEEXPLANATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPasscodeUpgradeFlowController.h"

@interface PKPasscodeUpgradeExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol>

 {
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKPasscodeUpgradeFlowController *_flowController;
    NSInteger _context;
    BOOL _isForWatch;
    BOOL _viewHasAppeared;
}


@property (copy, nonatomic) id *continuationHandler; // ivar: _continuationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *setupLaterHandler; // ivar: _setupLaterHandler
@property (readonly) Class superclass;
@property (nonatomic) BOOL upgradeRequiredToAddNewPass; // ivar: _upgradeRequiredToAddNewPass


-(id)initWithPasscodeUpgradeFlowController:(id)arg0 isForWatch:(BOOL)arg1 ;
-(id)paymentSetupMarker;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif