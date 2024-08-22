// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIPCONFIGVIEWCONTROLLER_H
#define WFIPCONFIGVIEWCONTROLLER_H



#import "WFInsetTableViewController.h"
#import "WFAppearanceProxy.h"
#import "WFTextFieldCell.h"
#import "WFNetworkSettingsConfig.h"

@interface WFIPConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (retain, nonatomic) WFTextFieldCell *clientIDCell; // ivar: _clientIDCell
@property (retain, nonatomic) WFTextFieldCell *ipAddressCell; // ivar: _ipAddressCell
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig; // ivar: _modifiedConfig
@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig; // ivar: _originalConfig
@property (retain, nonatomic) WFTextFieldCell *prefixCell; // ivar: _prefixCell
@property (retain, nonatomic) WFTextFieldCell *routerCell; // ivar: _routerCell
@property (copy, nonatomic) id *saveHandler; // ivar: _saveHandler
@property (retain, nonatomic) WFTextFieldCell *subnetMaskCell; // ivar: _subnetMaskCell
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)_canShowWhileLocked;
-(CGFloat)_configCellLeadingInset;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithConfig:(id)arg0 ipType:(NSInteger)arg1 ;
-(id)initWithConfig:(id)arg0 ipType:(NSInteger)arg1 appearanceProxy:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setFirstResponderAfterCell:(id)arg0 ;
-(void)_updateSaveEnabled;
-(void)didReceiveMemoryWarning;
-(void)save:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif