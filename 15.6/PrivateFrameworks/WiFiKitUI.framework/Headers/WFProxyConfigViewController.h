// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPROXYCONFIGVIEWCONTROLLER_H
#define WFPROXYCONFIGVIEWCONTROLLER_H

@class UISwitch;


#import "WFInsetTableViewController.h"
#import "WFAppearanceProxy.h"
#import "WFNetworkSettingsConfig.h"
#import "WFTextFieldCell.h"

@interface WFProxyConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (retain, nonatomic) UISwitch *authSwitch; // ivar: _authSwitch
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig; // ivar: _modifiedConfig
@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig; // ivar: _originalConfig
@property (retain, nonatomic) WFTextFieldCell *passwordCell; // ivar: _passwordCell
@property (retain, nonatomic) WFTextFieldCell *portCell; // ivar: _portCell
@property (copy, nonatomic) id *saveHandler; // ivar: _saveHandler
@property (retain, nonatomic) WFTextFieldCell *serverCell; // ivar: _serverCell
@property (retain, nonatomic) WFTextFieldCell *urlCell; // ivar: _urlCell
@property (retain, nonatomic) WFTextFieldCell *userCell; // ivar: _userCell


-(BOOL)_canShowWhileLocked;
-(CGFloat)_configCellLeadingInset;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 appearanceProxy:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_changeProxyAuthentication:(id)arg0 ;
-(void)_setFirstResponderAfterCell:(id)arg0 ;
-(void)_updateSaveEnabled;
-(void)save:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif