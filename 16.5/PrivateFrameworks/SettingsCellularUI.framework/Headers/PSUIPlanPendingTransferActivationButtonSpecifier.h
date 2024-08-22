// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIPLANPENDINGTRANSFERACTIVATIONBUTTONSPECIFIER_H
#define PSUIPLANPENDINGTRANSFERACTIVATIONBUTTONSPECIFIER_H

@class PSSpecifier, UINavigationController, CTCellularPlanManager, NSString, TSSIMSetupFlow, PSListController, CTCellularPlanPendingTransfer, UIActivityIndicatorView, UIViewController;
@protocol TSSIMSetupDelegate;



@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier <TSSIMSetupDelegate>

 {
    id *_originAccessoryView;
    UINavigationController *_navigationController;
}


@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) CTCellularPlanPendingTransfer *plan; // ivar: _plan
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *topViewController; // ivar: _topViewController


-(id)getLogger;
-(id)initWithListController:(id)arg0 planPendingTransfer:(id)arg1 ;
-(void)activatePlanPendingTransfer:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setSpecifierProperties;
-(void)showSpinner:(BOOL)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif