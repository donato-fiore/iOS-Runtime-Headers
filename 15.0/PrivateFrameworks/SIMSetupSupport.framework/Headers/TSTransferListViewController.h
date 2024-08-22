// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTRANSFERLISTVIEWCONTROLLER_H
#define TSTRANSFERLISTVIEWCONTROLLER_H

@class OBTableWelcomeController, NSLayoutConstraint, OBBoldTrayButton, CTDisplayPlanList, NSMutableArray, NSString, UIView, NSArray;
@protocol UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>

 {
    BOOL _inBuddy;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _transferCompleted;
    BOOL _pendingInstallCompleted;
    BOOL _continueButtonTappedOnce;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    OBBoldTrayButton *_scanButton;
    CTDisplayPlanList *_pendingInstallItems;
}


@property (retain) NSMutableArray *chosenUseIndexPaths; // ivar: _chosenUseIndexPaths
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property BOOL isScanButtonTapped; // ivar: _isScanButtonTapped
@property BOOL showSIMSetup; // ivar: _showSIMSetup
@property (readonly) Class superclass;
@property (retain) UIView *tableFooter; // ivar: _tableFooter
@property (retain) NSArray *transferItems; // ivar: _transferItems


-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_calculatePlanSelection;
-(id)initWithTransferItems:(id)arg0 inBuddy:(BOOL)arg1 isActivationPolicyMismatch:(BOOL)arg2 isDualeSIMCapabilityLoss:(BOOL)arg3 pendingInstallItems:(id)arg4 ;
-(id)initWithTransferItems:(id)arg0 inBuddy:(BOOL)arg1 isActivationPolicyMismatch:(BOOL)arg2 pendingInstallItems:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_continueButtonTapped;
-(void)_installSelectedPlans;
-(void)_maybeDisplayPhysicalPlanConversionAlert:(BOOL)arg0 phoneNumber:(id)arg1 completion:(id)arg2 ;
-(void)_maybeUpdateTableView;
-(void)_preparePlanPendingInstall:(id)arg0 withDeviceID:(id)arg1 ;
-(void)_preparePlanTransfer:(id)arg0 withDeviceID:(id)arg1 ;
-(void)_scanButtonTapped;
-(void)_skipButtonTapped;
-(void)_startPendingInstall:(id)arg0 ;
-(void)_startPlanTransfer:(id)arg0 withDeviceID:(id)arg1 ;
-(void)_viewMaybeCompleted;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFooterView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif