// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDNSCONFIGVIEWCONTROLLER_H
#define WFDNSCONFIGVIEWCONTROLLER_H

@class NSMutableArray, NSArray, UIBarButtonItem;


#import "WFInsetTableViewController.h"
#import "WFAppearanceProxy.h"

@interface WFDNSConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (nonatomic) NSInteger dnsConfig; // ivar: _dnsConfig
@property (retain, nonatomic) NSMutableArray *domains; // ivar: _domains
@property (nonatomic) NSInteger originalDNSConfig; // ivar: _originalDNSConfig
@property (retain, nonatomic) NSArray *originalDomains; // ivar: _originalDomains
@property (retain, nonatomic) NSArray *originalServers; // ivar: _originalServers
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (copy, nonatomic) id *saveHandler; // ivar: _saveHandler
@property (retain, nonatomic) NSMutableArray *servers; // ivar: _servers
@property (nonatomic) BOOL shouldShowPrivacyRelayHeader; // ivar: _shouldShowPrivacyRelayHeader


-(BOOL)_canShowWhileLocked;
-(BOOL)_isChinaDevice;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(CGFloat)_configCellLeadingInset;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)sectionForSectionNumber:(NSInteger)arg0 ;
-(NSInteger)sectionNumberForSection:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 appearanceProxy:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addDomainAtIndexPath:(id)arg0 ;
-(void)_addServerAtIndexPath:(id)arg0 ;
-(void)_updateSaveEnabled;
-(void)save:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif