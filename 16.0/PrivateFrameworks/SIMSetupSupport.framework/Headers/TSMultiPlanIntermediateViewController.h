// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSMULTIPLANINTERMEDIATEVIEWCONTROLLER_H
#define TSMULTIPLANINTERMEDIATEVIEWCONTROLLER_H

@class NSLayoutConstraint, NSArray, CTDisplayPlanList, NSString;
@protocol UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSMultiPlanIntermediateViewController : TSOBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem>

 {
    BOOL _inBuddy;
    BOOL _showOtherOptions;
    NSLayoutConstraint *_tableHeightAnchor;
    NSArray *_buttons;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    CTDisplayPlanList *_carrierSetupItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL installingTransferPlan; // ivar: _installingTransferPlan
@property BOOL isOtherButtonTapped; // ivar: _isOtherButtonTapped
@property BOOL isStandaloneProximityFlow; // ivar: _isStandaloneProximityFlow
@property BOOL isTransferListCellTapped; // ivar: _isTransferListCellTapped
@property BOOL showSIMSetup; // ivar: _showSIMSetup
@property (readonly) Class superclass;


-(CGFloat)_heightAnchorConstant;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPendingInstallItems:(id)arg0 ;
-(id)initWithTransferItems:(id)arg0 pendingInstallItems:(id)arg1 carrierSetupItems:(id)arg2 showOtherOptions:(BOOL)arg3 ;
-(id)initWithTransferItems:(id)arg0 pendingInstallItems:(id)arg1 carrierSetupItems:(id)arg2 showOtherOptions:(BOOL)arg3 isStandaloneProximityFlow:(BOOL)arg4 ;
-(id)initWithTransferItems:(id)arg0 showOtherOptions:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_otherButtonTapped;
-(void)_skipButtonTapped;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif