// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARPLANINTROVIEWCONTROLLER_H
#define TSCELLULARPLANINTROVIEWCONTROLLER_H

@class OBLinkTrayButton, NSString;
@protocol TSSIMSetupDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSCellularPlanIntroViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>

 {
    OBLinkTrayButton *_laterButton;
    BOOL _showTransferOption;
    id *viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isProximityTransferButtonTapped; // ivar: _isProximityTransferButtonTapped
@property BOOL isScanButtonTapped; // ivar: _isScanButtonTapped
@property BOOL requireDelayBluetoothConnection; // ivar: _requireDelayBluetoothConnection
@property (readonly) Class superclass;
@property (retain) id *transferBackPlan; // ivar: _transferBackPlan


-(BOOL)userInteractionEnabled;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)getCellTextAt:(id)arg0 ;
-(id)initWithShowTransferOption:(BOOL)arg0 requireDelayBluetoothConnection:(BOOL)arg1 ;
-(id)initWithTransferBackPlan:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_laterButtonTapped;
-(void)_learnMoreButtonTapped;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif