// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDIAGNOSTICSTABLEVIEWCONTROLLER_H
#define WFDIAGNOSTICSTABLEVIEWCONTROLLER_H

@class WFInsetTableViewController, WFAppearanceProxy, UITableViewCell, NSDate, NSOrderedSet;
@protocol WFDiagnosticsProviderContext, WFDetailsProviderContext;


#import "WFNetworkSettingsCellFactory.h"
#import "WFHyperlinkFooterView.h"

@interface WFDiagnosticsTableViewController : WFInsetTableViewController

@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory; // ivar: _cellFactory
@property (retain, nonatomic) NSObject<WFDiagnosticsProviderContext> *context; // ivar: _context
@property (retain, nonatomic) NSObject<WFDetailsProviderContext> *detailsContext; // ivar: _detailsContext
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView; // ivar: _linkFooterView
@property (retain, nonatomic) UITableViewCell *networkQualityCell; // ivar: _networkQualityCell
@property (retain, nonatomic) NSDate *networkQualityFooterDate; // ivar: _networkQualityFooterDate
@property (retain, nonatomic) WFHyperlinkFooterView *networkQualityFooterView; // ivar: _networkQualityFooterView
@property (nonatomic) BOOL networkQualitySpinning; // ivar: _networkQualitySpinning
@property (retain, nonatomic) NSOrderedSet *sections; // ivar: _sections
@property (nonatomic) BOOL useInsetGroupedTableView; // ivar: _useInsetGroupedTableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_defaultSections;
-(id)initWithDiagnosticsContext:(id)arg0 detailsProviderContext:(id)arg1 ;
-(id)initWithDiagnosticsContext:(id)arg0 detailsProviderContext:(id)arg1 appearanceProxy:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_fillNetworkQualityCell:(id)arg0 ;
-(void)_networkQualityOpenURL;
-(void)_openNetworkQualityDetails:(id)arg0 ;
-(void)_refresh;
-(void)_reloadNetworkQualityCell;
-(void)_runNetworkQuality;
-(void)_updateNetworkQualityFooterText;
-(void)donePressed;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif